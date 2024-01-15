#pragma once

#include "furniture.h"
#include <iostream>


class RusticChair : public Chair {
public:
    void sit() const override {
        std::cout << "Sitting on a rustic chair." << std::endl;
    }
};

class RusticTable : public Table {
public:
    void place() const override {
        std::cout << "Placing items on a rustic table." << std::endl;
    }
};

class RusticSofa : public Sofa {
public:
    void relax() const override {
        std::cout << "Relaxing on a rustic sofa." << std::endl;
    }
};