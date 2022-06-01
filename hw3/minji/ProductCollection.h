#pragma once 
#include <vector>
#include "Product.h"

class ProductCollection{
    private:
        vector <Product> salesProducts;
    
    public:
        vector<Product> getSalesProducts();
        vector<Product> getSoldProducts();
        void addNewSalesProduct(Product);
        
};