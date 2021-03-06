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
	pushl	%ebp
	movl	%esp, %ebp
	subl	$12, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	8(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	%edx, (%eax)
	nop
	leave
	ret
	.size	swap, .-swap
	.globl	no_swap
	.type	no_swap, @function
no_swap:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
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
	pushl	%ebp
	movl	%esp, %ebp
	subl	$140, %esp
	movl	$.LC0, %eax
	pushl	%eax
	call	prints
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	error, %eax
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	$0, %eax
	movl	%eax, -32(%ebp)
	movl	error, %eax
	cmpl	-32(%ebp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$.LC1, %eax
	pushl	%eax
	call	prints
	movl	%eax, -36(%ebp)
	movl	-36(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	error, %eax
	movl	%eax, -40(%ebp)
	movl	-40(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -44(%ebp)
	movl	-44(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	$0, %eax
	movl	%eax, -48(%ebp)
	movl	error, %eax
	cmpl	-48(%ebp), %eax
	je	.L3
	jmp	.L4
	jmp	.L5
.L3:
	movl	$.LC2, %eax
	pushl	%eax
	call	prints
	movl	%eax, -52(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -20(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	$.LC3, %eax
	pushl	%eax
	call	prints
	movl	%eax, -56(%ebp)
	movl	-56(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -60(%ebp)
	movl	-60(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC4, %eax
	pushl	%eax
	call	prints
	movl	%eax, -64(%ebp)
	movl	-64(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -68(%ebp)
	movl	-68(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC5, %eax
	pushl	%eax
	call	prints
	movl	%eax, -72(%ebp)
	movl	-72(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	-12(%ebp), %eax
	movl	%eax, -76(%ebp)
	leal	-16(%ebp), %eax
	movl	%eax, -80(%ebp)
	movl	-80(%ebp), %eax
	pushl	%eax
	movl	-76(%ebp), %eax
	pushl	%eax
	call	swap
	movl	$.LC6, %eax
	pushl	%eax
	call	prints
	movl	%eax, -84(%ebp)
	movl	-84(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -88(%ebp)
	movl	-88(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC7, %eax
	pushl	%eax
	call	prints
	movl	%eax, -92(%ebp)
	movl	-92(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -96(%ebp)
	movl	-96(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC8, %eax
	pushl	%eax
	call	prints
	movl	%eax, -100(%ebp)
	movl	-100(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	call	no_swap
	movl	$.LC9, %eax
	pushl	%eax
	call	prints
	movl	%eax, -104(%ebp)
	movl	-104(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -108(%ebp)
	movl	-108(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC10, %eax
	pushl	%eax
	call	prints
	movl	%eax, -112(%ebp)
	movl	-112(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -116(%ebp)
	movl	-116(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC11, %eax
	pushl	%eax
	call	prints
	movl	%eax, -120(%ebp)
	movl	-120(%ebp), %eax
	movl	%eax, -4(%ebp)
	jmp	.L2
.L4:
	movl	$.LC12, %eax
	pushl	%eax
	call	prints
	movl	%eax, -124(%ebp)
	movl	-124(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC13, %eax
	pushl	%eax
	call	prints
	movl	%eax, -128(%ebp)
	movl	-128(%ebp), %eax
	movl	%eax, -4(%ebp)
.L5:
	jmp	.L2
.L1:
	movl	$.LC14, %eax
	pushl	%eax
	call	prints
	movl	%eax, -132(%ebp)
	movl	-132(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC15, %eax
	pushl	%eax
	call	prints
	movl	%eax, -136(%ebp)
	movl	-136(%ebp), %eax
	movl	%eax, -4(%ebp)
.L2:
	movl	$0, %eax
	movl	%eax, -140(%ebp)
	movl	-140(%ebp), %eax
	leave
	ret
	.size	main, .-main
