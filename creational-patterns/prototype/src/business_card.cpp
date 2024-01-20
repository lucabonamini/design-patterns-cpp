#include "prototype/business_card.h"

#include <iostream>


BusinessCard::BusinessCard(const std::string& name, const std::string& email, const std::string& company)
    : name_(name), email_(email), company_(company) {}

BusinessCard* BusinessCard::clone() const {
    return new BusinessCard(*this);  // Copy constructor for cloning
}

void BusinessCard::display() const {
    std::cout << "Business Card:\n";
    std::cout << "Name: " << name_ << "\n";
    std::cout << "Email: " << email_ << "\n";
    std::cout << "Company: " << company_ << "\n";
    std::cout << "---------------------------\n";
}

void BusinessCard::setName(const std::string& name) {
    name_ = name;
}

void BusinessCard::setEmail(const std::string& email) {
    email_ = email;
}

void BusinessCard::setCompany(const std::string& company) {
    company_ = company;
}
