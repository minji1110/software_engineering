#pragma once 
#include <vector>
#include "Product.h"

class BoughtProductCollection
{
private:
    vector <Product> boughtProducts;

public:
    vector<Product> getBoughtProducts();

    void addNewBoughtProduct(Product);


};