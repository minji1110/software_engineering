#include <ProductCollection.h>
#include <Product.h>

void ProductCollection::addNewSalesProduct(Product newProduct){
    this->salesProducts.push_back(newProduct);
}

vector<Product> ProductCollection::getSalesProducts() {
    return this->salesProducts;
}