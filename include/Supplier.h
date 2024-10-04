#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>
#include "Product.h"

class Supplier {
public:
    Supplier(const std::string& name);
    void supplyProduct(const Product& product);

private:
    std::string name;
};

#endif // SUPPLIER_H
