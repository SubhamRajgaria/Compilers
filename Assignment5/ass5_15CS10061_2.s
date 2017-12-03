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
	.comm	n1,4
	.comm	n2,4
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$160, %esp
	movl	$.LC0, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	-20(%ebp), %eax
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, n1
	movl	$.LC1, %eax
	pushl	%eax
	call	prints
	movl	%eax, -32(%ebp)
	movl	-32(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	-20(%ebp), %eax
	movl	%eax, -36(%ebp)
	movl	-36(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -40(%ebp)
	movl	-40(%ebp), %eax
	movl	%eax, n2
	movl	$.LC2, %eax
	pushl	%eax
	call	prints
	movl	%eax, -44(%ebp)
	movl	-44(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC3, %eax
	pushl	%eax
	call	prints
	movl	%eax, -48(%ebp)
	movl	-48(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC4, %eax
	pushl	%eax
	call	prints
	movl	%eax, -52(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC5, %eax
	pushl	%eax
	call	prints
	movl	%eax, -56(%ebp)
	movl	-56(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC6, %eax
	pushl	%eax
	call	prints
	movl	%eax, -60(%ebp)
	movl	-60(%ebp), %eax
	movl	%eax, -4(%ebp)
.L16:
	movl	$.LC7, %eax
	pushl	%eax
	call	prints
	movl	%eax, -64(%ebp)
	movl	-64(%ebp), %eax
	movl	%eax, -4(%ebp)
	leal	-20(%ebp), %eax
	movl	%eax, -68(%ebp)
	movl	-68(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -72(%ebp)
	movl	-72(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	$1, %eax
	movl	%eax, -76(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-76(%ebp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	n1, %eax
	movl	n2, %edx
	addl	%edx, %eax
	movl	%eax, -80(%ebp)
	movl	-80(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L1:
	movl	$2, %eax
	movl	%eax, -84(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-84(%ebp), %eax
	je	.L3
	jmp	.L4
	jmp	.L2
.L3:
	movl	n1, %eax
	movl	n2, %edx
	subl	%edx, %eax
	movl	%eax, -88(%ebp)
	movl	-88(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L4:
	movl	$3, %eax
	movl	%eax, -92(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-92(%ebp), %eax
	je	.L5
	jmp	.L6
	jmp	.L2
.L5:
	movl	n1, %eax
	imull	n2, %eax
	movl	%eax, -96(%ebp)
	movl	-96(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L6:
	movl	$4, %eax
	movl	%eax, -100(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-100(%ebp), %eax
	je	.L7
	jmp	.L8
	jmp	.L2
.L7:
	movl	n1, %eax
	cltd
	idivl	n2
	movl	%eax, -104(%ebp)
	movl	-104(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L8:
	movl	$5, %eax
	movl	%eax, -108(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-108(%ebp), %eax
	je	.L9
	jmp	.L10
	jmp	.L2
.L9:
	movl	n1, %eax
	cltd
	idivl	n2
	movl	%edx, -112(%ebp)
	movl	-112(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L10:
	movl	$6, %eax
	movl	%eax, -116(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-116(%ebp), %eax
	je	.L11
	jmp	.L12
	jmp	.L2
.L11:
	movl	n1, %eax
	movl	%eax, -120(%ebp)
	movl	-120(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L12:
	movl	$7, %eax
	movl	%eax, -124(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-124(%ebp), %eax
	je	.L13
	jmp	.L2
	jmp	.L2
.L13:
	movl	n1, %eax
	negl	%eax
	movl	%eax, -128(%ebp)
	movl	-128(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L2:
	movl	$1, %eax
	movl	%eax, -132(%ebp)
	movl	-132(%ebp), %eax
	negl	%eax
	movl	%eax, -136(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-136(%ebp), %eax
	jne	.L14
	jmp	.L15
	jmp	.L15
.L14:
	movl	$.LC8, %eax
	pushl	%eax
	call	prints
	movl	%eax, -140(%ebp)
	movl	-140(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -144(%ebp)
	movl	-144(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$.LC9, %eax
	pushl	%eax
	call	prints
	movl	%eax, -148(%ebp)
	movl	-148(%ebp), %eax
	movl	%eax, -4(%ebp)
	jmp	.L15
.L15:
	movl	$1, %eax
	movl	%eax, -152(%ebp)
	movl	-152(%ebp), %eax
	negl	%eax
	movl	%eax, -156(%ebp)
	movl	-8(%ebp), %eax
	cmpl	-156(%ebp), %eax
	jne	.L16
	jmp	.L17
	jmp	.L17
.L17:
	movl	$0, %eax
	movl	%eax, -160(%ebp)
	movl	-160(%ebp), %eax
	leave
	ret
	.size	main, .-main
