#pragma once

#include "abstract_factory/factory/furniture_factory.h"
#include "abstract_factory/furniture/rustic_furniture.h"


class RusticFurnitureFactory : public FurnitureFactory {
public:
    std::unique_ptr<Chair> createChair() const override {
        return std::make_unique<RusticChair>();
    }

    std::unique_ptr<Table> createTable() const override {
        return std::make_unique<RusticTable>();
    }

    std::unique_ptr<Sofa> createSofa() const override {
        return std::make_unique<RusticSofa>();
    }
};