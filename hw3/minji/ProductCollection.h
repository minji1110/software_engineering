#pragma once 
#include <vector>
#include "Product.h"

class ProductCollection{
    private:
        vector <Product> salesProducts;
    
    public:
        vector<Product> getSalesProducts();
        void addNewSalesProduct(Product);
        
};