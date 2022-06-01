#include "ProductCollection.h"
#include "Product.h"

void ProductCollection::addNewSalesProduct(Product newProduct){
    this->salesProducts.push_back(newProduct);
}

vector<Product> ProductCollection::getSalesProducts() {
    return this->salesProducts;
}

vector<Product> ProductCollection::getSoldProducts() {
    vector<Product> allProducts=this->salesProducts;
    vector<Product> soldProducts;
        
    vector<Product>::iterator product;
    for (product = allProducts.begin(); product != allProducts.end(); ++product)
    {   
        if(product->getRemainingQuantity()==0) 
            soldProducts.push_back(*product);
    }
    return soldProducts;
}