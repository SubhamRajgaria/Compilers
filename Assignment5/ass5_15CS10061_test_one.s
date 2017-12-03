	.section	.rodata
.LC0:
	.string	"\nEnter the first number : "
.LC1:
	.string	"\nNow Enter the second number : "
.LC2:
	.string	"\nInline swapping"
.LC3:
	.string	"\na = "
.LC4:
	.string	"\nb = "
.LC5:
	.string	"\nSwapping through pointers"
.LC6:
	.string	"\na = "
.LC7:
	.string	"\nb = "
.LC8:
	.string	"\nAn attempt to sort through call by value"
.LC9:
	.string	"\na = "
.LC10:
	.string	"\nb = "
.LC11:
	.string	"\nPointers are dangerous!"
.LC12:
	.string	"\nYou entered non numeral characters"
.LC13:
	.string	"\nThe program is exiting"
.LC14:
	.string	"\nYou entered non numeral characters"
.LC15:
	.string	"\nThe program is exiting"
	.text
	.comm	error,4
	.globl	swap
	.type	swap, @function
swap:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	movl	-28(%rbp), %edx
	movl	%edx, (%eax)
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %edx
	movl	%edx, (%eax)
	movl	-4(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-8(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rdi
	call	printInt
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-20(%rbp), %rdi
	call	printInt
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -12(%rbp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	swap, .-swap
	.globl	no_swap
	.type	no_swap, @function
no_swap:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$12, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	no_swap, .-no_swap
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$132, %rsp
	movl	$.LC0, %edi
	call	printStr
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	error, %eax
	movl	%eax, -24(%rbp)
	movq	-24(%rbp), %rdi
	call	readInt
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, %eax
	movl	%eax, -32(%rbp)
	movl	error, %eax
	cmpl	-32(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$.LC1, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	error, %eax
	movl	%eax, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	readInt
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, %eax
	movl	%eax, -48(%rbp)
	movl	error, %eax
	cmpl	-48(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L5
.L3:
	movl	$.LC2, %edi
	call	printStr
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC3, %edi
	call	printStr
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC4, %edi
	call	printStr
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-16(%rbp), %rdi
	call	printInt
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC5, %edi
	call	printStr
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC6, %edi
	call	printStr
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC7, %edi
	call	printStr
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-16(%rbp), %rdi
	call	printInt
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC8, %edi
	call	printStr
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-16(%rbp), %rsi
	movq	-12(%rbp), %rdi
	call	no_swap
	movl	$.LC9, %edi
	call	printStr
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC10, %edi
	call	printStr
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-16(%rbp), %rdi
	call	printInt
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC11, %edi
	call	printStr
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L4:
	movl	$.LC12, %edi
	call	printStr
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC13, %edi
	call	printStr
	movl	%eax, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, -4(%rbp)
.L5:
	jmp	.L2
.L1:
	movl	$.LC14, %edi
	call	printStr
	movl	%eax, -124(%rbp)
	movl	-124(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC15, %edi
	call	printStr
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -4(%rbp)
.L2:
	movl	$0, %eax
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
