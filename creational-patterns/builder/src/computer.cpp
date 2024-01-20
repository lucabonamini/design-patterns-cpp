#include "builder/computer.h"

#include <iostream>


void Computer::setCPU(const std::string& cpu) {
    cpu_ = cpu;
}

void Computer::setRAM(const std::string& ram) {
    ram_ = ram;
}

void Computer::setStorage(const std::string& storage) {
    storage_ = storage;
}

void Computer::setGraphicsCard(const std::string& graphicsCard) {
    graphicsCard_ = graphicsCard;
}

void Computer::display() const {
    std::cout << "Computer Configuration:\n";
    std::cout << "CPU: " << cpu_ << "\n";
    std::cout << "RAM: " << ram_ << "\n";
    std::cout << "Storage: " << storage_ << "\n";
    std::cout << "Graphics Card: " << graphicsCard_ << "\n";
}
