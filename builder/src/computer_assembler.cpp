#include "builder/computer_assembler.h"

Computer ComputerAssembler::assembleComputer(ComputerBuilder& builder) {
    builder.buildCPU();
    builder.buildRAM();
    builder.buildStorage();
    builder.buildGraphicsCard();
    return builder.getResult();
}
