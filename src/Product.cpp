#include "Product.h"
#include <iostream>

Product::Product(const std::string& name, double price)
    : name(name), price(price) {}

void Product::display() const {
    std::cout << "Product Name: " << name << ", Price: $" << price << std::endl;
}
