	.section	.rodata
.LC0:
	.string	"Enter the number \n"
.LC1:
	.string	"Fibonacci output : "
.LC2:
	.string	"\n"
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
	subq	$60, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$0, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L2
.L1:
	movl	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L2
.L3:
	movl	$1, %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L2
.L4:
	movl	$1, %eax
	movl	%eax, -36(%rbp)
	movl	-4(%rbp), %eax
	movl	-36(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	fib
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$2, %eax
	movl	%eax, -48(%rbp)
	movl	-4(%rbp), %eax
	movl	-48(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -52(%rbp)
	movq	-52(%rbp), %rdi
	call	fib
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -16(%rbp)
.L2:
	movl	-16(%rbp), %eax
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
	subq	$44, %rsp
	movl	$.LC0, %edi
	call	printStr
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	-4(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	-20(%rbp), %rdi
	call	readInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	fib
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC1, %edi
	call	printStr
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC2, %edi
	call	printStr
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
