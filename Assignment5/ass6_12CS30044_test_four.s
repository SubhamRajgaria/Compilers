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
	pushl	%ebp
	movl	%esp, %ebp
	subl	$180, %esp
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jl	.L0
	jmp	.L1
.L0:
	movl	8(%ebp), %eax
	cmpl	16(%ebp), %eax
	jl	.L2
	jmp	.L1
	jmp	.L3
.L2:
	movl	$.LC0, %eax
	pushl	%eax
	call	prints
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, u
	movl	$.LC1, %eax
	pushl	%eax
	call	prints
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	cmpl	12(%ebp), %eax
	jg	.L4
	jmp	.L5
	jmp	.L6
.L4:
	movl	$.LC2, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, u
	movl	$.LC3, %eax
	pushl	%eax
	call	prints
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, u
	movl	$.LC4, %eax
	pushl	%eax
	call	prints
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -32(%ebp)
	movl	-32(%ebp), %eax
	movl	%eax, u
	movl	$.LC5, %eax
	pushl	%eax
	call	prints
	movl	%eax, -36(%ebp)
	movl	-36(%ebp), %eax
	movl	%eax, u
	jmp	.L3
.L5:
	movl	$.LC6, %eax
	pushl	%eax
	call	prints
	movl	%eax, -40(%ebp)
	movl	-40(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -44(%ebp)
	movl	-44(%ebp), %eax
	movl	%eax, u
	movl	$.LC7, %eax
	pushl	%eax
	call	prints
	movl	%eax, -48(%ebp)
	movl	-48(%ebp), %eax
	movl	%eax, u
	movl	$.LC8, %eax
	pushl	%eax
	call	prints
	movl	%eax, -52(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -56(%ebp)
	movl	-56(%ebp), %eax
	movl	%eax, u
	movl	$.LC9, %eax
	pushl	%eax
	call	prints
	movl	%eax, -60(%ebp)
	movl	-60(%ebp), %eax
	movl	%eax, u
.L6:
	jmp	.L3
.L1:
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jg	.L7
	jmp	.L8
.L7:
	movl	16(%ebp), %eax
	cmpl	12(%ebp), %eax
	jg	.L9
	jmp	.L8
	jmp	.L3
.L9:
	movl	$.LC10, %eax
	pushl	%eax
	call	prints
	movl	%eax, -64(%ebp)
	movl	-64(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -68(%ebp)
	movl	-68(%ebp), %eax
	movl	%eax, u
	movl	$.LC11, %eax
	pushl	%eax
	call	prints
	movl	%eax, -72(%ebp)
	movl	-72(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	cmpl	16(%ebp), %eax
	jl	.L10
	jmp	.L11
	jmp	.L12
.L10:
	movl	$.LC12, %eax
	pushl	%eax
	call	prints
	movl	%eax, -76(%ebp)
	movl	-76(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -80(%ebp)
	movl	-80(%ebp), %eax
	movl	%eax, u
	movl	$.LC13, %eax
	pushl	%eax
	call	prints
	movl	%eax, -84(%ebp)
	movl	-84(%ebp), %eax
	movl	%eax, u
	movl	$.LC14, %eax
	pushl	%eax
	call	prints
	movl	%eax, -88(%ebp)
	movl	-88(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -92(%ebp)
	movl	-92(%ebp), %eax
	movl	%eax, u
	movl	$.LC15, %eax
	pushl	%eax
	call	prints
	movl	%eax, -96(%ebp)
	movl	-96(%ebp), %eax
	movl	%eax, u
	jmp	.L3
.L11:
	movl	$.LC16, %eax
	pushl	%eax
	call	prints
	movl	%eax, -100(%ebp)
	movl	-100(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -104(%ebp)
	movl	-104(%ebp), %eax
	movl	%eax, u
	movl	$.LC17, %eax
	pushl	%eax
	call	prints
	movl	%eax, -108(%ebp)
	movl	-108(%ebp), %eax
	movl	%eax, u
	movl	$.LC18, %eax
	pushl	%eax
	call	prints
	movl	%eax, -112(%ebp)
	movl	-112(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -116(%ebp)
	movl	-116(%ebp), %eax
	movl	%eax, u
	movl	$.LC19, %eax
	pushl	%eax
	call	prints
	movl	%eax, -120(%ebp)
	movl	-120(%ebp), %eax
	movl	%eax, u
.L12:
	jmp	.L3
.L8:
	movl	$.LC20, %eax
	pushl	%eax
	call	prints
	movl	%eax, -124(%ebp)
	movl	-124(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -128(%ebp)
	movl	-128(%ebp), %eax
	movl	%eax, u
	movl	$.LC21, %eax
	pushl	%eax
	call	prints
	movl	%eax, -132(%ebp)
	movl	-132(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jg	.L13
	jmp	.L14
	jmp	.L3
.L13:
	movl	$.LC22, %eax
	pushl	%eax
	call	prints
	movl	%eax, -136(%ebp)
	movl	-136(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -140(%ebp)
	movl	-140(%ebp), %eax
	movl	%eax, u
	movl	$.LC23, %eax
	pushl	%eax
	call	prints
	movl	%eax, -144(%ebp)
	movl	-144(%ebp), %eax
	movl	%eax, u
	movl	$.LC24, %eax
	pushl	%eax
	call	prints
	movl	%eax, -148(%ebp)
	movl	-148(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -152(%ebp)
	movl	-152(%ebp), %eax
	movl	%eax, u
	movl	$.LC25, %eax
	pushl	%eax
	call	prints
	movl	%eax, -156(%ebp)
	movl	-156(%ebp), %eax
	movl	%eax, u
	jmp	.L3
.L14:
	movl	$.LC26, %eax
	pushl	%eax
	call	prints
	movl	%eax, -160(%ebp)
	movl	-160(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -164(%ebp)
	movl	-164(%ebp), %eax
	movl	%eax, u
	movl	$.LC27, %eax
	pushl	%eax
	call	prints
	movl	%eax, -168(%ebp)
	movl	-168(%ebp), %eax
	movl	%eax, u
	movl	$.LC28, %eax
	pushl	%eax
	call	prints
	movl	%eax, -172(%ebp)
	movl	-172(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -176(%ebp)
	movl	-176(%ebp), %eax
	movl	%eax, u
	movl	$.LC29, %eax
	pushl	%eax
	call	prints
	movl	%eax, -180(%ebp)
	movl	-180(%ebp), %eax
	movl	%eax, u
.L3:
	nop
	leave
	ret
	.size	sort, .-sort
	.globl	test_equality_a
	.type	test_equality_a, @function
test_equality_a:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	je	.L15
	jmp	.L16
.L16:
	movl	8(%ebp), %eax
	cmpl	16(%ebp), %eax
	je	.L15
	jmp	.L17
	jmp	.L17
.L15:
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	movl	$.LC30, %eax
	pushl	%eax
	call	prints
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, u
	movl	$.LC31, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, u
	movl	$.LC32, %eax
	pushl	%eax
	call	prints
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, u
	jmp	.L17
.L17:
	nop
	leave
	ret
	.size	test_equality_a, .-test_equality_a
	.globl	test_not_equality_b
	.type	test_not_equality_b, @function
test_not_equality_b:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jne	.L18
	jmp	.L19
.L19:
	movl	12(%ebp), %eax
	cmpl	16(%ebp), %eax
	jne	.L18
	jmp	.L20
	jmp	.L20
.L18:
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	movl	$.LC33, %eax
	pushl	%eax
	call	prints
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, u
	movl	$.LC34, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, u
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, u
	movl	$.LC35, %eax
	pushl	%eax
	call	prints
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, u
	jmp	.L20
.L20:
	nop
	leave
	ret
	.size	test_not_equality_b, .-test_not_equality_b
	.globl	test_greater_equality_c
	.type	test_greater_equality_c, @function
test_greater_equality_c:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jge	.L21
	jmp	.L22
.L22:
	movl	16(%ebp), %eax
	cmpl	12(%ebp), %eax
	jge	.L21
	jmp	.L23
	jmp	.L23
.L21:
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	movl	$.LC36, %eax
	pushl	%eax
	call	prints
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, u
	movl	$.LC37, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, u
	movl	$.LC38, %eax
	pushl	%eax
	call	prints
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, u
	jmp	.L23
.L23:
	nop
	leave
	ret
	.size	test_greater_equality_c, .-test_greater_equality_c
	.globl	test_less_equality_c
	.type	test_less_equality_c, @function
test_less_equality_c:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jle	.L24
	jmp	.L25
.L25:
	movl	16(%ebp), %eax
	cmpl	12(%ebp), %eax
	jle	.L24
	jmp	.L26
	jmp	.L26
.L24:
	movl	16(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	movl	$.LC39, %eax
	pushl	%eax
	call	prints
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, u
	movl	8(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, u
	movl	$.LC40, %eax
	pushl	%eax
	call	prints
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, u
	movl	12(%ebp), %eax
	pushl	%eax
	call	printi
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, u
	movl	$.LC41, %eax
	pushl	%eax
	call	prints
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, u
	jmp	.L26
.L26:
	nop
	leave
	ret
	.size	test_less_equality_c, .-test_less_equality_c
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$52, %esp
	movl	$.LC42, %eax
	pushl	%eax
	call	prints
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	$.LC43, %eax
	pushl	%eax
	call	prints
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -32(%ebp)
	movl	-32(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -36(%ebp)
	movl	-36(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	$.LC44, %eax
	pushl	%eax
	call	prints
	movl	%eax, -40(%ebp)
	movl	-40(%ebp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -44(%ebp)
	movl	-44(%ebp), %eax
	pushl	%eax
	call	readi
	movl	%eax, -48(%ebp)
	movl	-48(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	sort
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	test_equality_a
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	test_less_equality_c
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	test_greater_equality_c
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	test_less_equality_c
	movl	-16(%ebp), %eax
	pushl	%eax
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	test_not_equality_b
	movl	$0, %eax
	movl	%eax, -52(%ebp)
	movl	-52(%ebp), %eax
	leave
	ret
	.size	main, .-main
