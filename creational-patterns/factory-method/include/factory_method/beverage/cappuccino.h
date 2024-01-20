#pragma once

#include "factory_method/beverage/coffee.h"
#include <iostream>


class Cappuccino : public Coffee {
public:
    void brew() const override {
        std::cout << "Brewing Cappuccino coffee." << std::endl;
    }
};