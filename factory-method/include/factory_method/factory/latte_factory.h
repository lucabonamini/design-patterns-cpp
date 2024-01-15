#pragma once

#include "factory_method/factory/coffee_factory.h"
#include "factory_method/beverage/latte.h"


class LatteFactory : public CoffeeFactory {
public:
    std::unique_ptr<Coffee> createCoffee() const override {
        return std::make_unique<Latte>();
    }
};