	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movl	$5, %eax
	movq	%rax, -4(%rbp)
	movq	0(%rbp), %rax
	movq	%rax, 28(%rbp)
	movl	$10, %eax
	movq	%rax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %edx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	0(%rbp), %rax
	movq	%rax, 28(%rbp)
	movl	-8(%rbp), %eax
	imulq	-20(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	0(%rbp), %rax
	movq	%rax, 28(%rbp)
	movl	$0, %eax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rbx
	leave
	ret
	.size	main, .-main
