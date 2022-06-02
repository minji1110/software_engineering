#include "BoughtProductCollection.h"
#include "ProductCollection.h"
#include "Product.h"
#include <algorithm>
void BoughtProductCollection::addNewBoughtProduct(Product newProduct)
{
    this->boughtProducts.push_back(newProduct);
}

vector<Product> BoughtProductCollection::getBoughtProducts()
{
    return this->boughtProducts;
}



