#include <iostream>
#include "Product.h"
#include "Supplier.h"
#include "Transporter.h"
#include "Retailer.h"

int main() {
    Product product("Laptop", 999.99);
    Supplier supplier("Tech Supplier");
    Transporter transporter("Fast Transport");
    Retailer retailer("Local Store");

    supplier.supplyProduct(product);
    transporter.transportProduct(product);
    retailer.sellProduct(product);

    return 0;
}
