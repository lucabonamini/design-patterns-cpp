#pragma once

#include "furniture.h"
#include <iostream>


class ModernChair : public Chair {
public:
    void sit() const override {
        std::cout << "Sitting on a modern chair." << std::endl;
    }
};

class ModernTable : public Table {
public:
    void place() const override {
        std::cout << "Placing items on a modern table." << std::endl;
    }
};

class ModernSofa : public Sofa {
public:
    void relax() const override {
        std::cout << "Relaxing on a modern sofa." << std::endl;
    }
};