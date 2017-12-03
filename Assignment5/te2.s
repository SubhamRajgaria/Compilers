	.text
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$68, %rsp
	movl	$0, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
.L2:
	movl	$5, %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L0
	jmp	.L1
	jmp	.L1
.L3:
	movl	-4(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	movl	-28(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L0:
	movl	-4(%rbp), %eax
	movq	-4(%rbp), %rdi
	pushq	%rax
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L3
.L1:
	movl	$3, %eax
	movl	%eax, -36(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jg	.L4
	jmp	.L5
	jmp	.L5
.L4:
	movl	-4(%rbp), %eax
	movq	-4(%rbp), %rdi
	pushq	%rax
	call	printInt
	movl	%eax, -40(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$1, %eax
	movl	%eax, -48(%rbp)
	movl	-4(%rbp), %eax
	movl	-48(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	jmp	.L1
.L5:
	movl	$1, %eax
	movl	%eax, -52(%rbp)
	movl	-4(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movq	-4(%rbp), %rdi
	pushq	%rax
	call	printInt
	movl	%eax, -60(%rbp)
	movl	$10, %eax
	movl	%eax, -64(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jl	.L5
	jmp	.L6
	jmp	.L6
.L6:
	movl	$0, %eax
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
