#include "Supplier.h"
#include <iostream>

Supplier::Supplier(const std::string& name)
    : name(name) {}

void Supplier::supplyProduct(const Product& product) {
    std::cout << name << " is supplying the following product:" << std::endl;
    product.display();
}
