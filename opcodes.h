OP_DEF(PUSH,  1, {0x50})
OP_DEF(POP,   1, {0x8F})
OP_DEF(ADD,   2, {0xB8})
OP_DEF(SUB,   2, {0x83})
OP_DEF(MUL,   2, {0x0F, 0xAF})  //TODO
OP_DEF(DIV,   2, {0x10})        //TODO
OP_DEF(CALL,  1, {0x10})
OP_DEF(CMP,   2, {0x10})
OP_DEF(MOV,   2, {0x89})
OP_DEF(CMOVL, 2, {0x10})
OP_DEF(CMOVG, 2, {0x10})
OP_DEF(JMP,   1, {0x10})
OP_DEF(JE,    1, {0x10})        //TODO
OP_DEF(RET,   0, {0x10})
OP_DEF(TEST,  2, {0x10})
