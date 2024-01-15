#pragma once

#include "abstract_factory/furniture/furniture.h"

#include <memory>

class FurnitureFactory {
    public:
        virtual std::unique_ptr<Chair> createChair() const = 0;
        virtual std::unique_ptr<Table> createTable() const = 0;
        virtual std::unique_ptr<Sofa> createSofa() const = 0;
};