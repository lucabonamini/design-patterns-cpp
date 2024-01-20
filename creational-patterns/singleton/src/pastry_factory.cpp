#include "singleton/pastry_factory.h"

PastryFactory::PastryFactory() {
    // Initialization code...
}

PastryFactory& PastryFactory::getInstance() {
    // Lazy initialization
    static PastryFactory instance;
    return instance;
}

std::unique_ptr<Pastry> PastryFactory::createCake(const std::string& flavor) {
    return std::make_unique<Cake>(flavor);
}

std::unique_ptr<Pastry> PastryFactory::createCookie(const std::string& flavor) {
    return std::make_unique<Cookie>(flavor);
}

std::unique_ptr<Pastry> PastryFactory::createMuffin(const std::string& flavor) {
    return std::make_unique<Muffin>(flavor);
}

PastryFactory::~PastryFactory() {
    // Cleanup code...
}
