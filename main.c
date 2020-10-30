#include <stdio.h>

#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main() {
    initVM();
    Chunk chunk;
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant);
    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;
}
