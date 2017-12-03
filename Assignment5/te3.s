Error occured due to : syntax error
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
	subq	$12, %rsp
	movl	8(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	12(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%rbp)
	movl	8(%rbp), %eax
	movl	-12(%rbp), %edx
	movl	%edx, (%eax)
	movl	12(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%edx, (%eax)
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
	subq	$4, %rsp
	movl	8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	12(%rbp), %eax
	movl	%eax, 8(%rbp)
	movl	8(%rbp), %eax
	movl	%eax, 12(%rbp)
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
	subq	$4, %rsp
