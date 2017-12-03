	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$5, %eax
	movl	%eax, -4(%rbp)
	movl	0(%rbp), %eax
	movl	%eax, 12(%rbp)
	movq	-8(%rbp), %rax
	pushq	%rax
	call	printInt
	movq	%rax, -12(%rbp)
	movl	0(%rbp), %eax
	movl	%eax, 12(%rbp)
	nop
	ret
	.size	main, .-main
