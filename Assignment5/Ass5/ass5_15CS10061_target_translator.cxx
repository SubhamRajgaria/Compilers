# include "ass5_15CS10061_translator.h"	
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

typedef union floats{
	double value;
	unsigned int ar[2];
}floats;
void update_offsets(){
  int i,j;
  int off_param = 8, loc_param = 0;
  int state = 0;
  symbolTable *temp;
  for(i = 0; i<= globalSymTable->curr_length; i++){
      if((globalSymTable->table[i]).nestedTable){
          temp = (globalSymTable->table[i]).nestedTable;
          off_param = 8;
          loc_param = 0;
          state = 0;
          for(j = 0;j <= temp->curr_length; j++){
			//printf("%d\n", state);
			if(!temp->table)
				break;
			//printf("%s\n", (temp->table[j]).name);
            /* Update offsets for parameters first */
            if(!strcmp((temp->table[j]).name, "retVal")){
              state = 1;
            }
            else{
              if(state == 0){
                (temp->table[j]).offset = off_param;
                off_param += (temp->table[j]).size;
              }
              else{
                loc_param -= (temp->table[j]).size;
                (temp->table[j]).offset = loc_param;
              }
            }
          }
      }
  }
  //cout << "Update done" << endl;
}

int label_number = 0;
void generateLabels(char **s){
  int i,lb;
  quadArrayRow *q;
  for(i = 0;i<nextInstr;i++){
    q = (quad_array->quadTable) + i;
    if(q->op == goto_LT || q->op == goto_LTE || q->op == goto_GT || q->op == goto_GTE || q->op == goto_EQ || q->op == goto_NEQ || q->op == _GOTO || q->op == IF_GOTO || q->op == IF_FALSE_GOTO){
      lb = atoi(q->res);
      if(!s[lb]){
           s[lb] = new char[10];
          sprintf(s[lb],".L%d",label_number);
          label_number++;
      }
    }
  }
  //cout << "Labels generated" << endl;
}
void tableOfConstants(){
  int i;
  if(countToc>0)
    printf("\t.section\t.rodata\n");
  for(i=0;i<countToc;i++){
    printf(".LC%d:\n",i);
    printf("\t.string\t%s\n",toc[i]);
  }
  printf("\t.text\n");
}

void update_glbl_gen_dt(){
    int i,flag = 0;
    floats val;
    symbolTableRow *temp = globalSymTable->table;
    for(i = 0;i <= globalSymTable->curr_length;i++){
      if(!((temp[i]).nestedTable)){
          temp[i].offset = -1;
          if(!(temp[i].initialValue)){
            printf("\t.comm\t%s,%d\n",temp[i].name,temp[i].size);
          }
          else{
            /* first obtain initial value */
            int init_val;
            int init_val2;
            int *dummy;
            char *dummy1;
            double * dummy2;
            if((temp[i].Type)->middle == _INT){
              dummy = (int *)(temp[i].initialValue);
              init_val = *dummy;
            }
            else if((temp[i].Type)->middle == _DOUBLE){
	dummy2 = (double *)(temp[i].initialValue);
	val.value = *dummy2;
	init_val = val.ar[1]; 
	init_val2 = val.ar[0];
            }
            else{ // Type is char
              dummy1 = (char *)(temp[i].initialValue);
              init_val = (int)(*dummy1);
            }
            /* Now generate assembly codes */
            printf("\t.globl\t%s\n",temp[i].name);
            if(flag == 0){
              printf("\t.data\n");
              flag = 1;
            }
            printf("\t.type\t%s, @object\n",temp[i].name);
            printf("\t.size\t%s, %d\n",temp[i].name,temp[i].size);
            printf("%s:\n",temp[i].name);
            if((temp[i].Type)->middle == _DOUBLE){
            	printf("\t.long\t%d\n",init_val);
	printf("\t.long\t%d\n",init_val2);
            }
            else
	printf("\t.long\t%d\n",init_val);
          }
      }
    }
    //cout << "Update global done " << endl;
    //printf("\t.text\n");
}
int size_symbol_table(symbolTable *t){
  int i,size = 0,state = 0;
  symbolTableRow *temp = t->table;
  for(i=0;i<=t->curr_length;i++){
    if(!strcmp(temp[i].name,"retVal"))
      state = 1;
    else{
      if(state == 1){
        size += temp[i].size;
      }
    }
  }
   //cout << "Symbol table size = " << size << endl;
  return size;
}
void update_size(symbolTable *t){  // updates size of chars to 4
  int i;
  symbolTableRow *temp = t->table;
  treeNodeType *possible;
  for(i = 0;i<=t->curr_length;i++){
    if(!temp[i].nestedTable){
      possible = temp[i].Type;
      while(possible){
        if(possible->middle == _PTR || possible->middle == _INT)
          break;
        if(possible->middle == _CHAR){
          temp[i].size *= 4;
          break;
        }
        if(possible->middle == _DOUBLE)
        {
	temp[i].size = 4;
	break;
        }
        possible = possible->right;
      }
    }
    else
      update_size(temp[i].nestedTable);
  }
   //cout << "Updated size" << endl;
}
void translator(){
  int i,size,off;
  char *name;
  quadArrayRow *temp = quad_array->quadTable;
  for(i = 0;i < nextInstr;i++){
    switch((temp[i]).op){
      case Function : size = size_symbol_table((temp[i].arg1Loc)->nestedTable);
                      name = strdup(temp[i].arg1);
                      printf("\t.globl\t%s\n",temp[i].arg1);
                      printf("\t.type\t%s, @function\n",temp[i].arg1);
                      printf("%s:\n",temp[i].arg1);
                      /* Function prologue */
                      printf("\tpushq\t%%rbp\n");
                      printf("\tmovq\t%%rsp, %%rbp\n");
                      printf("\tsubq\t$%d, %%rsp\n",size);
                      break;

      case RETURN_EXP : off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
	        if((temp[i].arg1Loc->Type)->middle == _INT)
		        if(off == -1)
		          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
		        else
		          printf("\tmovl\t%d(%%rbp), %%eax\n",off);
	        else if((temp[i].arg1Loc->Type)->middle == _DOUBLE)
		        if(off == -1)
		          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
		        else
		          printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                        //printf("\tleave\n");
                        printf("\tret\n");
                        printf("\t.size\t%s, .-%s\n",name,name);
                        break;
      case _RETURN :     if(s[i])
                          printf("%s:\n",s[i]);
                        printf("\tnop\n");
                        //printf("\tleave\n");
                        printf("\tret\n");
                        printf("\t.size\t%s, .-%s\n",name,name);
                        break;
      case  PLUS :      off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                        off = (temp[i].arg2Loc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%s, %%rdx\n",(temp[i].arg2Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                        printf("\taddq\t%%rdx, %%rax\n");
                        off = (temp[i].resLoc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                        else
                          printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                        break;
      case  MINUS :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                        off = (temp[i].arg2Loc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%s, %%rdx\n",(temp[i].arg2Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                        printf("\tsubq\t%%rdx, %%rax\n");
                        off = (temp[i].resLoc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                        else
                          printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                        break;
      case  INTO  :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                        off = (temp[i].arg2Loc)->offset;
                        if(off == -1)
                          printf("\timulq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                        else
                          printf("\timulq\t%d(%%rbp), %%rax\n",off);
                        off = (temp[i].resLoc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                        else
                          printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                        break;
      case  DIV   :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                        printf("\tcltd\n");
                        off = (temp[i].arg2Loc)->offset;
                        if(off == -1)
                          printf("\tidivq\t%s\n",(temp[i].arg2Loc)->name);
                        else
                          printf("\tidivq\t%d(%%rbp)\n",off);
                        off = (temp[i].resLoc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                        else
                          printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                        break;
      case  PERCENT :   off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                        else
                          printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                        printf("\tcltd\n");
                        off = (temp[i].arg2Loc)->offset;
                        if(off == -1)
                          printf("\tidivq\t%s\n",(temp[i].arg2Loc)->name);
                        else
                          printf("\tidivq\t%d(%%rbp)\n",off);
                        off = (temp[i].resLoc)->offset;
                        if(off == -1)
                          printf("\tmovq\t%%rdx, %s\n",(temp[i].resLoc)->name);
                        else
                          printf("\tmovq\t%%rdx, %d(%%rbp)\n",off);
                        break;
      case  LT      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsetl\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
      case  LTE     : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsetle\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
      case  GT      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsetg\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
      case  GTE      :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsetge\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
      case  EQ      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsete\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
      case  NEQ      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tsetne\t%%al\n");
                      printf("\tmovzbl\t%%al, %%rax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
        case  goto_LT :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tjl\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_GT :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tjg\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_GTE :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tjge\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_LTE:off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tjle\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_EQ : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tje\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_NEQ : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpq\t%d(%%rbp), %%rax\n",off);
                      printf("\tjne\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  _GOTO   :if(s[i])
                        printf("%s:\n",s[i]);
                      printf("\tjmp\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  IF_GOTO :if(s[i])
                        printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if(off == -1)
                        printf("\tcmpq\t$0, %s\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tcmpq\t$0, %d(%%rbp)\n",off);
                      printf("\tjne\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  IF_FALSE_GOTO :if(s[i])
                        printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if(off == -1)
                        printf("\tcmpq\t$0, %s\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tcmpq\t$0, %d(%%rbp)\n",off);
                      printf("\tje\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  U_PLUS  :if(s[i])
                        printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off); 
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
        case  U_MINUS  :if(s[i])
                          printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if(off == -1)
                        printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                      printf("\tnegl\t%%rax\n"); 
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                      break;
        case  U_NEGATION :if(s[i])
                            printf("%s:\n",s[i]);
                          off = (temp[i].arg1Loc)->offset;
                          if(off == -1)
                            printf("\tcmpq\t$0, %s\n",(temp[i].arg1Loc)->name);
                          else
                            printf("\tcmpq\t$0, %d(%%rbp)\n",off);
                          printf("\tsete\t%%al\n");
                          printf("\tmovzbl\t%%al, %%rax\n");
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                          break;
        case  U_ADDR     : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg1Loc)->offset;
                           if(off == -1)
                            printf("\tleaq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tleaq\t%d(%%rbp), %%rax\n",off);
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                           break;
        case  U_STAR     : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg1Loc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                           printf("\tmovq\t(%%rax), %%rax\n");
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                           break;
        case  ASSIGN     :  //printf("assign\n");
		if(s[i])
                           printf("%s:\n",s[i]);
                           if(!(temp[i].arg1Loc))
                             printf("\tmovl\t$%s, %%eax\n",temp[i].arg1);
                           else{
                             if((temp[i].arg1Loc)->Type->middle == MATRIX){
                              off = (temp[i].arg1Loc)->offset;
                              if(off == -1)
                                printf("\tleal\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tleal\t%d(%%ebp), %%eax\n",off);
                             }
                             else{
                                off = (temp[i].arg1Loc)->offset;
								//printf("%d\n", off);
                                 if(off == -1)
                                  printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                                 else
                                  printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                             } 
                           }
                           off = (temp[i].resLoc)->offset;
							//printf("%d\n", off);
                           if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                           break;
        case  LEFT_STAR  : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                           off = (temp[i].arg1Loc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                           printf("\tmovq\t%%rdx, (%%rax)\n");
                           break;  
        case  EQ_BRACKET  :if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg2Loc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                           off = (temp[i].arg1Loc)->offset;
                           /*if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleaq\t%d(%%rbp), %%rdx\n",(temp[i].arg1Loc)->offset);
                           else if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovq\t%d(%%rbp), %%rdx\n",(temp[i].arg1Loc)->offset);
                           else if(((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleaq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                           else if(((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);*/
                           if((temp[i].arg1Loc)->Type->middle == _PTR){
                              if(off == -1)
                                printf("\tmovq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                            }
                            else{
                              if(off == -1)
                               printf("\tleaq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                              else{
                                printf("\tleaq\t%d(%%rbp), %%rdx\n",off);
                               //printf("Yo\n");
                              }
                            }
                           printf("\taddq\t%%rdx, %%rax\n");
                           printf("\tmovq\t(%%rax), %%rax\n");
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                          break;
        case  BRACKET_EQ  :if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg2Loc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].arg2Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                           off = (temp[i].arg1Loc)->offset;
                           /*if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleaq\t%d(%%rbp), %%rdx\n",(temp[i].arg1Loc)->offset);
                           else if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovq\t%d(%%rbp), %%rdx\n",(temp[i].arg1Loc)->offset);
                           else if(((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleaq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                           else if(((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);*/
                           if((temp[i].arg1Loc)->Type->middle == _PTR){
                              if(off == -1)
                                printf("\tmovq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                            }
                            else{
                              if(off == -1)
                               printf("\tleaq\t%s, %%rdx\n",(temp[i].arg1Loc)->name);
                              else{
                                printf("\tleaq\t%d(%%rbp), %%rdx\n",off);
                                //printf("BRACKET_EQ\n");
                              }
                            }
                           printf("\taddq\t%%rdx, %%rax\n");
                           //printf("\tmovq\t(%%rax), %%rax\n");
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%s, %%rdx\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                           printf("\tmovq\t%%rdx, (%%rax)\n");
                           break;
          case  call      :if(s[i])
                            printf("%s:\n",s[i]);
                          printf("\tcall\t%s\n",temp[i].arg1);
                          off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                           break;
          case  call_void  :if(s[i])
                              printf("%s:\n",s[i]);
                            printf("\tcall\t%s\n",temp[i].arg1);
                            break;
          case  PARAM       :if(s[i])
                              printf("%s:\n",s[i]);
                            int j;
                            for(j=i;;j++){
                              if(temp[j].op == call || temp[j].op == call_void)
                                break;
                            }
                              j--;
                              int t = j;
                              while(j>=i){
                                off = (temp[j].arg1Loc)->offset;
                                if((temp[j].arg1Loc)->size == -1)
                                  printf("\tmovq\t$%s, %%rax\n",temp[j].arg1);
                                else if((temp[j].arg1Loc)->Type->middle == _MATRIX){
                                  if(off == -1)
                                    printf("\tleaq\t%s, %%rax\n",(temp[j].arg1Loc)->name);
                                  else
                                    printf("\tleaq\t%d(%%rbp), %%rax\n",off);  
                                }
                                else{
                                  if(off == -1)
                                    printf("\tmovq\t%s, %%rax\n",(temp[j].arg1Loc)->name);
                                  else
                                    printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                                }
                                printf("\tpushq\t%%rax\n");
                                j--;
                              }
                            i = t;
                            break;

    }
  }
}

/* And the main function finally */
int main(){
  globalSymTable = createSymbolTable();
  currentSymTable = globalSymTable;
  quad_array = new quadArray(10000);
  int i;
  toc = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)
    toc[i] = 0;
  s = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)
    s[i] = 0;
  int x = yyparse();
  //printf("Hai\n");
  update_size(globalSymTable);
  //printf("Global Symbol Table : \n");
  //globalSymTable->print();
  //int j;
  /*for(i=0;i<=globalSymTable->curr_length;i++){
  	if((globalSymTable->table[i]).nestedTable){
  		printf("%s Symbol table :  \n",(globalSymTable->table[i]).name);
  		((globalSymTable->table[i]).nestedTable)->print();
  	}
  }*/
  //quad_array->print();
  update_offsets();
  /*printf("**** Now printing update symbol tables *****\n");
  printf("Global Symbol Table : \n");
  globalSymTable->print();
  for(i=0;i<=globalSymTable->curr_length;i++){
    if((globalSymTable->table[i]).nestedTable){
      printf("%s Symbol table :  \n",(globalSymTable->table[i]).name);
      ((globalSymTable->table[i]).nestedTable)->print();
    }
  }*/
  generateLabels(s);
  /*for(i = 0;i < nextInstr;i++){
    if(!s[i])
      printf("%d\t...\n",i);
    else
      printf("%d\t%s\n",i,s[i]);
  }*/
  tableOfConstants();
  update_glbl_gen_dt();
  translator();
  return 0;
}
