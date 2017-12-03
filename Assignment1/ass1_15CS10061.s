	.file "test.c"	# File name of the program
	.text			# Text section where function is usually stored
	.globl func		# .globl makes the function a global parameter, accessible from other parts of the code	
	.type func, @function	# defines it to be a function
func:
.LFB0:
	.cfi_startproc		# Start process, initilalises internal structures
	pushq %rbp		# Saving frame pointer to call stack
	.cfi_def_cfa_offset 16	# Offsets the CFA(Canonical Frame address) by 16 bytes from stack pointer
	.cfi_offset 6, -16		# Stores previous value of register 6 at an offset of 16 from CFA
	movq %rsp, %rbp			# Move stack pointer's current value to the new frame pointer, rbp
	.cfi_def_cfa_register 6	# Used for debugging purposes
	pushq %rbx			# Register initialized to store data from the time of call
	subq $56, %rsp		# Offset the address by 56 in the stack pointer , corresponds to array declaration, int arr[]
	.cfi_offset 3, -24	# Storing previous value of register 3 at an offset of 24 bytes from CFA
	movl %edi, -52(%rbp)	# Move the content of the register edi to rbp at an offset of 52, edi contains
							# the value of the parameter passed to the function, say n here
	movq %fs:40, %rax   # Move content from %fs:40(segment register) to rax
	movq %rax, -24(%rbp)  # Moves content of rax to a location 24 bytes offset in rbp
	xorl %eax, %eax		# Works as an alternative to setting the value of the register eax to 0
	movq %rsp, %rax		# moves stack pointer to rax
	movq %rax, %rsi 	# Moves rax content to rsi 
	movl -52(%rbp), %eax # Move the content at an offset of 52 in rbp to eax
						# This refers to the variable passed to the function, 	# n=9 in this program
	addl $1, %eax 		 # Add 1 to the variable just assigned, used to declare the array size, arr[n+1]
	movslq %eax, %rdx	 # Convert integer to long (signed extension)
	subq $1, %rdx		 # Subtract 1 from rdx to get back n
	movq %rdx, -40(%rbp) # Move rdx to address of base pointer at an offset of 40 
	movslq %eax, %rdx	 # Convert int to long
	movq %rdx, %r8       # Move content of rdx to r8
	movl $0, %r9d       # Store 0 in r9d
	movslq %eax, %rdx   # Signed extension of the value stored in eax and assigned to rdx
	movq %rdx, %rcx		# Move rdx to rcx
	movl $0, %ebx       # Assign 0 to ebx
	cltq 				# Converts int to int64 ( works for rax only)
	salq $2, %rax       # Left shifts the value stored in rax by 2, that is multiplies it by 4
						# This corresponds to the memory required for array allocation
	leaq 3(%rax), %rdx  # rdx stores rax+3 = 43
	movl $16, %eax 		# Assigns 16 in the register eax
	subq $1, %rax 		# Subtract 1 from rax equivalent to subtracting 1 from eax , becomes 15
	addq %rdx, %rax 	# Add rax and rdx value and store in rax = 43 + 15 = 58
	movl $16, %edi      # Assign 16 to edi register  
	movl $0, %edx 		# Assign 0 to edx
	divq %rdi 			# Assigns rdx = rax% rdi and rax = rax/rdi, thus rdx = 58%16 = 10, rax = 3
	imulq $16, %rax, %rax   # rax = rax*16 = 48
	subq %rax, %rsp 		# Offset stack pointer by the value of rax which is 48
	movq %rsp, %rax 		# Move stack pointer to rax
	addq $3, %rax           # Offsets the address in rax by 3
	shrq $2, %rax           # Shift logical right by 2 units
	salq $2, %rax 			# Shift left by 2 units, restores the rax value with last two bits set to 0
	movq %rax, -32(%rbp) 	# Move the address of rax to rbp at an offset of 32
	movq -32(%rbp), %rax    # Move contents from the offset to rax
	movl $0, (%rax)    # Assign the first index of the array the value 0, arr[0]=0
	movq -32(%rbp), %rax  # Move the value stored at the address 32 of rbp to rax
	movl $1, 4(%rax)  # Assign the second index of the array the value 1, arr[1]=1
	movl $2, -44(%rbp)  # Assign 2 to the loop variable which is at an offset of 44 from rbp, loop variable=2
	jmp .L2			# Jump to section L2
.L3:
	movl -44(%rbp), %eax  # Move the value at 44 offset in rbp to eax
	leal -1(%rax), %edx   # Loads effective address 1 index before current index, loads arr[i-1]
	movq -32(%rbp), %rax  # Move contents which are at an offset of 32 to rax
	movslq %edx, %rdx    # Unsigned extension to rdx 
	movl (%rax,%rdx,4), %ecx  # Computes rax + 4* rdx and assigns it to ecx
	movl -44(%rbp), %eax  # Move the value at 44 offset in rbp to eax
	leal -2(%rax), %edx   # Loads effective address 1 index before current index, loads arr[i-2]
	movq -32(%rbp), %rax  # Move contents which are at an offset of 32 to rax
	movslq %edx, %rdx 	  # Unsigned extension to rdx 
	movl (%rax,%rdx,4), %eax  # Computes rax + 4* rdx and assigns it to eax
	addl %eax, %ecx 		# Adds values in eax and ecx and sets it to ecx, corresponds to arr[i-1]+arr[i-2]
	movq -32(%rbp), %rax 	# Move contents which are at an offset of 32 to rax
	movl -44(%rbp), %edx    # Move the value at 44 offset in rbp to edx
	movslq %edx, %rdx       # Move edx to rdx
	movl %ecx, (%rax,%rdx,4)  # Moves ecx to rax + 4* rdx which is the next index in the array, assigns arr[i]
	addl $1, -44(%rbp) 		# Increments the loop variable by 1 ,	i=i+1
.L2:
	movl -44(%rbp), %eax 	# Move content of rbp to eax register
	cmpl -52(%rbp), %eax 	# Compare the value stored at the base pointer with the value in eax
	jle .L3 			# Conditional jump to L3( uses result of the the comparison in the previous line)
						# Jumps if less than equal to, corresponds to the loop variable comapred to n(size of array)
	movq -32(%rbp), %rax 	# Move content from rbp to rax
	movl -52(%rbp), %edx 	# Move content from rbp at an offset of 52 to edx
	movslq %edx, %rdx 		# Move sign extended value from edx to rdx
	movl (%rax,%rdx,4), %eax  #  Computes rax + 4* rdx and assigns it to eax, arr[i] is set here and returned
	movq %rsi, %rsp  		# Moves content from rsi to rsp
	movq -24(%rbp), %rbx   # Moves the value stored at the address 24 bytes off rbp to rbx
	xorq %fs:40, %rbx 		# Computes the xor value at %fs with rbx
	je .L5		         # Jumps to L5 if it is equal to, when equality is reached, jumps to L5 and returns to main
	call __stack_chk_fail@PLT   #Checks if the stack memory is full or not
.L5:
	movq -8(%rbp), %rbx   # Moves value at 8 bytes offset in rbp to rbx
	leave 				# Restores the stack pointer
	.cfi_def_cfa 7, 8  # define rule for computing CFA as take #address from 6 and add offset 8
	ret  				# Return value in eax and return to main
	.cfi_endproc # Closes entry initiated by cfi_startproc and emits to .eh_frame
.LFE0:
	.size func, .-func 	# The size of function func
	.section .rodata 	# A zero terminated string included in this section, ro signifies read only
.LC0:
	.string "%d"	# Stores the string 
	.text 			# Text block to store function
	.globl main		# .globl connects it to the linker and makes it visible globally in the program
	.type main, @function 	# Marks main as a function
main:
.LFB1:
	.cfi_startproc		# Start process and intialize internal data structures
	pushq %rbp			# Save frame pointer
	.cfi_def_cfa_offset 16	# Offsets the CFA(Canonical Frame address) by 16 bytes
	.cfi_offset 6, -16	# Stores previous value of register at an offset of 16
	movq %rsp, %rbp		# Move stack pointer's current value to the new frame pointer, rbp
	.cfi_def_cfa_register 6	 # Used for debugging purposes
	subq $16, %rsp		# Allocating memory in the stack pointer for the variable
	movl $9, -4(%rbp)	# Assigning 9 at the address which is offset by 4 bytes in the frame pointer
						# Assigns 9 to the variable which is the required number in the fibonacci sequence
	movl -4(%rbp), %eax	# Move the value stored in the register to eax 
	movl %eax, %edi		# Move the contents of eax to edi, which will be an argument to the function func
	call func 			# Call function func
	movl %eax, %esi		# Move content of eax to esi
	leaq .LC0(%rip), %rdi	# Loads effective address relative to the instruction pointer
						# In all probability the function func is called inside printf hence it follows 
						# the relative instruction
	movl $0, %eax 		# Moves 0 to eax register
	call printf@PLT		# Calls printf function
	call getchar@PLT	# Calls getchar function
	movl $0, %eax	# Moves 0 to eax register whch genrally stores the value to be returned
	leave			# Restores the stack pointer
	.cfi_def_cfa 7,8
	ret 			# Return
	.cfi_endproc	# end process which was started vy cfi_startproc
.LFE1:
	.size main, .-main	# The size of main is here
	.ident "GCC: (GNU) 7.1.1 20170630"	# Identifies the version of the compiler which generates this assembly
	.section .note.GNU-stack,"",@progbits	# Choose whether to have an executable stack or not

# The program finds the 9th fibonacci number. It calls a function func where it computes
# the 9th fibonacci number using an array declaration and initializing arr[0]=0 and arr[1]=1.
# It then computes the rest of the elements using arr[i]=arr[i-1]+arr[i-2], that is it uses 
# dynamic programming to compute the rest of the array elements. It then returns the last index
# value and prints it in the main function. getchar() function is used to prevent the exit of the
# program until enter is pressed. The fibonacci number required can be set in line 112, where if 
# we change 9 to some other integer we get that number in the fibonacci sequence 
