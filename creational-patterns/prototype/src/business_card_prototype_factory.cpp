#include "prototype/business_card_prototype_factory.h"


BusinessCardPrototypeFactory::BusinessCardPrototypeFactory(const BusinessCard& businessCard)
    : prototype_(businessCard) {}

BusinessCard BusinessCardPrototypeFactory::createBusinessCard(const std::string& name,
                                                              const std::string& email,
                                                              const std::string& company) const {
    BusinessCard customizedCard = *(prototype_.clone());  // Clone the prototype
    customizedCard.setName(name);
    customizedCard.setEmail(email);
    customizedCard.setCompany(company);

    return customizedCard;
}
