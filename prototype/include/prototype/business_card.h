#pragma once

#include <string>


class BusinessCard {
public:
    BusinessCard(const std::string& name, const std::string& email, const std::string& company);

    BusinessCard* clone() const;

    void display() const;

    void setName(const std::string& name);
    void setEmail(const std::string& email);
    void setCompany(const std::string& company);

private:
    std::string name_;
    std::string email_;
    std::string company_;
};
