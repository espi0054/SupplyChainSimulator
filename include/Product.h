#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// Manages the product details : name, quantity, unit cost
class Product {
public:
    Product(const std::string& name, double price);
    void display() const;

private:
    std::string name;
    double price;
};

#endif // PRODUCT_H
