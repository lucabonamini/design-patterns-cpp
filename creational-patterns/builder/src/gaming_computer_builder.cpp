#include "builder/gaming_computer_builder.h"


void GamingComputerBuilder::buildCPU() {
    computer_.setCPU("Intel Core i9");
}

void GamingComputerBuilder::buildRAM() {
    computer_.setRAM("32GB DDR4");
}

void GamingComputerBuilder::buildStorage() {
    computer_.setStorage("1TB SSD");
}

void GamingComputerBuilder::buildGraphicsCard() {
    computer_.setGraphicsCard("NVIDIA RTX 3080");
}

Computer GamingComputerBuilder::getResult() {
    return computer_;
}
