# include "ass5_15CS10061_translator.h"
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

vector<double> floats;
int doubleCount;

void update_offsets(){
  int i,j;
  int klmd;
  int off_param = 16, loc_param = 0;
  int state = 0;
  symbolTable *temp;
  int sfsfsjk;
  for(i = 0; i<= globalSymTable->curr_length; i++){
      if((globalSymTable->table[i]).nestedTable){
          temp = (globalSymTable->table[i]).nestedTable;
          off_param = 16;
          loc_param = 0;
			int hjsbdabffk;
          state = 0;
          for(j = 0;j <= temp->curr_length; j++){
			//printf("%d\n", state);
			if(!temp->table)
				break;
			//printf("%s\n", (temp->table[j]).name);
            /* Update offsets for parameters first */
            if(!strcmp((temp->table[j]).name, "retVal")){
              state = 1;
				state =1;
				state =1;
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
 int lms;
  for(i = 0;i<nextInstr;i++){
    q = (quad_array->quadTable) + i;
    if(q->op == goto_LT || q->op == goto_LTE || q->op == goto_GT || q->op == goto_GTE || q->op == goto_EQ || q->op == goto_NEQ || q->op == _GOTO || q->op == IF_GOTO || q->op == IF_FALSE_GOTO){
      lb = atoi(q->res);
		int brlk;
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

void generateFloats(){
	d_util doub;
	for(int i=0; i< floats.size(); i++)
	{
		doub.value = floats[i];
		printf("T%d:\n",i);
    	printf("\t.long\t%d\n",doub.ar[0]);
		printf("\t.long\t%d\n",doub.ar[1]);
	}
}
void update_glbl_gen_dt(){
	int doubleCount =0;
	
    int i,flag = 0;
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
            int *dummy;
            char *dummy1;
			double *dummy2;
			//d_util doub;
            if((temp[i].Type)->middle == _INT){
              dummy = (int *)(temp[i].initialValue);
              init_val = *dummy;
            }
			/*else if((temp[i].Type)->middle == _DOUBLE){
				dummy2 = (double *)(temp[i].initialValue);
				doub.value = *dummy2;
			}*/
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
			if((temp[i].Type)->middle != _DOUBLE)
            	printf("\t.long\t%d\n",init_val);
			/*else{
				printf("\t.long\t%d\n",doub.ar[0]);
				printf("\t.long\t%d\n",doub.ar[1]);
			}*/
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
  int gdhh;
  for(i = 0;i<=t->curr_length;i++){
    if(!temp[i].nestedTable){
      possible = temp[i].Type;
		int feufse;
      while(possible){
        if(possible->middle == _PTR || possible->middle == _INT)
          break;
        if(possible->middle == _CHAR){
          temp[i].size *= 8;
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
  symbolTableRow *temp2 = ((temp[i].arg1Loc)->nestedTable)->table;
	int counter =0;
  for(i = 0;i < nextInstr;i++){
    switch((temp[i]).op){
      case Function : size = size_symbol_table((temp[i].arg1Loc)->nestedTable);
                      name = strdup(temp[i].arg1);
                      printf("\t.globl\t%s\n",temp[i].arg1);
                      printf("\t.type\t%s, @function\n",temp[i].arg1);
                      printf("%s:\n",temp[i].arg1);
                      /* Function prologue */
					  printf("\t.cfi_startproc\n");
                      printf("\tpushq\t%%rbp\n");
					  printf("\t.cfi_def_cfa_offset 8\n");
        			  printf("\t.cfi_offset 5, -8\n");
                      printf("\tmovq\t%%rsp, %%rbp\n");
						printf("\t.cfi_def_cfa_register 5\n");
                      printf("\tsubq\t$%d, %%rsp\n",size);
					  off = (temp[i].arg1Loc)->offset;
					  int k;
					  /*for(k=0; k<=(temp[i].arg1Loc)->nestedTable->curr_length; k++){
						printf("%s", temp2[k].name);
						printf("%d\n", temp2[k].size);
					}*/
                      /*for(k=0; k<=((temp[i].arg1Loc)->nestedTable)->curr_length; k++)
					  {
						if(temp2[k].offset> 0 && !(strcmp(temp2[k].name, "retVal")))
						{
							if(counter == 0)
							{
								printf("\tmovq\t%%rdi, %d(%%rbp)\n", temp2[k].offset);
								counter ++;
							}
							else if(counter == 1)
							{
								printf("\tmovq\t%%rsi, %d(%%rbp)\n", temp2[k].offset);
								counter ++;
							}
							else if(counter == 2)
							{
								printf("\tmovq\t%%rcx, %d(%%rbp)\n", temp2[k].offset);
								counter ++;
							}
							else if(counter == 3)
							{
								printf("\tmovq\t%%rdx, %d(%%rbp)\n", temp2[k].offset);
								counter ++;
							}
						}
					  }
					  counter =0;*/
                      break;

      case RETURN_EXP : off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if(off == -1)
                          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                        else{
							//printf("Return\n");
                          printf("\tmovl\t%d(%%rbp), %%eax\n",off);
						}
                        printf("\tleave\n");
						printf("\t.cfi_restore 5\n");
						printf("\t.cfi_def_cfa 4, 4\n");
                        printf("\tret\n");
						printf("\t.cfi_endproc\n");
                        printf("\t.size\t%s, .-%s\n",name,name);
						counter =0;
                        break;
      case _RETURN :     if(s[i])
                          printf("%s:\n",s[i]);
                        printf("\tnop\n");
                        printf("\tleave\n");
						printf("\t.cfi_restore 5\n");
						printf("\t.cfi_def_cfa 4, 4\n");
                        printf("\tret\n");
						printf("\t.cfi_endproc\n");
                        printf("\t.size\t%s, .-%s\n",name,name);
						counter =0;
                        break;
      case  PLUS :      off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if((temp[i].arg1Loc)->Type->middle != _DOUBLE)
                        {
                          if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                          else{
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
  						            }
                          off = (temp[i].arg2Loc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].arg2Loc)->name);
                          else{
  							
                            printf("\tmovl\t%d(%%rbp), %%edx\n",off);
  						            }
                          printf("\taddl\t%%edx, %%eax\n");
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                        }
                        else{
                            if(off == -1)
                            printf("\tmovsd\t%s, %%xmm0\n",(temp[i].arg1Loc)->name);
                            else{
                             printf("\tmovsd\t%d(%%rbp), %%xmm0\n",off);
                            }
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%s, %%xmm1\n",(temp[i].arg2Loc)->name);
                            else{
                  
                              printf("\tmovsd\t%d(%%rbp), %%xmm1\n",off);
                            }
                            printf("\taddsd\t%%xmm1, %%xmm0\n");
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%%xmm0, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovsd\t%%xmm0, %d(%%rbp)\n",off);
                        }
                        break;
      case  MINUS :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if((temp[i].arg1Loc)->Type->middle != _DOUBLE){
                          if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                          else{
  						  
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
  						            }
                          off = (temp[i].arg2Loc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].arg2Loc)->name);
                          else{
  						  
                            printf("\tmovl\t%d(%%rbp), %%edx\n",off);
  						            }
                          printf("\tsubl\t%%edx, %%eax\n");
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                        }
                        else{
                            if(off == -1)
                            printf("\tmovsd\t%s, %%xmm0\n",(temp[i].arg1Loc)->name);
                            else{
                             printf("\tmovsd\t%d(%%rbp), %%xmm0\n",off);
                            }
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%s, %%xmm1\n",(temp[i].arg2Loc)->name);
                            else{
                  
                              printf("\tmovsd\t%d(%%rbp), %%xmm1\n",off);
                            }
                            printf("\tsubsd\t%%xmm1, %%xmm0\n");
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%%xmm0, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovsd\t%%xmm0, %d(%%rbp)\n",off);
                        }
                        break;
      case  INTO  :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if((temp[i].arg1Loc)->Type->middle != _DOUBLE){
                            if(off == -1)
                              printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                            else{
    						  
                              printf("\tmovl\t%d(%%rbp), %%eax\n",off);
    						            }
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\timull\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                            else{
    						  
                              printf("\timull\t%d(%%rbp), %%eax\n",off);
    						            }
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                        }
                        else{
                            if(off == -1)
                            printf("\tmovsd\t%s, %%xmm0\n",(temp[i].arg1Loc)->name);
                            else{
                             printf("\tmovsd\t%d(%%rbp), %%xmm0\n",off);
                            }
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%s, %%xmm1\n",(temp[i].arg2Loc)->name);
                            else{
                  
                              printf("\tmovsd\t%d(%%rbp), %%xmm1\n",off);
                            }
                            printf("\tmulsd\t%%xmm1, %%xmm0\n");
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%%xmm0, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovsd\t%%xmm0, %d(%%rbp)\n",off);
                        }

                        break;
      case  DIV   :     off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                        if((temp[i].arg1Loc)->Type->middle != _DOUBLE){
                            if(off == -1)
                              printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                            else{
    						 
                              printf("\tmovl\t%d(%%rbp), %%eax\n",off);
    					              }
                            printf("\tcltd\n");
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tidivl\t%s\n",(temp[i].arg2Loc)->name);
                            else{
    						 
                              printf("\tidivl\t%d(%%rbp)\n",off);
    						            }
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                        }
                        else{
                            if(off == -1)
                            printf("\tmovsd\t%s, %%xmm0\n",(temp[i].arg1Loc)->name);
                            else{
                             printf("\tmovsd\t%d(%%rbp), %%xmm0\n",off);
                            }
                             printf("\tcltd\n");
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%s, %%xmm1\n",(temp[i].arg2Loc)->name);
                            else{
                  
                              printf("\tmovsd\t%d(%%rbp), %%xmm1\n",off);
                            }
                            printf("\tdivsd\t%%xmm1, %%xmm0\n");
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovsd\t%%xmm0, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovsd\t%%xmm0, %d(%%rbp)\n",off);
                        }
                        break;
      case  PERCENT :   off = (temp[i].arg1Loc)->offset;
                        if(s[i])
                          printf("%s:\n",s[i]);
                            if(off == -1)
                              printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                            else{
    						  
                              printf("\tmovl\t%d(%%rbp), %%eax\n",off);
    						            }
                            printf("\tcltd\n");
                            off = (temp[i].arg2Loc)->offset;
                            if(off == -1)
                              printf("\tidivl\t%s\n",(temp[i].arg2Loc)->name);
                            else{
    							
                              printf("\tidivl\t%d(%%rbp)\n",off);
    						            }
                            off = (temp[i].resLoc)->offset;
                            if(off == -1)
                              printf("\tmovl\t%%edx, %s\n",(temp[i].resLoc)->name);
                            else
                              printf("\tmovl\t%%edx, %d(%%rbp)\n",off);
                        break;
      case  LT      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsetl\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
      case  LTE     : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsetle\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
      case  GT      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsetg\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
      case  GTE      :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsetge\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
      case  EQ      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsete\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
      case  NEQ      : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                          printf("%s:\n",s[i]);
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tsetne\t%%al\n");
                      printf("\tmovzbl\t%%al, %%eax\n");
                      off = (temp[i].resLoc)->offset;
                      if(off == -1)
                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                      else
                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      break;
        case  goto_LT :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tjl\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_GT :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tjg\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_GTE :off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tjge\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_LTE:off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tjle\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_EQ : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
                      printf("\tje\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  goto_NEQ : off = (temp[i].arg1Loc)->offset;
                      if(s[i])
                        printf("%s:\n",s[i]);                      
                      if(off == -1)
                        printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                      else
                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);  
                      off = (temp[i].arg2Loc)->offset;
                      if(off == -1)
                        printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                      else
                        printf("\tcmpl\t%d(%%rbp), %%eax\n",off);
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
                        printf("\tcmpl\t$0, %s\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tcmpl\t$0, %d(%%rbp)\n",off);
                      printf("\tjne\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  IF_FALSE_GOTO :if(s[i])
                        printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if(off == -1)
                        printf("\tcmpl\t$0, %s\n",(temp[i].arg1Loc)->name);
                       else
                        printf("\tcmpl\t$0, %d(%%rbp)\n",off);
                      printf("\tje\t%s\n",s[atoi(temp[i].res)]);
                      break;
        case  U_PLUS  :if(s[i])
                        printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if((temp[i].arg1Loc)->Type->middle != 4){
                           if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off); 
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                      }
                      else{
                          if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off); 
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off);   
                      }
                      break;
        case  U_MINUS  :if(s[i])
                          printf("%s:\n",s[i]);
                       off = (temp[i].arg1Loc)->offset;
                       if((temp[i].arg1Loc)->Type->middle != 4){
                           if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                          printf("\tnegl\t%%eax\n"); 
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                        }
                        else{
                            if(off == -1)
                            printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                           else
                            printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                          printf("\tnegq\t%%rax\n"); 
                          off = (temp[i].resLoc)->offset;
                          if(off == -1)
                            printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                          else
                            printf("\tmovq\t%%rax, %d(%%rbp)\n",off); 
                        }
                      break;
        case  U_NEGATION :if(s[i])
                            printf("%s:\n",s[i]);
                          off = (temp[i].arg1Loc)->offset;
                          if((temp[i].arg1Loc)->Type->middle != 4){
                              if(off == -1)
                                printf("\tcmpl\t$0, %s\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tcmpl\t$0, %d(%%rbp)\n",off);
                              printf("\tsete\t%%al\n");
                              printf("\tmovzbl\t%%al, %%eax\n");
                              off = (temp[i].resLoc)->offset;
                              if(off == -1)
                                printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                              else
                                printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                          }
                          else{
                                if(off == -1)
                                printf("\tcmpq\t$0, %s\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tcmpq\t$0, %d(%%rbp)\n",off);
                              printf("\tsete\t%%al\n");
                              printf("\tmovzbq\t%%al, %%rax\n");
                              off = (temp[i].resLoc)->offset;
                              if(off == -1)
                                printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                              else
                                printf("\tmovq\t%%rax, %d(%%rbp)\n",off); 
                          }
                          break;
        case  U_ADDR     : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg1Loc)->offset;
                           if((temp[i].arg1Loc)->Type->middle != 4){
                             if(off == -1)
                              printf("\tleal\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                             else
                              printf("\tleal\t%d(%%rbp), %%eax\n",off);
                             off = (temp[i].resLoc)->offset;
                             if(off == -1)
                              printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                             else
                              printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                          }
                          else{
                              if(off == -1)
                              printf("\tleaq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                             else
                              printf("\tleaq\t%d(%%rbp), %%rax\n",off);
                             off = (temp[i].resLoc)->offset;
                             if(off == -1)
                              printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                             else
                              printf("\tmovq\t%%rax, %d(%%rbp)\n",off);
                          }
                          break;
        case  U_STAR     : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg1Loc)->offset;
                           if((temp[i].arg1Loc)->Type->middle != 4){
                             if(off == -1)
                              printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                             else{
                              printf("\tmovl\t%d(%%rbp), %%eax\n",off);
  							             }
                             printf("\tmovl\t(%%eax), %%eax\n");
                             off = (temp[i].resLoc)->offset;
                             if(off == -1)
                              printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                             else
                              printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                          }
                          else{
                              if(off == -1)
                              printf("\tmovq\t%s, %%rax\n",(temp[i].arg1Loc)->name);
                             else{
                              printf("\tmovq\t%d(%%rbp), %%rax\n",off);
                             }
                             printf("\tmovq\t(%%rax), %%rax\n");
                             off = (temp[i].resLoc)->offset;
                             if(off == -1)
                              printf("\tmovq\t%%rax, %s\n",(temp[i].resLoc)->name);
                             else
                              printf("\tmovq\t%%rax, %d(%%rbp)\n",off);   
                           
                          }
                          break;
        case  ASSIGN     :  //printf("assign\n");
							
							if(s[i])
                            printf("%s:\n",s[i]);
                           if(!(temp[i].arg1Loc)){
              								if((temp[i].resLoc)->Type->middle != _DOUBLE)
              		                         printf("\tmovl\t$%s, %%eax\n",temp[i].arg1);
              								else{
              									printf("\tmovsd\tT%d, %%xmm0\n", doubleCount);
              									doubleCount++;
              								}
							             }
                           else{
                             if((temp[i].arg1Loc)->Type->middle == _MATRIX){
                              off = (temp[i].arg1Loc)->offset;
                              if(off == -1)
                                printf("\tleal\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                              else{
                                printf("\tleal\t%d(%%rbp), %%eax\n",off);
								              }
                             }
                             else{
                                off = (temp[i].arg1Loc)->offset;
								//printf("%d\n", off);
                                 if(off == -1)
                                  printf("\tmovl\t%s, %%eax\n",(temp[i].arg1Loc)->name);
                                 else{
                  									if(off>=16)
                  									{
                  										if(off==16 )
                  											printf("\tmovl\t%%edi, %d(%%rbp)\n",off);
                  										else if(off==20)
                  											printf("\tmovl\t%%esi, %d(%%rbp)\n",off);
                  										else if(off==24)
                  											printf("\tmovl\t%%edx, %d(%%rbp)\n",off);
                  										else if(off==28)
                  											printf("\tmovl\t%%ecx, %d(%%rbp)\n",off);
                  									}
								// printf("Assign\n");
								//printf("%d\n", off);
                                        printf("\tmovl\t%d(%%rbp), %%eax\n",off);
								                  }
                             } 
                           }
                           off = (temp[i].resLoc)->offset;
							//printf("%d\n", off);
            							if((temp[i].resLoc)->Type->middle != _DOUBLE){
                                       if(off == -1)
                                        printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                                       else
                                        printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
            							}
            							else{
            								if(off == -1)
                                        printf("\tmovsd\t%%xmm0, %s\n",(temp[i].resLoc)->name);
                                       else
                                        printf("\tmovsd\t%%xmm0, %d(%%rbp)\n",off);
            							}
                           break;
        case  LEFT_STAR  : if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].resLoc)->name);
                           else{
							
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
							}
                           off = (temp[i].arg1Loc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                           else{
                            printf("\tmovl\t%d(%%rbp), %%edx\n",off);
						   }
                           printf("\tmovl\t%%edx, (%%eax)\n");
                           break;  
        case  EQ_BRACKET  :if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg2Loc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                           else
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                           off = (temp[i].arg1Loc)->offset;
                           /*if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleal\t%d(%%rbp), %%edx\n",(temp[i].arg1Loc)->offset);
                           else if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovl\t%d(%%rbp), %%edx\n",(temp[i].arg1Loc)->offset);
                           else if(((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleal\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                           else if(((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].arg1Loc)->name);*/
                           if((temp[i].arg1Loc)->Type->middle == _PTR){
                              if(off == -1)
                                printf("\tmovl\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tmovl\t%d(%%rbp), %%edx\n",off);
                            }
                            else{
                              if(off == -1)
                               printf("\tleal\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                              else{
                                printf("\tleal\t%d(%%rbp), %%edx\n",off);
                               //printf("Yo\n");
                              }
                            }
                           printf("\taddl\t%%edx, %%eax\n");
                           printf("\tmovl\t(%%eax), %%eax\n");
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
                          break;
        case  BRACKET_EQ  :if(s[i])
                            printf("%s:\n",s[i]);
                           off = (temp[i].arg2Loc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%s, %%eax\n",(temp[i].arg2Loc)->name);
                           else
                            printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                           off = (temp[i].arg1Loc)->offset;
                           /*if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleal\t%d(%%rbp), %%edx\n",(temp[i].arg1Loc)->offset);
                           else if((temp[i].arg1Loc)->offset != -1 && ((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovl\t%d(%%rbp), %%edx\n",(temp[i].arg1Loc)->offset);
                           else if(((temp[i].arg1Loc)->Type)->middle == ARRAY)
                            printf("\tleal\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                           else if(((temp[i].arg1Loc)->Type)->middle == PTR)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].arg1Loc)->name);*/
                           if((temp[i].arg1Loc)->Type->middle == _PTR){
                              if(off == -1)
                                printf("\tmovl\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                              else
                                printf("\tmovl\t%d(%%rbp), %%edx\n",off);
                            }
                            else{
                              if(off == -1)
                               printf("\tleal\t%s, %%edx\n",(temp[i].arg1Loc)->name);
                              else{
                                printf("\tleal\t%d(%%rbp), %%edx\n",off);
                                //printf("BRACKET_EQ\n");
                              }
                            }
                           printf("\taddl\t%%edx, %%eax\n");
                           //printf("\tmovl\t(%%eax), %%eax\n");
                           off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%s, %%edx\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovl\t%d(%%rbp), %%edx\n",off);
                           printf("\tmovl\t%%edx, (%%eax)\n");
                           break;
          case  call      :if(s[i])
                            printf("%s:\n",s[i]);
                          printf("\tcall\t%s\n",temp[i].arg1);
						  //printf("\tmovl\t%%eax, u(%%eip)\n");
                          off = (temp[i].resLoc)->offset;
                           if(off == -1)
                            printf("\tmovl\t%%eax, %s\n",(temp[i].resLoc)->name);
                           else
                            printf("\tmovl\t%%eax, %d(%%rbp)\n",off);
						   //printf("\tmovl\t%%eax, (%%rip)\n");
                           break;
          case  call_void  :if(s[i])
                              printf("%s:\n",s[i]);
                            printf("\tcall\t%s\n",temp[i].arg1);
							//printf("\tmovl\t%%eax, (%%rip)\n");
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
								              int count =(j-i+1)%4;
							                 //printf("%d %d\n", j,i);
                              while(j>=i){
                                off = (temp[j].arg1Loc)->offset;
                                if((temp[j].arg1Loc)->size == -1){
                                  //printf("\tmovl\t$%s, %%eax\n",temp[j].arg1);
                                  //if((temp[j].arg1Loc)->Type->middle !=4){
                  									if(count ==1)
                  										printf("\tmovl\t$%s, %%edi\n",temp[j].arg1);
                  									else if(count ==2)
                  										printf("\tmovl\t$%s, %%esi\n",temp[j].arg1);
                  									else if(count ==3)
                  										printf("\tmovl\t$%s, %%edx\n",temp[j].arg1);
                  									else if(count ==4)
                  										printf("\tmovl\t$%s, %%ecx\n",temp[j].arg1);
                                  //}
                                  /*else{
                                    if(count ==1)
                                      printf("\tmovq\t$%s, %%rdi\n",temp[j].arg1);
                                    else if(count ==2)
                                      printf("\tmovq\t$%s, %%rsi\n",temp[j].arg1);
                                    else if(count ==3)
                                      printf("\tmovq\t$%s, %%rdx\n",temp[j].arg1);
                                    else if(count ==4)
                                      printf("\tmovq\t$%s, %%rcx\n",temp[j].arg1); 
                                  }*/
								                }
                                else if((temp[j].arg1Loc)->Type->middle == _MATRIX){
		                              if(off == -1){
		                                //printf("\tleal\t%s, %%eax\n",(temp[j].arg1Loc)->name);
                  										if(count ==1)
                  											printf("\tleaq\t$%s, %%rdi\n",(temp[j].arg1Loc)->name);
                  										else if(count ==2)
                  											printf("\tleaq\t$%s, %%rsi\n",(temp[j].arg1Loc)->name);
                  										else if(count ==3)
                  											printf("\tleaq\t$%s, %%rdx\n",(temp[j].arg1Loc)->name);
                  										else if(count ==4)
                  											printf("\tleaq\t$%s, %%rcx\n",(temp[j].arg1Loc)->name);
                  									 }
		                              else{
		                                //printf("\tleal\t%d(%%rbp), %%eax\n",off); 
                										if(count ==1)
                											printf("\tleaq\t%d(%%rbp), %%rdi\n",off);
                										else if(count ==2)
                											printf("\tleaq\t%d(%%rbp), %%rsi\n",off);
                										else if(count ==3)
                											printf("\tleaq\t%d(%%rbp), %%rdx\n",off);
                										else if(count ==4)
                											printf("\tleaq\t%d(%%rbp), %%rcx\n",off);
                									  } 
                                }
                                else{
                                  if(off == -1){
                                                          //printf("\tmovl\t%s, %%eax\n",(temp[j].arg1Loc)->name);
                      									//printf("\tmovl\t%s, %%rdi\n",(temp[j].arg1Loc)->name);
                                        //if((temp[j].arg1Loc)->Type->middle !=4){
                        									if(count ==1)
                        										printf("\tmovl\t$%s, %%edi\n",(temp[j].arg1Loc)->name);
                        									else if(count ==2)
                        										printf("\tmovl\t$%s, %%esi\n",(temp[j].arg1Loc)->name);
                        									else if(count ==3)
                        										printf("\tmovl\t$%s, %%edx\n",(temp[j].arg1Loc)->name);
                        									else if(count ==4)
                        										printf("\tmovl\t$%s, %%ecx\n",(temp[j].arg1Loc)->name);
                                        //}
                                        /*else{
                                           if(count ==1)
                                            printf("\tmovq\t$%s, %%rdi\n",(temp[j].arg1Loc)->name);
                                          else if(count ==2)
                                            printf("\tmovq\t$%s, %%rsi\n",(temp[j].arg1Loc)->name);
                                          else if(count ==3)
                                            printf("\tmovq\t$%s, %%rdx\n",(temp[j].arg1Loc)->name);
                                          else if(count ==4)
                                            printf("\tmovq\t$%s, %%rcx\n",(temp[j].arg1Loc)->name);
                                        }*/
                      						}
                                  else{
                                    //printf("\tmovl\t%d(%%rbp), %%eax\n",off);
                                      if((temp[j].arg1Loc)->Type->middle !=4){
                      									if(count ==1)
                      										printf("\tmovq\t%d(%%rbp), %%rdi\n",off);
                      									else if(count ==2)
                      										printf("\tmovq\t%d(%%rbp), %%rsi\n",off);
                      									else if(count ==3)
                      										printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                      									else if(count ==4)
                      										printf("\tmovq\t%d(%%rbp), %%rcx\n",off);
                                      }
                                      else{
                                          if(count ==1)
                                          printf("\tmovq\t%d(%%rbp), %%rdi\n",off);
                                        else if(count ==2)
                                          printf("\tmovq\t%d(%%rbp), %%rsi\n",off);
                                        else if(count ==3)
                                          printf("\tmovq\t%d(%%rbp), %%rdx\n",off);
                                        else if(count ==4)
                                          printf("\tmovq\t%d(%%rbp), %%rcx\n",off);
                                      }
                    							}
                                }
								//
                                //printf("\tpushq\t%%rax\n");
                                j--;
								                count--;
                              }
							  //printf("\tpushq\t%%rax\n");
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
  generateFloats();
  update_glbl_gen_dt();
  translator();
  return 0;
}
