	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$12, %esp
	movl	$0, %eax
	movl	%eax, -4(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	$0, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	leave
	ret
	.size	main, .-main
