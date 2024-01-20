#pragma once

#include "factory_method/beverage/coffee.h"

#include <memory>


class CoffeeFactory {
public:
    virtual std::unique_ptr<Coffee> createCoffee() const = 0;
    virtual ~CoffeeFactory() = default;
};