#include "Transporter.h"
#include <iostream>

Transporter::Transporter(const std::string& name)
    : name(name) {}

void Transporter::transportProduct(const Product& product) {
    std::cout << name << " is transporting the following product:" << std::endl;
    product.display();
}
