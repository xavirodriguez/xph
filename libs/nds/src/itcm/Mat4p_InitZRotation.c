#include <nds/math.h>

THUMB asm void Mat4p_InitZRotation(Mat4p *m, q20 sin, q20 cos) {
    str r2, [r0, #0x0]
    str r2, [r0, #0x14]
    str r1, [r0, #0x4]
    neg r1, r1
    str r1, [r0, #0x10]
    mov r3, #0x1
    mov r1, #0x0
    lsl r3, r3, #0xc
    mov r2, #0x0
    add r0, #0x8
    stmia r0!, {r1-r2}
    add r0, #0x8
    stmia r0!, {r1-r2}
    stmia r0!, {r1-r3}
    stmia r0!, {r1-r2}
    stmia r0!, {r1-r3}
    bx lr
}
