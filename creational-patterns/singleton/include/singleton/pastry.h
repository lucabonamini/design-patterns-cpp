#pragma once

#include <string>

class Pastry {
public:
    virtual ~Pastry() = default;
    virtual void display() const = 0;
};

class Cake : public Pastry {
public:
    Cake(const std::string& flavor);
    void display() const override;

private:
    std::string flavor_;
};

class Cookie : public Pastry {
public:
    Cookie(const std::string& flavor);
    void display() const override;

private:
    std::string flavor_;
};

class Muffin : public Pastry {
public:
    Muffin(const std::string& flavor);
    void display() const override;

private:
    std::string flavor_;
};