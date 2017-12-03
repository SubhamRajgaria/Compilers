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
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$12, %rsp
	movq	8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	12(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -12(%rbp)
	movq	8(%rbp), %rax
	movq	-12(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	12(%rbp), %rax
	movq	-4(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	leave
	ret
	.size	swap, .-swap
	.globl	no_swap
	.type	no_swap, @function
no_swap:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$4, %rsp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, 12(%ebp)
	nop
	leave
	ret
	.size	no_swap, .-no_swap
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$140, %rsp
	movq	$.LC0, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -8(%rbp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	leaq	error, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	pushq	%rax
	call	readInt
	movq	%rax, -28(%rbp)
	movl	-28(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	$0, %eax
	movl	%eax, -32(%ebp)
	movq	error, %rax
	cmpq	-32(%rbp), %rax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movq	$.LC1, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -36(%rbp)
	movl	-36(%ebp), %eax
	movl	%eax, -4(%ebp)
	leaq	error, %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	pushq	%rax
	call	readInt
	movq	%rax, -44(%rbp)
	movl	-44(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	$0, %eax
	movl	%eax, -48(%ebp)
	movq	error, %rax
	cmpq	-48(%rbp), %rax
	je	.L3
	jmp	.L4
	jmp	.L5
.L3:
	movq	$.LC2, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -52(%rbp)
	movl	-52(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -20(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, -16(%ebp)
	movq	$.LC3, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -56(%rbp)
	movl	-56(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-12(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -60(%rbp)
	movl	-60(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC4, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -64(%rbp)
	movl	-64(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-16(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -68(%rbp)
	movl	-68(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC5, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -72(%rbp)
	movl	-72(%ebp), %eax
	movl	%eax, -4(%ebp)
	leaq	-12(%rbp), %rax
	movq	%rax, -76(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	pushq	%rax
	movq	-76(%rbp), %rax
	pushq	%rax
	call	swap
	movq	$.LC6, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -84(%rbp)
	movl	-84(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-12(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -88(%rbp)
	movl	-88(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC7, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -92(%rbp)
	movl	-92(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-16(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -96(%rbp)
	movl	-96(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC8, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -100(%rbp)
	movl	-100(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	-12(%rbp), %rax
	pushq	%rax
	call	no_swap
	movq	$.LC9, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -104(%rbp)
	movl	-104(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-12(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -108(%rbp)
	movl	-108(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC10, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -112(%rbp)
	movl	-112(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	-16(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -116(%rbp)
	movl	-116(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC11, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -120(%rbp)
	movl	-120(%ebp), %eax
	movl	%eax, -4(%ebp)
	jmp	.L2
.L4:
	movq	$.LC12, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -124(%rbp)
	movl	-124(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC13, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -128(%rbp)
	movl	-128(%ebp), %eax
	movl	%eax, -4(%ebp)
.L5:
	jmp	.L2
.L1:
	movq	$.LC14, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -132(%rbp)
	movl	-132(%ebp), %eax
	movl	%eax, -4(%ebp)
	movq	$.LC15, %rax
	pushq	%rax
	call	printStr
	movq	%rax, -136(%rbp)
	movl	-136(%ebp), %eax
	movl	%eax, -4(%ebp)
.L2:
	movl	$0, %eax
	movl	%eax, -140(%ebp)
	movq	-140(%rbp), %rax
	leave
	ret
	.size	main, .-main
