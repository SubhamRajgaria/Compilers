	.text
	.globl	fib
	.type	fib, @function
fib:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$56, %rsp
	movl	$0, %eax
	movl	%eax, -16(%rbp)
	movl	16(%rbp), %eax
	cmpl	-16(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$0, %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L2
.L1:
	movl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	16(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L2
.L3:
	movl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L2
.L4:
	movl	$1, %eax
	movl	%eax, -32(%rbp)
	movl	16(%rbp), %eax
	movl	-32(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -36(%rbp)
	movq	-36(%rbp), %rdi
	call	fib
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$2, %eax
	movl	%eax, -44(%rbp)
	movl	16(%rbp), %eax
	movl	-44(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -48(%rbp)
	movq	-48(%rbp), %rdi
	call	fib
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	fib, .-fib
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$32, %rsp
	leal	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	-16(%rbp), %rdi
	call	readInt
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	fib
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
