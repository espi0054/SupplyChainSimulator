#ifndef RETAILER_H
#define RETAILER_H

#include <string>
#include "Product.h"

class Retailer {
public:
    Retailer(const std::string& name);
    void sellProduct(const Product& product);

private:
    std::string name;
};

#endif // RETAILER_H
