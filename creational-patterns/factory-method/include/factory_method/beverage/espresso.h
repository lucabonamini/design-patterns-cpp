#pragma once

#include "factory_method/beverage/coffee.h"
#include <iostream>


class Espresso : public Coffee {
public:
    void brew() const override {
        std::cout << "Brewing Espresso coffee." << std::endl;
    }
};