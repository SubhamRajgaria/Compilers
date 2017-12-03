	.section	.rodata
.LC0:
	.string	"Smallest number is : "
.LC1:
	.string	"\n"
.LC2:
	.string	"Largest number is : "
.LC3:
	.string	"\n"
.LC4:
	.string	"Second Largest number is : "
.LC5:
	.string	"\n"
.LC6:
	.string	"Largest number is : "
.LC7:
	.string	"\n"
.LC8:
	.string	"Second Largest number is : "
.LC9:
	.string	"\n"
.LC10:
	.string	"Smallest number is : "
.LC11:
	.string	"\n"
.LC12:
	.string	"Largest number is : "
.LC13:
	.string	"\n"
.LC14:
	.string	"Second Largest number is : "
.LC15:
	.string	"\n"
.LC16:
	.string	"Largest number is : "
.LC17:
	.string	"\n"
.LC18:
	.string	"Second Largest number is : "
.LC19:
	.string	"\n"
.LC20:
	.string	"Smallest number is : "
.LC21:
	.string	"\n"
.LC22:
	.string	"Largest number is : "
.LC23:
	.string	"\n"
.LC24:
	.string	"Second Largest number is : "
.LC25:
	.string	"\n"
.LC26:
	.string	"Largest number is : "
.LC27:
	.string	"\n"
.LC28:
	.string	"Second Largest number is : "
.LC29:
	.string	"\n"
.LC30:
	.string	" is equal to "
.LC31:
	.string	" or "
.LC32:
	.string	"\n"
.LC33:
	.string	" is not equal to "
.LC34:
	.string	" or "
.LC35:
	.string	"\n"
.LC36:
	.string	" is greater than or equal to "
.LC37:
	.string	" or "
.LC38:
	.string	"\n"
.LC39:
	.string	" is less than or equal to "
.LC40:
	.string	" or "
.LC41:
	.string	"\n"
.LC42:
	.string	"Enter the first of the three numbers\n"
.LC43:
	.string	"Enter the second number\n"
.LC44:
	.string	"Enter the third number\n"
	.text
	.comm	u,4
	.globl	sort
	.type	sort, @function
sort:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$204, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, u
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L0
	jmp	.L1
.L0:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jl	.L2
	jmp	.L1
	jmp	.L3
.L2:
	movl	$.LC0, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, u
	movl	$.LC1, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, u
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jg	.L4
	jmp	.L5
	jmp	.L6
.L4:
	movl	$.LC2, %edi
	call	printStr
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, u
	movl	$.LC3, %edi
	call	printStr
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, u
	movl	$.LC4, %edi
	call	printStr
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, u
	movl	$.LC5, %edi
	call	printStr
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, u
	jmp	.L3
.L5:
	movl	$.LC6, %edi
	call	printStr
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, u
	movl	$.LC7, %edi
	call	printStr
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, u
	movl	$.LC8, %edi
	call	printStr
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, u
	movl	$.LC9, %edi
	call	printStr
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, u
.L6:
	jmp	.L3
.L1:
	movl	16(%rbp), %eax
	cmpl	20(%rbp), %eax
	jg	.L7
	jmp	.L8
.L7:
	movl	24(%rbp), %eax
	cmpl	20(%rbp), %eax
	jg	.L9
	jmp	.L8
	jmp	.L3
.L9:
	movl	$.LC10, %edi
	call	printStr
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, u
	movl	$.LC11, %edi
	call	printStr
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, u
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jl	.L10
	jmp	.L11
	jmp	.L12
.L10:
	movl	$.LC12, %edi
	call	printStr
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, u
	movl	$.LC13, %edi
	call	printStr
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, u
	movl	$.LC14, %edi
	call	printStr
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, u
	movl	$.LC15, %edi
	call	printStr
	movl	%eax, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, u
	jmp	.L3
.L11:
	movl	$.LC16, %edi
	call	printStr
	movl	%eax, -124(%rbp)
	movl	-124(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, u
	movl	$.LC17, %edi
	call	printStr
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	movl	%eax, u
	movl	$.LC18, %edi
	call	printStr
	movl	%eax, -136(%rbp)
	movl	-136(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	movl	%eax, u
	movl	$.LC19, %edi
	call	printStr
	movl	%eax, -144(%rbp)
	movl	-144(%rbp), %eax
	movl	%eax, u
.L12:
	jmp	.L3
.L8:
	movl	$.LC20, %edi
	call	printStr
	movl	%eax, -148(%rbp)
	movl	-148(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -152(%rbp)
	movl	-152(%rbp), %eax
	movl	%eax, u
	movl	$.LC21, %edi
	call	printStr
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, u
	movl	16(%rbp), %eax
	cmpl	20(%rbp), %eax
	jg	.L13
	jmp	.L14
	jmp	.L3
.L13:
	movl	$.LC22, %edi
	call	printStr
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -164(%rbp)
	movl	-164(%rbp), %eax
	movl	%eax, u
	movl	$.LC23, %edi
	call	printStr
	movl	%eax, -168(%rbp)
	movl	-168(%rbp), %eax
	movl	%eax, u
	movl	$.LC24, %edi
	call	printStr
	movl	%eax, -172(%rbp)
	movl	-172(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	%eax, u
	movl	$.LC25, %edi
	call	printStr
	movl	%eax, -180(%rbp)
	movl	-180(%rbp), %eax
	movl	%eax, u
	jmp	.L3
.L14:
	movl	$.LC26, %edi
	call	printStr
	movl	%eax, -184(%rbp)
	movl	-184(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	movl	%eax, u
	movl	$.LC27, %edi
	call	printStr
	movl	%eax, -192(%rbp)
	movl	-192(%rbp), %eax
	movl	%eax, u
	movl	$.LC28, %edi
	call	printStr
	movl	%eax, -196(%rbp)
	movl	-196(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -200(%rbp)
	movl	-200(%rbp), %eax
	movl	%eax, u
	movl	$.LC29, %edi
	call	printStr
	movl	%eax, -204(%rbp)
	movl	-204(%rbp), %eax
	movl	%eax, u
.L3:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	sort, .-sort
	.globl	test_equality_a
	.type	test_equality_a, @function
test_equality_a:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L15
	jmp	.L16
.L16:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L15
	jmp	.L17
	jmp	.L17
.L15:
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, u
	movl	$.LC30, %edi
	call	printStr
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, u
	movl	$.LC31, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, u
	movl	$.LC32, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, u
	jmp	.L17
.L17:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	test_equality_a, .-test_equality_a
	.globl	test_not_equality_b
	.type	test_not_equality_b, @function
test_not_equality_b:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L18
	jmp	.L19
.L19:
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.L18
	jmp	.L20
	jmp	.L20
.L18:
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, u
	movl	$.LC33, %edi
	call	printStr
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, u
	movl	$.LC34, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, u
	movl	$.LC35, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, u
	jmp	.L20
.L20:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	test_not_equality_b, .-test_not_equality_b
	.globl	test_greater_equality_c
	.type	test_greater_equality_c, @function
test_greater_equality_c:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	.L21
	jmp	.L22
.L22:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L21
	jmp	.L23
	jmp	.L23
.L21:
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, u
	movl	$.LC36, %edi
	call	printStr
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, u
	movl	$.LC37, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, u
	movl	$.LC38, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, u
	jmp	.L23
.L23:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	test_greater_equality_c, .-test_greater_equality_c
	.globl	test_less_equality_c
	.type	test_less_equality_c, @function
test_less_equality_c:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movl	%edi, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	%esi, 20(%rbp)
	movl	20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L24
	jmp	.L25
.L25:
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L24
	jmp	.L26
	jmp	.L26
.L24:
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, u
	movl	$.LC39, %edi
	call	printStr
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, u
	movq	-4(%rbp), %rdi
	call	printInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, u
	movl	$.LC40, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, u
	movl	$.LC41, %edi
	call	printStr
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, u
	jmp	.L26
.L26:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	test_less_equality_c, .-test_less_equality_c
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$64, %rsp
	movl	$.LC42, %edi
	call	printStr
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -20(%rbp)
	movq	-20(%rbp), %rdi
	call	readInt
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$.LC43, %edi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -32(%rbp)
	movq	-32(%rbp), %rdi
	call	readInt
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC44, %edi
	call	printStr
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -44(%rbp)
	movq	-44(%rbp), %rdi
	call	readInt
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	-8(%rbp), %rdi
	call	printInt
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, u
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, u
	movq	-16(%rbp), %rdi
	call	printInt
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, u
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	sort
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	test_equality_a
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	test_less_equality_c
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	test_greater_equality_c
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	test_less_equality_c
	movq	-16(%rbp), %rdx
	movq	-12(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	test_not_equality_b
	movl	$0, %eax
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
