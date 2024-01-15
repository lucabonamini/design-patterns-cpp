#pragma once

#include "factory_method/beverage/coffee.h"
#include <iostream>


class Latte : public Coffee {
public:
    void brew() const override {
        std::cout << "Brewing Latte coffee." << std::endl;
    }
};