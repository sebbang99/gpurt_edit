; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=i686--        | FileCheck %s
; RUN: llc < %s -mtriple=x86_64-- -O0 | FileCheck %s -check-prefixes=CHECK-X64,CHECK-X64-O0
; RUN: llc < %s -mtriple=x86_64-- -O2 | FileCheck %s -check-prefixes=CHECK-X64,CHECK-X64-O2

; CHECK-LABEL: shift1
define void @shift1(i256 %x, i256 %a, ptr nocapture %r) nounwind readnone {
; CHECK-LABEL: shift1:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    pushl %ebp
; CHECK-NEXT:    pushl %ebx
; CHECK-NEXT:    pushl %edi
; CHECK-NEXT:    pushl %esi
; CHECK-NEXT:    subl $92, %esp
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %ecx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %edx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %edi
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %ebx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %ebp
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %esi
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %esi
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %esi
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %ebp, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %ebx, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %edi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %edx, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %eax, {{[0-9]+}}(%esp)
; CHECK-NEXT:    sarl $31, %esi
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esi, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %ecx, %eax
; CHECK-NEXT:    andb $7, %al
; CHECK-NEXT:    shrb $3, %cl
; CHECK-NEXT:    movzbl %cl, %ebp
; CHECK-NEXT:    movl 32(%esp,%ebp), %esi
; CHECK-NEXT:    movl %esi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl %eax, %ecx
; CHECK-NEXT:    shrl %cl, %esi
; CHECK-NEXT:    movl %eax, %edx
; CHECK-NEXT:    notb %dl
; CHECK-NEXT:    movl 36(%esp,%ebp), %ecx
; CHECK-NEXT:    movl %ecx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    leal (%ecx,%ecx), %edi
; CHECK-NEXT:    movl %edx, %ecx
; CHECK-NEXT:    shll %cl, %edi
; CHECK-NEXT:    orl %esi, %edi
; CHECK-NEXT:    movl %edi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl 40(%esp,%ebp), %esi
; CHECK-NEXT:    movl %esi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl %eax, %ecx
; CHECK-NEXT:    shrl %cl, %esi
; CHECK-NEXT:    movl 44(%esp,%ebp), %ecx
; CHECK-NEXT:    movl %ecx, (%esp) # 4-byte Spill
; CHECK-NEXT:    leal (%ecx,%ecx), %edi
; CHECK-NEXT:    movl %edx, %ecx
; CHECK-NEXT:    shll %cl, %edi
; CHECK-NEXT:    orl %esi, %edi
; CHECK-NEXT:    movl %edi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl 48(%esp,%ebp), %ebx
; CHECK-NEXT:    movl %ebx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl %eax, %ecx
; CHECK-NEXT:    shrl %cl, %ebx
; CHECK-NEXT:    movl 52(%esp,%ebp), %edi
; CHECK-NEXT:    leal (%edi,%edi), %esi
; CHECK-NEXT:    movl %edx, %ecx
; CHECK-NEXT:    shll %cl, %esi
; CHECK-NEXT:    orl %ebx, %esi
; CHECK-NEXT:    movl %eax, %ecx
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %edx # 4-byte Reload
; CHECK-NEXT:    shrdl %cl, %edx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Folded Spill
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %edx # 4-byte Reload
; CHECK-NEXT:    shrdl %cl, %edx, (%esp) # 4-byte Folded Spill
; CHECK-NEXT:    movl 28(%esp,%ebp), %edx
; CHECK-NEXT:    movl 56(%esp,%ebp), %ebx
; CHECK-NEXT:    shrdl %cl, %ebx, %edi
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %ebp # 4-byte Reload
; CHECK-NEXT:    shrdl %cl, %ebp, %edx
; CHECK-NEXT:    sarl %cl, %ebx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl %ebx, 28(%eax)
; CHECK-NEXT:    movl %edi, 24(%eax)
; CHECK-NEXT:    movl (%esp), %ecx # 4-byte Reload
; CHECK-NEXT:    movl %ecx, 16(%eax)
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %ecx # 4-byte Reload
; CHECK-NEXT:    movl %ecx, 8(%eax)
; CHECK-NEXT:    movl %edx, (%eax)
; CHECK-NEXT:    movl %esi, 20(%eax)
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %ecx # 4-byte Reload
; CHECK-NEXT:    movl %ecx, 12(%eax)
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %ecx # 4-byte Reload
; CHECK-NEXT:    movl %ecx, 4(%eax)
; CHECK-NEXT:    addl $92, %esp
; CHECK-NEXT:    popl %esi
; CHECK-NEXT:    popl %edi
; CHECK-NEXT:    popl %ebx
; CHECK-NEXT:    popl %ebp
; CHECK-NEXT:    retl
;
; CHECK-X64-O0-LABEL: shift1:
; CHECK-X64-O0:       # %bb.0: # %entry
; CHECK-X64-O0-NEXT:    movq {{[0-9]+}}(%rsp), %rax
; CHECK-X64-O0-NEXT:    movq {{[0-9]+}}(%rsp), %rax
; CHECK-X64-O0-NEXT:    movq {{[0-9]+}}(%rsp), %rax
; CHECK-X64-O0-NEXT:    movq %rdi, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rsi, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rdx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    sarq $63, %rcx
; CHECK-X64-O0-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movb %r8b, %dl
; CHECK-X64-O0-NEXT:    movb %dl, %cl
; CHECK-X64-O0-NEXT:    andb $7, %cl
; CHECK-X64-O0-NEXT:    movb %cl, {{[-0-9]+}}(%r{{[sb]}}p) # 1-byte Spill
; CHECK-X64-O0-NEXT:    shrb $3, %dl
; CHECK-X64-O0-NEXT:    movzbl %dl, %edx
; CHECK-X64-O0-NEXT:    movl %edx, %edi
; CHECK-X64-O0-NEXT:    movq -64(%rsp,%rdi), %rdx
; CHECK-X64-O0-NEXT:    movq -56(%rsp,%rdi), %r8
; CHECK-X64-O0-NEXT:    movq %r8, %r9
; CHECK-X64-O0-NEXT:    shrq %cl, %r9
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    notb %cl
; CHECK-X64-O0-NEXT:    movq -48(%rsp,%rdi), %rsi
; CHECK-X64-O0-NEXT:    movq %rsi, %r10
; CHECK-X64-O0-NEXT:    addq %r10, %r10
; CHECK-X64-O0-NEXT:    shlq %cl, %r10
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    orq %r10, %r9
; CHECK-X64-O0-NEXT:    movq %r9, {{[-0-9]+}}(%r{{[sb]}}p) # 8-byte Spill
; CHECK-X64-O0-NEXT:    movq -40(%rsp,%rdi), %rdi
; CHECK-X64-O0-NEXT:    shrdq %cl, %rdi, %rsi
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    shrdq %cl, %r8, %rdx
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    sarq %cl, %rdi
; CHECK-X64-O0-NEXT:    movq {{[-0-9]+}}(%r{{[sb]}}p), %rcx # 8-byte Reload
; CHECK-X64-O0-NEXT:    movq %rdi, 24(%rax)
; CHECK-X64-O0-NEXT:    movq %rsi, 16(%rax)
; CHECK-X64-O0-NEXT:    movq %rdx, (%rax)
; CHECK-X64-O0-NEXT:    movq %rcx, 8(%rax)
; CHECK-X64-O0-NEXT:    retq
;
; CHECK-X64-O2-LABEL: shift1:
; CHECK-X64-O2:       # %bb.0: # %entry
; CHECK-X64-O2-NEXT:    movq {{[0-9]+}}(%rsp), %r9
; CHECK-X64-O2-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rdx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rsi, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rdi, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    sarq $63, %rcx
; CHECK-X64-O2-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq %rcx, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movl %r8d, %eax
; CHECK-X64-O2-NEXT:    andb $7, %al
; CHECK-X64-O2-NEXT:    shrb $3, %r8b
; CHECK-X64-O2-NEXT:    movzbl %r8b, %edx
; CHECK-X64-O2-NEXT:    movq -64(%rsp,%rdx), %rsi
; CHECK-X64-O2-NEXT:    movq -56(%rsp,%rdx), %rdi
; CHECK-X64-O2-NEXT:    movq %rdi, %r8
; CHECK-X64-O2-NEXT:    movl %eax, %ecx
; CHECK-X64-O2-NEXT:    shrq %cl, %r8
; CHECK-X64-O2-NEXT:    notb %cl
; CHECK-X64-O2-NEXT:    movq -48(%rsp,%rdx), %r10
; CHECK-X64-O2-NEXT:    leaq (%r10,%r10), %r11
; CHECK-X64-O2-NEXT:    shlq %cl, %r11
; CHECK-X64-O2-NEXT:    orq %r8, %r11
; CHECK-X64-O2-NEXT:    movq -40(%rsp,%rdx), %rdx
; CHECK-X64-O2-NEXT:    movl %eax, %ecx
; CHECK-X64-O2-NEXT:    shrdq %cl, %rdx, %r10
; CHECK-X64-O2-NEXT:    shrdq %cl, %rdi, %rsi
; CHECK-X64-O2-NEXT:    sarq %cl, %rdx
; CHECK-X64-O2-NEXT:    movq %rdx, 24(%r9)
; CHECK-X64-O2-NEXT:    movq %r10, 16(%r9)
; CHECK-X64-O2-NEXT:    movq %rsi, (%r9)
; CHECK-X64-O2-NEXT:    movq %r11, 8(%r9)
; CHECK-X64-O2-NEXT:    retq
entry:
	%0 = ashr i256 %x, %a
	store i256 %0, ptr %r
        ret void
}

define i256 @shift2(i256 %c) nounwind
; CHECK-LABEL: shift2:
; CHECK:       # %bb.0:
; CHECK-NEXT:    pushl %ebp
; CHECK-NEXT:    pushl %ebx
; CHECK-NEXT:    pushl %edi
; CHECK-NEXT:    pushl %esi
; CHECK-NEXT:    subl $92, %esp
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $1, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl $0, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movb %al, %ch
; CHECK-NEXT:    andb $7, %ch
; CHECK-NEXT:    shrb $3, %al
; CHECK-NEXT:    negb %al
; CHECK-NEXT:    movsbl %al, %eax
; CHECK-NEXT:    movl 68(%esp,%eax), %edx
; CHECK-NEXT:    movl %edx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movb %ch, %cl
; CHECK-NEXT:    shll %cl, %edx
; CHECK-NEXT:    notb %cl
; CHECK-NEXT:    movb %cl, {{[-0-9]+}}(%e{{[sb]}}p) # 1-byte Spill
; CHECK-NEXT:    movl 64(%esp,%eax), %ebp
; CHECK-NEXT:    movl %ebp, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    shrl %ebp
; CHECK-NEXT:    shrl %cl, %ebp
; CHECK-NEXT:    orl %edx, %ebp
; CHECK-NEXT:    movl %ebp, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movl 76(%esp,%eax), %edx
; CHECK-NEXT:    movl %edx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movb %ch, %cl
; CHECK-NEXT:    shll %cl, %edx
; CHECK-NEXT:    movl 72(%esp,%eax), %ebx
; CHECK-NEXT:    movl %ebx, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    shrl %ebx
; CHECK-NEXT:    movb {{[-0-9]+}}(%e{{[sb]}}p), %cl # 1-byte Reload
; CHECK-NEXT:    shrl %cl, %ebx
; CHECK-NEXT:    orl %edx, %ebx
; CHECK-NEXT:    movl 84(%esp,%eax), %esi
; CHECK-NEXT:    movl %esi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Spill
; CHECK-NEXT:    movb %ch, %cl
; CHECK-NEXT:    shll %cl, %esi
; CHECK-NEXT:    movl 80(%esp,%eax), %edi
; CHECK-NEXT:    movl %edi, %edx
; CHECK-NEXT:    shrl %edx
; CHECK-NEXT:    movb {{[-0-9]+}}(%e{{[sb]}}p), %cl # 1-byte Reload
; CHECK-NEXT:    shrl %cl, %edx
; CHECK-NEXT:    orl %esi, %edx
; CHECK-NEXT:    movb %ch, %cl
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %esi # 4-byte Reload
; CHECK-NEXT:    shldl %cl, %esi, {{[-0-9]+}}(%e{{[sb]}}p) # 4-byte Folded Spill
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %esi # 4-byte Reload
; CHECK-NEXT:    shldl %cl, %esi, %edi
; CHECK-NEXT:    movl 60(%esp,%eax), %ebp
; CHECK-NEXT:    movl 88(%esp,%eax), %esi
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %eax # 4-byte Reload
; CHECK-NEXT:    shldl %cl, %eax, %esi
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl %esi, 28(%eax)
; CHECK-NEXT:    movl %edi, 20(%eax)
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %esi # 4-byte Reload
; CHECK-NEXT:    movl %esi, 12(%eax)
; CHECK-NEXT:    movl %ebp, %esi
; CHECK-NEXT:    shll %cl, %esi
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %edi # 4-byte Reload
; CHECK-NEXT:    shldl %cl, %ebp, %edi
; CHECK-NEXT:    movl %edi, 4(%eax)
; CHECK-NEXT:    movl %esi, (%eax)
; CHECK-NEXT:    movl %edx, 24(%eax)
; CHECK-NEXT:    movl %ebx, 16(%eax)
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %ecx # 4-byte Reload
; CHECK-NEXT:    movl %ecx, 8(%eax)
; CHECK-NEXT:    addl $92, %esp
; CHECK-NEXT:    popl %esi
; CHECK-NEXT:    popl %edi
; CHECK-NEXT:    popl %ebx
; CHECK-NEXT:    popl %ebp
; CHECK-NEXT:    retl $4
;
; CHECK-X64-O0-LABEL: shift2:
; CHECK-X64-O0:       # %bb.0:
; CHECK-X64-O0-NEXT:    movq %rdi, %rax
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $1, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O0-NEXT:    movb %sil, %dl
; CHECK-X64-O0-NEXT:    movb %dl, %cl
; CHECK-X64-O0-NEXT:    andb $7, %cl
; CHECK-X64-O0-NEXT:    movb %cl, {{[-0-9]+}}(%r{{[sb]}}p) # 1-byte Spill
; CHECK-X64-O0-NEXT:    shrb $3, %dl
; CHECK-X64-O0-NEXT:    negb %dl
; CHECK-X64-O0-NEXT:    movsbq %dl, %rdx
; CHECK-X64-O0-NEXT:    movq -16(%rsp,%rdx), %rsi
; CHECK-X64-O0-NEXT:    movq %rsi, %r10
; CHECK-X64-O0-NEXT:    shlq %cl, %r10
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    notb %cl
; CHECK-X64-O0-NEXT:    movq -32(%rsp,%rdx), %r9
; CHECK-X64-O0-NEXT:    movq -24(%rsp,%rdx), %r8
; CHECK-X64-O0-NEXT:    movq %r8, %r11
; CHECK-X64-O0-NEXT:    shrq %r11
; CHECK-X64-O0-NEXT:    shrq %cl, %r11
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    orq %r11, %r10
; CHECK-X64-O0-NEXT:    movq %r10, {{[-0-9]+}}(%r{{[sb]}}p) # 8-byte Spill
; CHECK-X64-O0-NEXT:    movq -8(%rsp,%rdx), %rdx
; CHECK-X64-O0-NEXT:    shldq %cl, %rsi, %rdx
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    movq %r9, %rsi
; CHECK-X64-O0-NEXT:    shlq %cl, %rsi
; CHECK-X64-O0-NEXT:    movb {{[-0-9]+}}(%r{{[sb]}}p), %cl # 1-byte Reload
; CHECK-X64-O0-NEXT:    shldq %cl, %r9, %r8
; CHECK-X64-O0-NEXT:    movq {{[-0-9]+}}(%r{{[sb]}}p), %rcx # 8-byte Reload
; CHECK-X64-O0-NEXT:    movq %r8, 8(%rdi)
; CHECK-X64-O0-NEXT:    movq %rsi, (%rdi)
; CHECK-X64-O0-NEXT:    movq %rdx, 24(%rdi)
; CHECK-X64-O0-NEXT:    movq %rcx, 16(%rdi)
; CHECK-X64-O0-NEXT:    retq
;
; CHECK-X64-O2-LABEL: shift2:
; CHECK-X64-O2:       # %bb.0:
; CHECK-X64-O2-NEXT:    movq %rdi, %rax
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $1, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movq $0, -{{[0-9]+}}(%rsp)
; CHECK-X64-O2-NEXT:    movl %esi, %edx
; CHECK-X64-O2-NEXT:    andb $7, %dl
; CHECK-X64-O2-NEXT:    shrb $3, %sil
; CHECK-X64-O2-NEXT:    negb %sil
; CHECK-X64-O2-NEXT:    movsbq %sil, %rsi
; CHECK-X64-O2-NEXT:    movq -16(%rsp,%rsi), %rdi
; CHECK-X64-O2-NEXT:    movq %rdi, %r8
; CHECK-X64-O2-NEXT:    movl %edx, %ecx
; CHECK-X64-O2-NEXT:    shlq %cl, %r8
; CHECK-X64-O2-NEXT:    notb %cl
; CHECK-X64-O2-NEXT:    movq -32(%rsp,%rsi), %r9
; CHECK-X64-O2-NEXT:    movq -24(%rsp,%rsi), %r10
; CHECK-X64-O2-NEXT:    movq %r10, %r11
; CHECK-X64-O2-NEXT:    shrq %r11
; CHECK-X64-O2-NEXT:    shrq %cl, %r11
; CHECK-X64-O2-NEXT:    orq %r8, %r11
; CHECK-X64-O2-NEXT:    movq -8(%rsp,%rsi), %rsi
; CHECK-X64-O2-NEXT:    movl %edx, %ecx
; CHECK-X64-O2-NEXT:    shldq %cl, %rdi, %rsi
; CHECK-X64-O2-NEXT:    movq %r9, %rdi
; CHECK-X64-O2-NEXT:    shlq %cl, %rdi
; CHECK-X64-O2-NEXT:    shldq %cl, %r9, %r10
; CHECK-X64-O2-NEXT:    movq %rsi, 24(%rax)
; CHECK-X64-O2-NEXT:    movq %r10, 8(%rax)
; CHECK-X64-O2-NEXT:    movq %rdi, (%rax)
; CHECK-X64-O2-NEXT:    movq %r11, 16(%rax)
; CHECK-X64-O2-NEXT:    retq
{
  %b = shl i256 1, %c  ; %c must not be a constant
  ; Special case when %c is 0:
  ret i256 %b
}
;; NOTE: These prefixes are unused and the list is autogenerated. Do not add tests below this line:
; CHECK-X64: {{.*}}