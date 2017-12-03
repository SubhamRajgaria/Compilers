	.text
.T0:
	.long	-1889785610
	.long	1078384066
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$28, %rsp
	movsd	$.T0, %xmm0
	movsd	%xmm0, -8(%rbp)
	movl	0(%rbp), %eax
	movl	%eax, 20(%rbp)
	movl	-16(%rbp), %edi
	call	printFlt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
