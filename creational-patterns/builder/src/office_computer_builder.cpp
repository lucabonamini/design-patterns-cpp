#include "builder/office_computer_builder.h"


void OfficeComputerBuilder::buildCPU() {
    computer_.setCPU("Intel Core i3");
}

void OfficeComputerBuilder::buildRAM() {
    computer_.setRAM("8GB DDR4");
}

void OfficeComputerBuilder::buildStorage() {
    computer_.setStorage("256Gb SSD");
}

void OfficeComputerBuilder::buildGraphicsCard() {
    computer_.setGraphicsCard("No GPU");
}

Computer OfficeComputerBuilder::getResult() {
    return computer_;
}
