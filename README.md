# Supply Chain Simulator

## Description
The Supply Chain Simulator is a **C++ project** that simulates the supply chain process, allowing interaction between suppliers, transporters, and retailers. It demonstrates how products are supplied, transported, and sold in a simplified supply chain.

## Features
- Simulates the supply chain process.
- Displays product information.
- Interacts with multiple entities in the supply chain.

## Requirements
- C++ compiler (e.g., g++)
- Basic knowledge of C++ programming

## Installation Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/SupplyChainSimulator.git
   ```

2. Navigate to the project directory
    ```
    cd SupplyChainSimulator
    ```

3. To compile and run the project, run the following commands:
``` 
  g++ -I include src/main.cpp src/Product.cpp src/Supplier.cpp src/Transporter.cpp src/Retailer.cpp -o SupplyChainSimulator
./SupplyChainSimulator
```
4. After successfully compiling, run the following commands:
```
  ./SupplyChainSimulator
```
## Project Structure: 
```
SupplyChainSimulator/
├── src/
│   ├── main.cpp
│   ├── Product.cpp
│   ├── Supplier.cpp
│   ├── Transporter.cpp
│   └── Retailer.cpp
└── include/
│   ├── Product.h
│   ├── Supplier.h
│   ├── Transporter.h
│   └── Retailer.h
└
└── README.md


```




