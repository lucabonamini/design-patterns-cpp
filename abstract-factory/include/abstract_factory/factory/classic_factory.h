#pragma once

#include "abstract_factory/factory/furniture_factory.h"
#include "abstract_factory/furniture/classic_furniture.h"


class ClassicFurnitureFactory : public FurnitureFactory {
public:
    std::unique_ptr<Chair> createChair() const override {
        return std::make_unique<ClassicChair>();
    }

    std::unique_ptr<Table> createTable() const override {
        return std::make_unique<ClassicTable>();
    }

    std::unique_ptr<Sofa> createSofa() const override {
        return std::make_unique<ClassicSofa>();
    }
};