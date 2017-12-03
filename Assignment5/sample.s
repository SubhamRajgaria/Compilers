	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$20, %esp
	movl	$5, %eax
	movl	%eax, -4(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 16(%ebp)
	movl	-8(%ebp), %eax
	pushl	%eax
	call	printInt
	movl	%eax, -12(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 16(%ebp)
	movl	$0, %eax
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	leave
	ret
	.size	main, .-main
