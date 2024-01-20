#pragma once

#include "abstract_factory/factory/furniture_factory.h"
#include "abstract_factory/furniture/modern_furniture.h"


class ModernFurnitureFactory : public FurnitureFactory {
public:
    std::unique_ptr<Chair> createChair() const override {
        return std::make_unique<ModernChair>();
    }

    std::unique_ptr<Table> createTable() const override {
        return std::make_unique<ModernTable>();
    }

    std::unique_ptr<Sofa> createSofa() const override {
        return std::make_unique<ModernSofa>();
    }
};