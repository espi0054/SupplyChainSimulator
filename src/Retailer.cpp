#include "Retailer.h"
#include <iostream>

Retailer::Retailer(const std::string& name)
    : name(name) {}

void Retailer::sellProduct(const Product& product) {
    std::cout << name << " is selling the following product:" << std::endl;
    product.display();
}
