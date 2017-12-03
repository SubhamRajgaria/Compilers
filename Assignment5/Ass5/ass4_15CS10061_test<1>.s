	.text
	.globl	add
	.type	add, @function
add:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, -24(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	ret
	.size	add, .-add
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$2144, %esp
	movl	$5, %eax
	movl	%eax, -24(%ebp)
	movl	$10, %eax
	movl	%eax, -28(%ebp)
	movl	$5, %eax
	movl	%eax, -440(%ebp)
	movl	$10, %eax
	movl	%eax, -444(%ebp)
	movl	$1.000000, %eax
	movl	%eax, -452(%ebp)
	movl	$2.900000, %eax
	movl	%eax, -460(%ebp)
	movl	$3.500000, %eax
	movl	%eax, -468(%ebp)
	movl	$4.500000, %eax
	movl	%eax, -476(%ebp)
	movl	$5.200000, %eax
	movl	%eax, -484(%ebp)
	movl	$6.300000, %eax
	movl	%eax, -492(%ebp)
	movl	$7.400000, %eax
	movl	%eax, -500(%ebp)
	movl	$8.500000, %eax
	movl	%eax, -508(%ebp)
	movl	$9.200000, %eax
	movl	%eax, -516(%ebp)
	movl	$10.100000, %eax
	movl	%eax, -524(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 2088(%ebp)
	movl	$2, %eax
	movl	%eax, -936(%ebp)
	movl	$3, %eax
	movl	%eax, -940(%ebp)
	movl	$2.300000, %eax
	movl	%eax, -948(%ebp)
	movl	$4.400000, %eax
	movl	%eax, -956(%ebp)
	movl	$5.500000, %eax
	movl	%eax, -964(%ebp)
	movl	$1.300000, %eax
	movl	%eax, -972(%ebp)
	movl	$7.700000, %eax
	movl	%eax, -980(%ebp)
	movl	$8.700000, %eax
	movl	%eax, -988(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 2088(%ebp)
	movl	-20(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	add
	movl	%eax, -1048(%ebp)
	movl	-1048(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$5, %eax
	movl	%eax, -1052(%ebp)
	movl	$8, %eax
	movl	%eax, -1060(%ebp)
	movl	-1052(%ebp), %eax
	imull	-1060(%ebp), %eax
	movl	%eax, -1056(%ebp)
	movl	$5, %eax
	movl	%eax, -1064(%ebp)
	movl	$8, %eax
	movl	%eax, -1076(%ebp)
	movl	-1064(%ebp), %eax
	imull	-1076(%ebp), %eax
	movl	%eax, -1068(%ebp)
	movl	-1056(%ebp), %eax
	movl	-1068(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -1072(%ebp)
	movl	-1072(%ebp), %eax
	leal	-932(%ebp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -1084(%ebp)
	movl	$2, %eax
	movl	%eax, -1088(%ebp)
	movl	$8, %eax
	movl	%eax, -1096(%ebp)
	movl	-1088(%ebp), %eax
	imull	-1096(%ebp), %eax
	movl	%eax, -1092(%ebp)
	movl	$3, %eax
	movl	%eax, -1100(%ebp)
	movl	$8, %eax
	movl	%eax, -1112(%ebp)
	movl	-1100(%ebp), %eax
	imull	-1112(%ebp), %eax
	movl	%eax, -1104(%ebp)
	movl	-1092(%ebp), %eax
	movl	-1104(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -1108(%ebp)
	movl	-1108(%ebp), %eax
	leal	-436(%ebp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -1120(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -1128(%ebp)
	movl	-1120(%ebp), %eax
	movl	-1128(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -1136(%ebp)
	movl	-1072(%ebp), %eax
	leal	-1084(%ebp), %edx
	addl	%edx, %eax
	movl	-1136(%ebp), %edx
	movl	%edx, (%eax)
	movl	$5, %eax
	movl	%eax, -1140(%ebp)
	movl	$8, %eax
	movl	%eax, -1148(%ebp)
	movl	-1140(%ebp), %eax
	imull	-1148(%ebp), %eax
	movl	%eax, -1144(%ebp)
	movl	$5, %eax
	movl	%eax, -1152(%ebp)
	movl	$8, %eax
	movl	%eax, -1164(%ebp)
	movl	-1152(%ebp), %eax
	imull	-1164(%ebp), %eax
	movl	%eax, -1156(%ebp)
	movl	-1144(%ebp), %eax
	movl	-1156(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -1160(%ebp)
	movl	-1160(%ebp), %eax
	leal	-932(%ebp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -1172(%ebp)
	movl	-1172(%ebp), %eax
	movl	%eax, -1176(%ebp)
	movl	-1172(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	$5, %eax
	movl	%eax, -1180(%ebp)
	movl	$8, %eax
	movl	%eax, -1188(%ebp)
	movl	-1180(%ebp), %eax
	imull	-1188(%ebp), %eax
	movl	%eax, -1184(%ebp)
	movl	$5, %eax
	movl	%eax, -1192(%ebp)
	movl	$8, %eax
	movl	%eax, -1204(%ebp)
	movl	-1192(%ebp), %eax
	imull	-1204(%ebp), %eax
	movl	%eax, -1196(%ebp)
	movl	-1184(%ebp), %eax
	movl	-1196(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -1200(%ebp)
	movl	-1200(%ebp), %eax
	leal	-932(%ebp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -1212(%ebp)
	movl	$1, %eax
	movl	%eax, -1224(%ebp)
	movl	-1212(%ebp), %eax
	movl	-1224(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -1212(%ebp)
	movl	-1212(%ebp), %eax
	movl	%eax, -1220(%ebp)
	movl	$10, %eax
	movl	%eax, -1228(%ebp)
	movl	$5, %eax
	movl	%eax, -1232(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 2088(%ebp)
	movl	$1, %eax
	movl	%eax, -2052(%ebp)
	movl	$8, %eax
	movl	%eax, -2060(%ebp)
	movl	-2052(%ebp), %eax
	imull	-2060(%ebp), %eax
	movl	%eax, -2056(%ebp)
	movl	$1, %eax
	movl	%eax, -2064(%ebp)
	movl	$8, %eax
	movl	%eax, -2076(%ebp)
	movl	-2064(%ebp), %eax
	imull	-2076(%ebp), %eax
	movl	%eax, -2068(%ebp)
	movl	-2056(%ebp), %eax
	movl	-2068(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -2072(%ebp)
	movl	-2072(%ebp), %eax
	leal	-2048(%ebp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -2084(%ebp)
	movl	0(%ebp), %eax
	movl	%eax, 2088(%ebp)
	movl	$1, %eax
	movl	%eax, -2096(%ebp)
	movl	-2096(%ebp), %eax
	movl	%eax, -12(%ebp)
.L2:
	movl	-12(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jle	.L0
	jmp	.L1
	jmp	.L1
.L7:
	movl	-12(%ebp), %eax
	movl	%eax, -2100(%ebp)
	movl	$1, %eax
	movl	%eax, -2104(%ebp)
	movl	-12(%ebp), %eax
	movl	-2104(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	jmp	.L2
.L0:
	movl	$5, %eax
	movl	%eax, -2108(%ebp)
	movl	-4(%ebp), %eax
	cmpl	-2108(%ebp), %eax
	jge	.L3
	jmp	.L4
	jmp	.L4
.L3:
	movl	-4(%ebp), %eax
	movl	%eax, -2112(%ebp)
	movl	$1, %eax
	movl	%eax, -2116(%ebp)
	movl	-4(%ebp), %eax
	movl	-2116(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -4(%ebp)
	jmp	.L4
.L4:
	movl	-4(%ebp), %eax
	cmpl	-8(%ebp), %eax
	jle	.L0
	jmp	.L5
	jmp	.L5
.L5:
	movl	$5, %eax
	movl	%eax, -2120(%ebp)
	movl	-4(%ebp), %eax
	cmpl	-2120(%ebp), %eax
	jle	.L6
	jmp	.L7
	jmp	.L8
.L6:
	movl	-8(%ebp), %eax
	movl	%eax, -2124(%ebp)
	movl	$1, %eax
	movl	%eax, -2128(%ebp)
	movl	-8(%ebp), %eax
	movl	-2128(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -8(%ebp)
	jmp	.L5
.L8:
	jmp	.L7
.L1:
	movl	$1, %eax
	movl	%eax, -2136(%ebp)
	movl	-12(%ebp), %eax
	movl	-2136(%ebp), %edx
	subl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -2132(%ebp)
	movl	$1, %eax
	movl	%eax, -2144(%ebp)
	movl	-12(%ebp), %eax
	movl	-2144(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -2140(%ebp)
	movl	-4(%ebp), %eax
	leave
	ret
	.size	main, .-main
