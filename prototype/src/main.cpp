#include "prototype/business_card_prototype_factory.h"


int main() {
    BusinessCardPrototypeFactory genericFactory(
        BusinessCard("John Doe", "john.doe@example.com", "ABC Corporation"));
    
    BusinessCard card1 = genericFactory.createBusinessCard("Alice Smith", "alice.smith@example.com", "XYZ Inc.");
    BusinessCard card2 = genericFactory.createBusinessCard("Bob Johnson", "bob.johnson@example.com", "123 Industries");
    BusinessCard card3 = genericFactory.createBusinessCard("Charlie Brown", "charlie.brown@example.com", "DEF Ltd.");
    
    card1.display();
    card2.display();
    card3.display();

    return 0;
}
