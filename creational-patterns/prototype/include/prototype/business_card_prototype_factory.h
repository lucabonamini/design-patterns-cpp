#pragma once

#include "prototype/business_card.h"


class BusinessCardPrototypeFactory {
public:
    BusinessCardPrototypeFactory(const BusinessCard& businessCard);

    BusinessCard createBusinessCard(const std::string& name, const std::string& email,
                                    const std::string& company) const;

private:
    BusinessCard prototype_;
};
