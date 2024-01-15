#pragma once

#include "furniture.h"
#include <iostream>


class ClassicChair : public Chair {
public:
    void sit() const override {
        std::cout << "Sitting on a classic chair." << std::endl;
    }
};

class ClassicTable : public Table {
public:
    void place() const override {
        std::cout << "Placing items on a classic table." << std::endl;
    }
};

class ClassicSofa : public Sofa {
public:
    void relax() const override {
        std::cout << "Relaxing on a classic sofa." << std::endl;
    }
};