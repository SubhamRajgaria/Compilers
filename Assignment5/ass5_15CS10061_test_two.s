	.section	.rodata
.LC0:
	.string	"Enter the first operand\n"
.LC1:
	.string	"Enter the second operand\n"
.LC2:
	.string	"1 for addition, 2 for subtraction\n"
.LC3:
	.string	"3 for multiplication, 4 for division\n"
.LC4:
	.string	"5 for modulo, 6 for unary plus\n"
.LC5:
	.string	"7 for unary minus\n"
.LC6:
	.string	"-1 for exit\n"
.LC7:
	.string	"Enter your choice\n"
.LC8:
	.string	"Result :\n"
.LC9:
	.string	"\n"
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
	subq	$168, %rsp
	movl	$.LC0, %edi
	call	printStr
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	leal	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
	movq	-32(%rbp), %rdi
	call	readInt
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %edi
	call	printStr
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -12(%rbp)
	leal	-28(%rbp), %eax
	movl	%eax, -44(%rbp)
	movq	-44(%rbp), %rdi
	call	readInt
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$.LC2, %edi
	call	printStr
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC3, %edi
	call	printStr
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC4, %edi
	call	printStr
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC5, %edi
	call	printStr
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC6, %edi
	call	printStr
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -12(%rbp)
.L16:
	movl	$.LC7, %edi
	call	printStr
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -12(%rbp)
	leal	-28(%rbp), %eax
	movl	%eax, -76(%rbp)
	movq	-76(%rbp), %rdi
	call	readInt
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$1, %eax
	movl	%eax, -84(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-84(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L1:
	movl	$2, %eax
	movl	%eax, -92(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-92(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L4:
	movl	$3, %eax
	movl	%eax, -100(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-100(%rbp), %eax
	je	.L5
	jmp	.L6
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L6:
	movl	$4, %eax
	movl	%eax, -108(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-108(%rbp), %eax
	je	.L7
	jmp	.L8
	jmp	.L2
.L7:
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L8:
	movl	$5, %eax
	movl	%eax, -116(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-116(%rbp), %eax
	je	.L9
	jmp	.L10
	jmp	.L2
.L9:
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L10:
	movl	$6, %eax
	movl	%eax, -124(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-124(%rbp), %eax
	je	.L11
	jmp	.L12
	jmp	.L2
.L11:
	movl	-4(%rbp), %eax
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L12:
	movl	$7, %eax
	movl	%eax, -132(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-132(%rbp), %eax
	je	.L13
	jmp	.L2
	jmp	.L2
.L13:
	movl	-4(%rbp), %eax
	negl	%eax
	movl	%eax, -136(%rbp)
	movl	-136(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L2
.L2:
	movl	$1, %eax
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	negl	%eax
	movl	%eax, -144(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-144(%rbp), %eax
	jne	.L14
	jmp	.L15
	jmp	.L15
.L14:
	movl	$.LC8, %edi
	call	printStr
	movl	%eax, -148(%rbp)
	movl	-148(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-20(%rbp), %rdi
	call	printInt
	movl	%eax, -152(%rbp)
	movl	-152(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LC9, %edi
	call	printStr
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L15
.L15:
	movl	$1, %eax
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	negl	%eax
	movl	%eax, -164(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jne	.L16
	jmp	.L17
	jmp	.L17
.L17:
	movl	$0, %eax
	movl	%eax, -168(%rbp)
	movl	-168(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
