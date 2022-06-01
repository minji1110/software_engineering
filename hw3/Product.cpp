#include "Product.h"

void Product::createProduct(string productName, string companyName, int price, int quantity){
    this->productName=productName;
    this->companyName=companyName;
    this->price=price;
    this->remainingQuantity=quantity;
    this->salesQuantity=0;
    this->salesQuantity=0;
}

string Product::getProductName(){
    return this->productName;
}

string Product::getCompanyName(){
    return this->companyName;
}

int Product::getPrice(){
    return this->price;
}

int Product::getSalesQuantity(){
    return this->salesQuantity;
}

int Product::getRemainingQuantity(){
    return this->remainingQuantity;
}

int Product::getSatisfiction(){
    return this->satisfiction;
}