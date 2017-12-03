	.file	"ass2_15CS10061.c"
	.text
.Ltext0:
	.globl	printStr
	.type	printStr, @function
printStr:
.LFB0:
	.file 1 "ass2_15CS10061.c"
	.loc 1 6 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$10048, %rsp
	movq	%rdi, -10040(%rbp)
	.loc 1 6 0
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	.loc 1 8 0
	movl	$0, -10024(%rbp)
	.loc 1 9 0
	jmp	.L2
.L3:
	.loc 1 11 0
	movl	-10024(%rbp), %eax
	movslq	%eax, %rdx
	movq	-10040(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-10024(%rbp), %eax
	cltq
	movb	%dl, -10016(%rbp,%rax)
	.loc 1 12 0
	addl	$1, -10024(%rbp)
.L2:
	.loc 1 9 0 discriminator 1
	movl	-10024(%rbp), %eax
	movslq	%eax, %rdx
	movq	-10040(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	.loc 1 15 0
	movl	-10024(%rbp), %eax
	movl	%eax, -10020(%rbp)
	.loc 1 16 0
	leaq	-10016(%rbp), %rax
	movl	-10020(%rbp), %edx
	movq	%rax, %rsi
#APP
# 16 "ass2_15CS10061.c" 1
	movl $1, %eax 
	movl $1, %edi 
	syscall 
	
# 0 "" 2
	.loc 1 23 0
#NO_APP
	movl	-10024(%rbp), %eax
	.loc 1 24 0
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L5
	call	__stack_chk_fail
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	printStr, .-printStr
	.globl	printInt
	.type	printInt, @function
printInt:
.LFB1:
	.loc 1 26 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$10072, %rsp
	.cfi_offset 3, -24
	movl	%edi, -10068(%rbp)
	.loc 1 26 0
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	.loc 1 28 0
	movb	$48, -10054(%rbp)
	.loc 1 29 0
	movl	$0, -10052(%rbp)
	.loc 1 30 0
	cmpl	$0, -10068(%rbp)
	jne	.L7
	.loc 1 31 0
	movl	-10052(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10052(%rbp)
	cltq
	movzbl	-10054(%rbp), %edx
	movb	%dl, -10032(%rbp,%rax)
	jmp	.L8
.L7:
	.loc 1 33 0
	cmpl	$0, -10068(%rbp)
	jns	.L9
	.loc 1 34 0
	movl	-10052(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10052(%rbp)
	cltq
	movb	$45, -10032(%rbp,%rax)
	.loc 1 35 0
	negl	-10068(%rbp)
	.loc 1 37 0
	jmp	.L10
.L9:
	jmp	.L10
.L11:
.LBB2:
	.loc 1 39 0
	movl	-10068(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -10040(%rbp)
	.loc 1 40 0
	movl	-10052(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10052(%rbp)
	movl	-10040(%rbp), %edx
	movl	%edx, %ecx
	movzbl	-10054(%rbp), %edx
	addl	%ecx, %edx
	cltq
	movb	%dl, -10032(%rbp,%rax)
	.loc 1 41 0
	movl	-10068(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -10068(%rbp)
.L10:
.LBE2:
	.loc 1 37 0 discriminator 1
	cmpl	$0, -10068(%rbp)
	jg	.L11
	.loc 1 43 0
	movzbl	-10032(%rbp), %eax
	cmpb	$45, %al
	jne	.L12
	.loc 1 44 0
	movl	$1, -10048(%rbp)
	jmp	.L13
.L12:
	.loc 1 46 0
	movl	$0, -10048(%rbp)
.L13:
	.loc 1 47 0
	movl	-10052(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -10044(%rbp)
	.loc 1 48 0
	jmp	.L14
.L15:
.LBB3:
	.loc 1 50 0
	movl	-10048(%rbp), %eax
	cltq
	movzbl	-10032(%rbp,%rax), %eax
	movb	%al, -10053(%rbp)
	.loc 1 51 0
	movl	-10048(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10048(%rbp)
	movl	-10044(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-10032(%rbp,%rdx), %edx
	cltq
	movb	%dl, -10032(%rbp,%rax)
	.loc 1 52 0
	movl	-10044(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -10044(%rbp)
	cltq
	movzbl	-10053(%rbp), %edx
	movb	%dl, -10032(%rbp,%rax)
.L14:
.LBE3:
	.loc 1 48 0 discriminator 1
	movl	-10048(%rbp), %eax
	cmpl	-10044(%rbp), %eax
	jl	.L15
.L8:
	.loc 1 56 0
	movl	-10052(%rbp), %eax
	movl	%eax, -10036(%rbp)
	.loc 1 57 0
	leaq	-10032(%rbp), %rax
	movl	-10036(%rbp), %edx
	movq	%rax, %rsi
#APP
# 57 "ass2_15CS10061.c" 1
	movl $1, %eax 
	movl $1, %edi 
	syscall 
	
# 0 "" 2
	.loc 1 64 0
#NO_APP
	movl	-10036(%rbp), %eax
	.loc 1 65 0
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L17
	call	__stack_chk_fail
.L17:
	addq	$10072, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	printInt, .-printInt
	.globl	readInt
	.type	readInt, @function
readInt:
.LFB2:
	.loc 1 67 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	.loc 1 67 0
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	.loc 1 70 0
	movl	$0, -60(%rbp)
	movl	$0, -56(%rbp)
.L23:
	.loc 1 72 0
	movl	$0, %eax
	movl	$0, %ecx
	leaq	-61(%rbp), %rsi
	movl	$1, %edx
	movl	%ecx, %edi
#APP
# 72 "ass2_15CS10061.c" 1
	syscall
# 0 "" 2
	.loc 1 73 0
#NO_APP
	movzbl	-61(%rbp), %eax
	cmpb	$9, %al
	je	.L19
	.loc 1 73 0 is_stmt 0 discriminator 1
	movzbl	-61(%rbp), %eax
	cmpb	$10, %al
	je	.L19
	movzbl	-61(%rbp), %eax
	cmpb	$32, %al
	je	.L19
	.loc 1 74 0 is_stmt 1
	movzbl	-61(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jg	.L20
	.loc 1 74 0 is_stmt 0 discriminator 2
	movzbl	-61(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	testl	%eax, %eax
	jns	.L21
.L20:
	.loc 1 74 0 discriminator 1
	movzbl	-61(%rbp), %eax
	cmpb	$45, %al
	je	.L21
	movq	-72(%rbp), %rax
	movl	$1, (%rax)
	.loc 1 78 0 is_stmt 1 discriminator 1
	jmp	.L23
.L21:
	.loc 1 76 0
	movl	-56(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -56(%rbp)
	movzbl	-61(%rbp), %edx
	cltq
	movb	%dl, -48(%rbp,%rax)
	.loc 1 78 0
	jmp	.L23
.L19:
	.loc 1 79 0
	cmpl	$9, -56(%rbp)
	jg	.L24
	.loc 1 79 0 is_stmt 0 discriminator 1
	cmpl	$0, -56(%rbp)
	jne	.L25
.L24:
	.loc 1 80 0 is_stmt 1
	movq	-72(%rbp), %rax
	movl	$1, (%rax)
	.loc 1 81 0
	movl	$0, %eax
	jmp	.L36
.L25:
	.loc 1 83 0
	movzbl	-48(%rbp), %eax
	cmpb	$45, %al
	jne	.L27
	.loc 1 84 0
	cmpl	$1, -56(%rbp)
	jne	.L28
	.loc 1 85 0
	movq	-72(%rbp), %rax
	movl	$1, (%rax)
	.loc 1 86 0
	movl	$0, %eax
	jmp	.L36
.L28:
	.loc 1 88 0
	movl	$1, -52(%rbp)
	jmp	.L29
.L31:
	.loc 1 89 0
	movl	-52(%rbp), %eax
	cltq
	movzbl	-48(%rbp,%rax), %eax
	cmpb	$45, %al
	jne	.L30
	.loc 1 89 0 is_stmt 0 discriminator 1
	movq	-72(%rbp), %rax
	movl	$1, (%rax)
.L30:
	.loc 1 90 0 is_stmt 1
	movl	-60(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -60(%rbp)
	.loc 1 91 0
	movl	-52(%rbp), %eax
	cltq
	movzbl	-48(%rbp,%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	addl	%eax, -60(%rbp)
	.loc 1 88 0
	addl	$1, -52(%rbp)
.L29:
	.loc 1 88 0 is_stmt 0 discriminator 1
	movl	-52(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jl	.L31
	.loc 1 93 0 is_stmt 1
	negl	-60(%rbp)
	jmp	.L32
.L27:
	.loc 1 96 0
	movl	$0, -52(%rbp)
	jmp	.L33
.L35:
	.loc 1 97 0
	movl	-52(%rbp), %eax
	cltq
	movzbl	-48(%rbp,%rax), %eax
	cmpb	$45, %al
	jne	.L34
	.loc 1 97 0 is_stmt 0 discriminator 1
	movq	-72(%rbp), %rax
	movl	$1, (%rax)
.L34:
	.loc 1 98 0 is_stmt 1
	movl	-60(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -60(%rbp)
	.loc 1 99 0
	movl	-52(%rbp), %eax
	cltq
	movzbl	-48(%rbp,%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	addl	%eax, -60(%rbp)
	.loc 1 96 0
	addl	$1, -52(%rbp)
.L33:
	.loc 1 96 0 is_stmt 0 discriminator 1
	movl	-52(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jl	.L35
.L32:
	.loc 1 102 0 is_stmt 1
	movl	-60(%rbp), %eax
.L36:
	.loc 1 103 0
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L37
	call	__stack_chk_fail
.L37:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	readInt, .-readInt
	.globl	readFlt
	.type	readFlt, @function
readFlt:
.LFB3:
	.loc 1 105 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -88(%rbp)
	movq	%rsp, %rax
	movq	%rax, %r10
	.loc 1 106 0
	movl	$46, -48(%rbp)
	.loc 1 107 0
	movl	-48(%rbp), %eax
	movslq	%eax, %rsi
	subq	$1, %rsi
	movq	%rsi, -32(%rbp)
	movslq	%eax, %rsi
	movq	%rsi, %r8
	movl	$0, %r9d
	movslq	%eax, %rsi
	movq	%rsi, %rdx
	movl	$0, %ecx
	cltq
	movl	$16, %edx
	subq	$1, %rdx
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$0, %rax
	movq	%rax, -24(%rbp)
	movb	$48, -73(%rbp)
	.loc 1 108 0
	movl	$1, -72(%rbp)
	movl	$0, -68(%rbp)
	.loc 1 109 0
	movl	.LC0(%rip), %eax
	movl	%eax, -64(%rbp)
	.loc 1 110 0
	movl	.LC0(%rip), %eax
	movl	%eax, -60(%rbp)
	.loc 1 111 0
	movl	$1, -56(%rbp)
	.loc 1 112 0
	movq	-24(%rbp), %rsi
	movl	$0, %eax
	movl	$0, %ecx
	movl	-48(%rbp), %edx
	movl	%ecx, %edi
#APP
# 112 "ass2_15CS10061.c" 1
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -44(%rbp)
	.loc 1 117 0
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L39
	.loc 1 118 0
	movl	$-1, -72(%rbp)
	.loc 1 119 0
	movl	$1, -68(%rbp)
	.loc 1 121 0
	jmp	.L40
.L39:
	jmp	.L40
.L46:
.LBB4:
	.loc 1 123 0
	movq	-24(%rbp), %rdx
	movl	-68(%rbp), %eax
	cltq
	movzbl	(%rdx,%rax), %eax
	cmpb	$46, %al
	jne	.L41
	.loc 1 124 0
	movl	.LC1(%rip), %eax
	movl	%eax, -60(%rbp)
	.loc 1 125 0
	addl	$1, -68(%rbp)
	.loc 1 126 0
	jmp	.L42
.L41:
	.loc 1 128 0
	movq	-24(%rbp), %rdx
	movl	-68(%rbp), %eax
	cltq
	movzbl	(%rdx,%rax), %eax
	movsbl	%al, %edx
	movsbl	-73(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -40(%rbp)
	.loc 1 129 0
	cmpl	$0, -40(%rbp)
	js	.L43
	.loc 1 129 0 is_stmt 0 discriminator 1
	cmpl	$9, -40(%rbp)
	jle	.L44
.L43:
	.loc 1 130 0 is_stmt 1
	movl	$1, %eax
	jmp	.L45
.L44:
	.loc 1 133 0
	movss	-64(%rbp), %xmm1
	movss	.LC2(%rip), %xmm0
	mulss	%xmm0, %xmm1
	cvtsi2ss	-40(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -64(%rbp)
	.loc 1 134 0
	addl	$1, -68(%rbp)
.L40:
.LBE4:
	.loc 1 121 0 discriminator 1
	movq	-24(%rbp), %rdx
	movl	-68(%rbp), %eax
	cltq
	movzbl	(%rdx,%rax), %eax
	cmpb	$10, %al
	je	.L42
	.loc 1 121 0 is_stmt 0 discriminator 2
	movl	-68(%rbp), %eax
	cmpl	-48(%rbp), %eax
	jl	.L46
.L42:
	.loc 1 136 0 is_stmt 1
	movss	.LC1(%rip), %xmm0
	ucomiss	-60(%rbp), %xmm0
	jp	.L47
	movss	.LC1(%rip), %xmm0
	ucomiss	-60(%rbp), %xmm0
	jne	.L47
.LBB5:
	.loc 1 138 0
	movl	.LC0(%rip), %eax
	movl	%eax, -60(%rbp)
	.loc 1 140 0
	jmp	.L49
.L58:
.LBB6:
	.loc 1 142 0
	movq	-24(%rbp), %rdx
	movl	-68(%rbp), %eax
	cltq
	movzbl	(%rdx,%rax), %eax
	movsbl	%al, %edx
	movsbl	-73(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -36(%rbp)
	.loc 1 143 0
	cmpl	$0, -36(%rbp)
	js	.L50
	.loc 1 143 0 is_stmt 0 discriminator 1
	cmpl	$9, -36(%rbp)
	jle	.L51
.L50:
	.loc 1 144 0 is_stmt 1
	movl	$1, %eax
	jmp	.L45
.L51:
	.loc 1 145 0
	movss	-60(%rbp), %xmm1
	movss	.LC2(%rip), %xmm0
	mulss	%xmm1, %xmm0
	ucomiss	.LC3(%rip), %xmm0
	jbe	.L64
	.loc 1 146 0
	cmpl	$5, -36(%rbp)
	jle	.L54
	.loc 1 147 0
	movss	-60(%rbp), %xmm1
	movss	.LC1(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -60(%rbp)
	.loc 1 148 0
	jmp	.L47
.L54:
	.loc 1 150 0
	cmpl	$4, -36(%rbp)
	jg	.L55
	.loc 1 151 0
	jmp	.L47
.L55:
	.loc 1 154 0
	movl	-52(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L56
	.loc 1 155 0
	jmp	.L47
.L56:
	.loc 1 157 0
	movss	-60(%rbp), %xmm1
	movss	.LC1(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -60(%rbp)
	jmp	.L57
.L64:
	.loc 1 161 0
	movss	-60(%rbp), %xmm1
	movss	.LC2(%rip), %xmm0
	mulss	%xmm0, %xmm1
	cvtsi2ss	-36(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -60(%rbp)
	.loc 1 162 0
	movl	-56(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -56(%rbp)
.L57:
	.loc 1 164 0
	movl	-36(%rbp), %eax
	movl	%eax, -52(%rbp)
	.loc 1 165 0
	addl	$1, -68(%rbp)
.L49:
.LBE6:
	.loc 1 140 0 discriminator 1
	movq	-24(%rbp), %rdx
	movl	-68(%rbp), %eax
	cltq
	movzbl	(%rdx,%rax), %eax
	cmpb	$10, %al
	je	.L47
	.loc 1 140 0 is_stmt 0 discriminator 2
	movl	-68(%rbp), %eax
	cmpl	-48(%rbp), %eax
	jl	.L58
.L47:
.LBE5:
	.loc 1 169 0 is_stmt 1
	cvtsi2ss	-56(%rbp), %xmm0
	movss	-60(%rbp), %xmm1
	divss	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movss	%xmm0, -60(%rbp)
	.loc 1 170 0
	movss	-64(%rbp), %xmm0
	addss	-60(%rbp), %xmm0
	movss	%xmm0, -64(%rbp)
	.loc 1 171 0
	cmpl	$-1, -72(%rbp)
	jne	.L59
	.loc 1 172 0
	movss	-64(%rbp), %xmm1
	movss	.LC4(%rip), %xmm0
	xorps	%xmm1, %xmm0
	movq	-88(%rbp), %rax
	movss	%xmm0, (%rax)
	jmp	.L60
.L59:
	.loc 1 174 0
	movq	-88(%rbp), %rdx
	movl	-64(%rbp), %eax
	movl	%eax, (%rdx)
.L60:
	.loc 1 175 0
	movl	$0, %eax
.L45:
	movq	%r10, %rsp
	.loc 1 176 0
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	readFlt, .-readFlt
	.globl	printFlt
	.type	printFlt, @function
printFlt:
.LFB4:
	.loc 1 178 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$10080, %rsp
	movss	%xmm0, -10068(%rbp)
	.loc 1 178 0
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	.loc 1 180 0
	movb	$48, -10059(%rbp)
	.loc 1 181 0
	movl	$0, -10056(%rbp)
	.loc 1 182 0
	movss	-10068(%rbp), %xmm0
	cvttss2si	%xmm0, %eax
	movl	%eax, -10044(%rbp)
	.loc 1 183 0
	cvtsi2ss	-10044(%rbp), %xmm0
	movss	-10068(%rbp), %xmm1
	subss	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movss	%xmm0, -10040(%rbp)
	.loc 1 184 0
	xorps	%xmm0, %xmm0
	ucomiss	-10040(%rbp), %xmm0
	jbe	.L66
	.loc 1 184 0 is_stmt 0 discriminator 1
	movss	-10040(%rbp), %xmm1
	movss	.LC4(%rip), %xmm0
	xorps	%xmm1, %xmm0
	movss	%xmm0, -10040(%rbp)
.L66:
	.loc 1 185 0 is_stmt 1
	cmpl	$0, -10044(%rbp)
	jne	.L68
	.loc 1 186 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	cltq
	movzbl	-10059(%rbp), %edx
	movb	%dl, -10016(%rbp,%rax)
	jmp	.L69
.L68:
	.loc 1 188 0
	cmpl	$0, -10044(%rbp)
	jns	.L70
	.loc 1 189 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	cltq
	movb	$45, -10016(%rbp,%rax)
	.loc 1 190 0
	negl	-10044(%rbp)
	.loc 1 192 0
	jmp	.L71
.L70:
	jmp	.L71
.L72:
.LBB7:
	.loc 1 194 0
	movl	-10044(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -10028(%rbp)
	.loc 1 195 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	movl	-10028(%rbp), %edx
	movl	%edx, %ecx
	movzbl	-10059(%rbp), %edx
	addl	%ecx, %edx
	cltq
	movb	%dl, -10016(%rbp,%rax)
	.loc 1 196 0
	movl	-10044(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -10044(%rbp)
.L71:
.LBE7:
	.loc 1 192 0 discriminator 1
	cmpl	$0, -10044(%rbp)
	jg	.L72
	.loc 1 198 0
	movzbl	-10016(%rbp), %eax
	cmpb	$45, %al
	jne	.L73
	.loc 1 199 0
	movl	$1, -10052(%rbp)
	jmp	.L74
.L73:
	.loc 1 201 0
	movl	$0, -10052(%rbp)
.L74:
	.loc 1 202 0
	movl	-10056(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -10048(%rbp)
	.loc 1 203 0
	jmp	.L75
.L76:
.LBB8:
	.loc 1 205 0
	movl	-10052(%rbp), %eax
	cltq
	movzbl	-10016(%rbp,%rax), %eax
	movb	%al, -10058(%rbp)
	.loc 1 206 0
	movl	-10052(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10052(%rbp)
	movl	-10048(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-10016(%rbp,%rdx), %edx
	cltq
	movb	%dl, -10016(%rbp,%rax)
	.loc 1 207 0
	movl	-10048(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -10048(%rbp)
	cltq
	movzbl	-10058(%rbp), %edx
	movb	%dl, -10016(%rbp,%rax)
.L75:
.LBE8:
	.loc 1 203 0 discriminator 1
	movl	-10052(%rbp), %eax
	cmpl	-10048(%rbp), %eax
	jl	.L76
.L69:
	.loc 1 210 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	cltq
	movb	$46, -10016(%rbp,%rax)
	.loc 1 211 0
	xorps	%xmm0, %xmm0
	ucomiss	-10040(%rbp), %xmm0
	jp	.L77
	xorps	%xmm0, %xmm0
	ucomiss	-10040(%rbp), %xmm0
	jne	.L77
	.loc 1 212 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	cltq
	movb	$48, -10016(%rbp,%rax)
	jmp	.L79
.L77:
.LBB9:
	.loc 1 214 0
	movl	-10056(%rbp), %eax
	movl	%eax, -10052(%rbp)
	.loc 1 215 0
	movss	-10040(%rbp), %xmm1
	movss	.LC3(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -10040(%rbp)
	.loc 1 216 0
	movss	-10040(%rbp), %xmm0
	cvttss2si	%xmm0, %eax
	movl	%eax, -10036(%rbp)
	.loc 1 217 0
	movl	$0, -10032(%rbp)
	.loc 1 218 0
	jmp	.L80
.L82:
.LBB10:
	.loc 1 220 0
	movl	-10036(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -10024(%rbp)
	.loc 1 221 0
	cmpl	$0, -10024(%rbp)
	jne	.L81
	.loc 1 221 0 is_stmt 0 discriminator 1
	cmpl	$0, -10032(%rbp)
	jne	.L81
	.loc 1 223 0 is_stmt 1
	movl	-10036(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -10036(%rbp)
	.loc 1 224 0
	jmp	.L80
.L81:
	.loc 1 227 0
	movl	$1, -10032(%rbp)
	.loc 1 228 0
	movl	-10056(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10056(%rbp)
	movl	-10024(%rbp), %edx
	movl	%edx, %ecx
	movzbl	-10059(%rbp), %edx
	addl	%ecx, %edx
	cltq
	movb	%dl, -10016(%rbp,%rax)
	.loc 1 229 0
	movl	-10036(%rbp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -10036(%rbp)
.L80:
.LBE10:
	.loc 1 218 0 discriminator 1
	cmpl	$0, -10036(%rbp)
	jg	.L82
	.loc 1 231 0
	movl	-10056(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -10048(%rbp)
	.loc 1 232 0
	jmp	.L83
.L84:
.LBB11:
	.loc 1 234 0
	movl	-10052(%rbp), %eax
	cltq
	movzbl	-10016(%rbp,%rax), %eax
	movb	%al, -10057(%rbp)
	.loc 1 235 0
	movl	-10052(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -10052(%rbp)
	movl	-10048(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-10016(%rbp,%rdx), %edx
	cltq
	movb	%dl, -10016(%rbp,%rax)
	.loc 1 236 0
	movl	-10048(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -10048(%rbp)
	cltq
	movzbl	-10057(%rbp), %edx
	movb	%dl, -10016(%rbp,%rax)
.L83:
.LBE11:
	.loc 1 232 0 discriminator 1
	movl	-10052(%rbp), %eax
	cmpl	-10048(%rbp), %eax
	jl	.L84
.L79:
.LBE9:
	.loc 1 239 0
	movl	-10056(%rbp), %eax
	cltq
	movb	$10, -10016(%rbp,%rax)
	.loc 1 240 0
	movl	-10056(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -10020(%rbp)
	.loc 1 241 0
	leaq	-10016(%rbp), %rax
	movl	-10020(%rbp), %edx
	movq	%rax, %rsi
#APP
# 241 "ass2_15CS10061.c" 1
	movl $1, %eax 
	movl $1, %edi 
	syscall 
	
# 0 "" 2
	.loc 1 248 0
#NO_APP
	movl	-10020(%rbp), %eax
	.loc 1 249 0
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L86
	call	__stack_chk_fail
.L86:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	printFlt, .-printFlt
	.section	.rodata
	.align 4
.LC0:
	.long	0
	.align 4
.LC1:
	.long	1065353216
	.align 4
.LC2:
	.long	1092616192
	.align 4
.LC3:
	.long	1232348160
	.align 16
.LC4:
	.long	2147483648
	.long	0
	.long	0
	.long	0
	.text
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x4fc
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF27
	.byte	0x1
	.long	.LASF28
	.long	.LASF29
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x4
	.byte	0x8
	.long	0x72
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF8
	.uleb128 0x5
	.long	0x72
	.long	0x89
	.uleb128 0x6
	.long	0x65
	.byte	0
	.byte	0
	.uleb128 0x5
	.long	0x72
	.long	0x99
	.uleb128 0x6
	.long	0x65
	.byte	0x13
	.byte	0
	.uleb128 0x7
	.long	.LASF12
	.byte	0x1
	.byte	0x5
	.long	0x57
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.long	0xfb
	.uleb128 0x8
	.long	.LASF14
	.byte	0x1
	.byte	0x5
	.long	0x6c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10056
	.uleb128 0x9
	.long	.LASF9
	.byte	0x1
	.byte	0x7
	.long	0xfb
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10032
	.uleb128 0x9
	.long	.LASF10
	.byte	0x1
	.byte	0x8
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10040
	.uleb128 0x9
	.long	.LASF11
	.byte	0x1
	.byte	0x8
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10036
	.byte	0
	.uleb128 0x5
	.long	0x72
	.long	0x10c
	.uleb128 0xa
	.long	0x65
	.value	0x270f
	.byte	0
	.uleb128 0x7
	.long	.LASF13
	.byte	0x1
	.byte	0x19
	.long	0x57
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.long	0x1e0
	.uleb128 0xb
	.string	"n"
	.byte	0x1
	.byte	0x19
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10084
	.uleb128 0x9
	.long	.LASF9
	.byte	0x1
	.byte	0x1b
	.long	0xfb
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10048
	.uleb128 0x9
	.long	.LASF15
	.byte	0x1
	.byte	0x1c
	.long	0x72
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10070
	.uleb128 0x9
	.long	.LASF10
	.byte	0x1
	.byte	0x1d
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10068
	.uleb128 0x9
	.long	.LASF11
	.byte	0x1
	.byte	0x1d
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10052
	.uleb128 0xc
	.string	"j"
	.byte	0x1
	.byte	0x1d
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10064
	.uleb128 0xc
	.string	"k"
	.byte	0x1
	.byte	0x1d
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10060
	.uleb128 0xd
	.quad	.LBB2
	.quad	.LBE2-.LBB2
	.long	0x1bd
	.uleb128 0xc
	.string	"dig"
	.byte	0x1
	.byte	0x27
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10056
	.byte	0
	.uleb128 0xe
	.quad	.LBB3
	.quad	.LBE3-.LBB3
	.uleb128 0x9
	.long	.LASF16
	.byte	0x1
	.byte	0x32
	.long	0x72
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10069
	.byte	0
	.byte	0
	.uleb128 0x7
	.long	.LASF17
	.byte	0x1
	.byte	0x42
	.long	0x57
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.long	0x256
	.uleb128 0xb
	.string	"ep"
	.byte	0x1
	.byte	0x42
	.long	0x256
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x9
	.long	.LASF9
	.byte	0x1
	.byte	0x44
	.long	0x79
	.uleb128 0x3
	.byte	0x91
	.sleb128 -77
	.uleb128 0xc
	.string	"n"
	.byte	0x1
	.byte	0x45
	.long	0x89
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xc
	.string	"num"
	.byte	0x1
	.byte	0x46
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0xc
	.string	"len"
	.byte	0x1
	.byte	0x46
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xc
	.string	"i"
	.byte	0x1
	.byte	0x46
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.byte	0
	.uleb128 0x4
	.byte	0x8
	.long	0x57
	.uleb128 0xf
	.long	.LASF18
	.byte	0x1
	.byte	0x68
	.long	0x57
	.quad	.LFB3
	.quad	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.long	0x373
	.uleb128 0xb
	.string	"f"
	.byte	0x1
	.byte	0x68
	.long	0x373
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x9
	.long	.LASF10
	.byte	0x1
	.byte	0x6a
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x9
	.long	.LASF9
	.byte	0x1
	.byte	0x6b
	.long	0x380
	.uleb128 0x3
	.byte	0x91
	.sleb128 -40
	.byte	0x6
	.uleb128 0x9
	.long	.LASF15
	.byte	0x1
	.byte	0x6b
	.long	0x72
	.uleb128 0x3
	.byte	0x91
	.sleb128 -89
	.uleb128 0x9
	.long	.LASF19
	.byte	0x1
	.byte	0x6c
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xc
	.string	"i"
	.byte	0x1
	.byte	0x6c
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x9
	.long	.LASF20
	.byte	0x1
	.byte	0x6d
	.long	0x379
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x9
	.long	.LASF16
	.byte	0x1
	.byte	0x6d
	.long	0x379
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x9
	.long	.LASF21
	.byte	0x1
	.byte	0x6e
	.long	0x379
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0xc
	.string	"prd"
	.byte	0x1
	.byte	0x6f
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xd
	.quad	.LBB4
	.quad	.LBE4-.LBB4
	.long	0x331
	.uleb128 0x9
	.long	.LASF22
	.byte	0x1
	.byte	0x80
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0xe
	.quad	.LBB5
	.quad	.LBE5-.LBB5
	.uleb128 0x9
	.long	.LASF23
	.byte	0x1
	.byte	0x8b
	.long	0x57
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0xe
	.quad	.LBB6
	.quad	.LBE6-.LBB6
	.uleb128 0x9
	.long	.LASF22
	.byte	0x1
	.byte	0x8e
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.byte	0x8
	.long	0x379
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.long	.LASF24
	.uleb128 0x5
	.long	0x72
	.long	0x393
	.uleb128 0x10
	.long	0x65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -48
	.byte	0x6
	.byte	0
	.uleb128 0x11
	.long	.LASF30
	.byte	0x1
	.byte	0xb1
	.long	0x57
	.quad	.LFB4
	.quad	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.string	"f"
	.byte	0x1
	.byte	0xb1
	.long	0x379
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10084
	.uleb128 0x9
	.long	.LASF9
	.byte	0x1
	.byte	0xb3
	.long	0xfb
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10032
	.uleb128 0x9
	.long	.LASF15
	.byte	0x1
	.byte	0xb4
	.long	0x72
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10075
	.uleb128 0x9
	.long	.LASF10
	.byte	0x1
	.byte	0xb5
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10072
	.uleb128 0x9
	.long	.LASF11
	.byte	0x1
	.byte	0xb5
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10036
	.uleb128 0xc
	.string	"j"
	.byte	0x1
	.byte	0xb5
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10068
	.uleb128 0xc
	.string	"k"
	.byte	0x1
	.byte	0xb5
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10064
	.uleb128 0xc
	.string	"n"
	.byte	0x1
	.byte	0xb6
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10060
	.uleb128 0x9
	.long	.LASF21
	.byte	0x1
	.byte	0xb7
	.long	0x379
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10056
	.uleb128 0xd
	.quad	.LBB7
	.quad	.LBE7-.LBB7
	.long	0x45e
	.uleb128 0xc
	.string	"dig"
	.byte	0x1
	.byte	0xc2
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10044
	.byte	0
	.uleb128 0xd
	.quad	.LBB8
	.quad	.LBE8-.LBB8
	.long	0x484
	.uleb128 0x9
	.long	.LASF16
	.byte	0x1
	.byte	0xcd
	.long	0x72
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10074
	.byte	0
	.uleb128 0xe
	.quad	.LBB9
	.quad	.LBE9-.LBB9
	.uleb128 0x9
	.long	.LASF25
	.byte	0x1
	.byte	0xd8
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10052
	.uleb128 0x9
	.long	.LASF26
	.byte	0x1
	.byte	0xd9
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10048
	.uleb128 0xd
	.quad	.LBB10
	.quad	.LBE10-.LBB10
	.long	0x4db
	.uleb128 0xc
	.string	"dig"
	.byte	0x1
	.byte	0xdc
	.long	0x57
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10040
	.byte	0
	.uleb128 0xe
	.quad	.LBB11
	.quad	.LBE11-.LBB11
	.uleb128 0x9
	.long	.LASF16
	.byte	0x1
	.byte	0xea
	.long	0x72
	.uleb128 0x4
	.byte	0x91
	.sleb128 -10073
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF22:
	.string	"diff"
.LASF16:
	.string	"temp"
.LASF5:
	.string	"short int"
.LASF14:
	.string	"input"
.LASF7:
	.string	"sizetype"
.LASF30:
	.string	"printFlt"
.LASF17:
	.string	"readInt"
.LASF9:
	.string	"buff"
.LASF20:
	.string	"value"
.LASF29:
	.string	"/home/subham/Desktop/Compilers/Assignment5"
.LASF18:
	.string	"readFlt"
.LASF13:
	.string	"printInt"
.LASF24:
	.string	"float"
.LASF6:
	.string	"long int"
.LASF1:
	.string	"unsigned char"
.LASF4:
	.string	"signed char"
.LASF3:
	.string	"unsigned int"
.LASF19:
	.string	"sign"
.LASF28:
	.string	"ass2_15CS10061.c"
.LASF2:
	.string	"short unsigned int"
.LASF8:
	.string	"char"
.LASF27:
	.string	"GNU C 4.8.4 -mtune=generic -march=x86-64 -g -fstack-protector"
.LASF21:
	.string	"decimal"
.LASF25:
	.string	"deci"
.LASF12:
	.string	"printStr"
.LASF0:
	.string	"long unsigned int"
.LASF11:
	.string	"bytes"
.LASF10:
	.string	"size"
.LASF26:
	.string	"flag"
.LASF23:
	.string	"prev"
.LASF15:
	.string	"zero"
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
