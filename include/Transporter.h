#ifndef TRANSPORTER_H
#define TRANSPORTER_H

#include <string>
#include "Product.h"

class Transporter {
public:
    Transporter(const std::string& name);
    void transportProduct(const Product& product);

private:
    std::string name;
};

#endif // TRANSPORTER_H
