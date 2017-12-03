	.text
T0:
	.long	-343597384
	.long	1073920081
T1:
	.long	-343597384
	.long	1074444369
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$320, %rsp
	movl	$2, %eax
	movl	%eax, -4(%rbp)
	movl	$2, %eax
	movl	%eax, -8(%rbp)
	movl	$0, %eax
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -52(%rbp)
.L2:
	movl	$2, %eax
	movl	%eax, -64(%rbp)
	movl	-52(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jl	.L0
	jmp	.L1
	jmp	.L1
.L4:
	movl	-52(%rbp), %eax
	movl	%eax, -68(%rbp)
	movl	$1, %eax
	movl	%eax, -72(%rbp)
	movl	-52(%rbp), %eax
	movl	-72(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
	jmp	.L2
.L0:
	movl	$0, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -56(%rbp)
.L6:
	movl	$2, %eax
	movl	%eax, -80(%rbp)
	movl	-56(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl	.L3
	jmp	.L4
	jmp	.L5
.L7:
	movl	-56(%rbp), %eax
	movl	%eax, -84(%rbp)
	movl	$1, %eax
	movl	%eax, -88(%rbp)
	movl	-56(%rbp), %eax
	movl	-88(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	jmp	.L6
.L3:
	movl	$8, %eax
	movl	%eax, -96(%rbp)
	movl	-52(%rbp), %eax
	imull	-96(%rbp), %eax
	movl	%eax, -92(%rbp)
	movl	$8, %eax
	movl	%eax, -108(%rbp)
	movl	-56(%rbp), %eax
	imull	-108(%rbp), %eax
	movl	%eax, -100(%rbp)
	movl	-92(%rbp), %eax
	movl	-100(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	leal	-48(%rbp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -116(%rbp)
	movsd	T0, %xmm0
	movsd	%xmm0, -124(%rbp)
	movl	-104(%rbp), %eax
	leal	-116(%rbp), %edx
	addl	%edx, %eax
	movl	-124(%rbp), %edx
	movl	%edx, (%eax)
	jmp	.L7
.L5:
	jmp	.L4
.L1:
	movl	$2, %eax
	movl	%eax, -128(%rbp)
	movl	$2, %eax
	movl	%eax, -132(%rbp)
	movl	$0, %eax
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	%eax, -52(%rbp)
.L10:
	movl	$2, %eax
	movl	%eax, -180(%rbp)
	movl	-52(%rbp), %eax
	cmpl	-180(%rbp), %eax
	jl	.L8
	jmp	.L9
	jmp	.L9
.L12:
	movl	-52(%rbp), %eax
	movl	%eax, -184(%rbp)
	movl	$1, %eax
	movl	%eax, -188(%rbp)
	movl	-52(%rbp), %eax
	movl	-188(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
	jmp	.L10
.L8:
	movl	$0, %eax
	movl	%eax, -192(%rbp)
	movl	-192(%rbp), %eax
	movl	%eax, -56(%rbp)
.L14:
	movl	$2, %eax
	movl	%eax, -196(%rbp)
	movl	-56(%rbp), %eax
	cmpl	-196(%rbp), %eax
	jl	.L11
	jmp	.L12
	jmp	.L13
.L15:
	movl	-56(%rbp), %eax
	movl	%eax, -200(%rbp)
	movl	$1, %eax
	movl	%eax, -204(%rbp)
	movl	-56(%rbp), %eax
	movl	-204(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	jmp	.L14
.L11:
	movl	$8, %eax
	movl	%eax, -212(%rbp)
	movl	-52(%rbp), %eax
	imull	-212(%rbp), %eax
	movl	%eax, -208(%rbp)
	movl	$8, %eax
	movl	%eax, -224(%rbp)
	movl	-56(%rbp), %eax
	imull	-224(%rbp), %eax
	movl	%eax, -216(%rbp)
	movl	-208(%rbp), %eax
	movl	-216(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -220(%rbp)
	movl	-220(%rbp), %eax
	leal	-172(%rbp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -232(%rbp)
	movsd	T1, %xmm0
	movsd	%xmm0, -240(%rbp)
	movl	-220(%rbp), %eax
	leal	-232(%rbp), %edx
	addl	%edx, %eax
	movl	-240(%rbp), %edx
	movl	%edx, (%eax)
	jmp	.L15
.L13:
	jmp	.L12
.L9:
	movl	$0, %eax
	movl	%eax, -256(%rbp)
	movl	-256(%rbp), %eax
	movl	%eax, -52(%rbp)
.L18:
	movl	$2, %eax
	movl	%eax, -260(%rbp)
	movl	-52(%rbp), %eax
	cmpl	-260(%rbp), %eax
	jl	.L16
	jmp	.L17
	jmp	.L17
.L20:
	movl	-52(%rbp), %eax
	movl	%eax, -264(%rbp)
	movl	$1, %eax
	movl	%eax, -268(%rbp)
	movl	-52(%rbp), %eax
	movl	-268(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
	jmp	.L18
.L16:
	movl	$0, %eax
	movl	%eax, -272(%rbp)
	movl	-272(%rbp), %eax
	movl	%eax, -56(%rbp)
.L22:
	movl	$2, %eax
	movl	%eax, -276(%rbp)
	movl	-56(%rbp), %eax
	cmpl	-276(%rbp), %eax
	jl	.L19
	jmp	.L20
	jmp	.L21
.L23:
	movl	-56(%rbp), %eax
	movl	%eax, -280(%rbp)
	movl	$1, %eax
	movl	%eax, -284(%rbp)
	movl	-56(%rbp), %eax
	movl	-284(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
	jmp	.L22
.L19:
	movl	$8, %eax
	movl	%eax, -292(%rbp)
	movl	-52(%rbp), %eax
	imull	-292(%rbp), %eax
	movl	%eax, -288(%rbp)
	movl	$8, %eax
	movl	%eax, -304(%rbp)
	movl	-56(%rbp), %eax
	imull	-304(%rbp), %eax
	movl	%eax, -296(%rbp)
	movl	-288(%rbp), %eax
	movl	-296(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -300(%rbp)
	movl	-300(%rbp), %eax
	leal	-48(%rbp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -312(%rbp)
	movl	-312(%rbp), %eax
	movsd	%xmm0, -248(%rbp)
	movq	-248(%rbp), %rdi
	call	printFlt
	movl	%eax, -316(%rbp)
	movl	-316(%rbp), %eax
	movl	%eax, -252(%rbp)
	jmp	.L23
.L21:
	jmp	.L20
.L17:
	movl	$0, %eax
	movl	%eax, -320(%rbp)
	movl	-320(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
