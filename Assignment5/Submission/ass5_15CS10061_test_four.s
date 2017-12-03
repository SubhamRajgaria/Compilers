	.section	.rodata
.LC0:
	.string	"Enter two integers\n"
.LC1:
	.string	"Enter first integer\n"
.LC2:
	.string	"Enter second integer\n"
.LC3:
	.string	"Addition Result is\n"
.LC4:
	.string	"\nSubtraction Result is\n"
.LC5:
	.string	"\nMultiplication Result is\n"
.LC6:
	.string	"\nDivison Result is\n"
.LC7:
	.string	"\nModulo Result is\n"
.LC8:
	.string	"\nEnter two doubles\n"
.LC9:
	.string	"Enter first double\n"
.LC10:
	.string	"Enter second double\n"
.LC11:
	.string	"Addition Result is\n"
.LC12:
	.string	"\nSubtraction Result is\n"
.LC13:
	.string	"\nMultiplication Result is\n"
.LC14:
	.string	"\nDivison Result is\n"
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
	subq	$224, %rsp
	movl	$.LC0, %edi
	call	printStr
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC1, %edi
	call	printStr
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
	leal	-16(%rbp), %eax
	movl	%eax, -52(%rbp)
	movq	-52(%rbp), %rdi
	call	readInt
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC2, %edi
	call	printStr
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -16(%rbp)
	leal	-16(%rbp), %eax
	movl	%eax, -64(%rbp)
	movq	-64(%rbp), %rdi
	call	readInt
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$.LC3, %edi
	call	printStr
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC4, %edi
	call	printStr
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC5, %edi
	call	printStr
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC6, %edi
	call	printStr
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC7, %edi
	call	printStr
	movl	%eax, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, -124(%rbp)
	movl	-124(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-12(%rbp), %rdi
	call	printInt
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC8, %edi
	call	printStr
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC9, %edi
	call	printStr
	movl	%eax, -136(%rbp)
	movl	-136(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-24(%rbp), %rax
	movq	%rax, -140(%rbp)
	movq	-140(%rbp), %rdi
	call	readFlt
	movl	%eax, -144(%rbp)
	movl	-144(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC10, %edi
	call	printStr
	movl	%eax, -148(%rbp)
	movl	-148(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -152(%rbp)
	movq	-152(%rbp), %rdi
	call	readFlt
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC11, %edi
	call	printStr
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -16(%rbp)
	movsd	-24(%rbp), %xmm0
	movsd	-32(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -168(%rbp)
	movl	-168(%rbp), %eax
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	printFlt
	movl	%eax, -172(%rbp)
	movl	-172(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC12, %edi
	call	printStr
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	%eax, -16(%rbp)
	movsd	-24(%rbp), %xmm0
	movsd	-32(%rbp), %xmm1
	subsd	%xmm1, %xmm0
	movsd	%xmm0, -184(%rbp)
	movl	-184(%rbp), %eax
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	printFlt
	movl	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC13, %edi
	call	printStr
	movl	%eax, -192(%rbp)
	movl	-192(%rbp), %eax
	movl	%eax, -16(%rbp)
	movsd	-24(%rbp), %xmm0
	movsd	-32(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -200(%rbp)
	movl	-200(%rbp), %eax
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	printFlt
	movl	%eax, -204(%rbp)
	movl	-204(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC14, %edi
	call	printStr
	movl	%eax, -208(%rbp)
	movl	-208(%rbp), %eax
	movl	%eax, -16(%rbp)
	movsd	-24(%rbp), %xmm0
	cltd
	movsd	-32(%rbp), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -216(%rbp)
	movl	-216(%rbp), %eax
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	printFlt
	movl	%eax, -220(%rbp)
	movl	-220(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, %eax
	movl	%eax, -224(%rbp)
	movl	-224(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
