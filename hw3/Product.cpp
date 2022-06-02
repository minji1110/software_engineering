#include "Product.h"

void Product::createProduct(string productName, string companyName, int price, int quantity)
{
    this->productName=productName;
    this->companyName=companyName;
    this->price=price;
    this->remainingQuantity=quantity;
    this->salesQuantity=0;
    this->salesQuantity=0;
    this->totalSalesPrice=0;
    this->totalSatisfiction=0;
}

string Product::getProductName()
{
    return this->productName;
}

string Product::getCompanyName()
{
    return this->companyName;
}

int Product::getPrice()
{
    return this->price;
}

int Product::getSalesQuantity()
{
    return this->salesQuantity;
}

int Product::getRemainingQuantity()
{
    return this->remainingQuantity;
}

int Product::getSatisfiction()
{
    return this->satisfiction;
}

int Product::getTotalSalesPrice()
{
    return this->totalSalesPrice;
}

int Product::getTotalSatisfiction()
{
    return this->totalSatisfiction;
}

void Product::setTotalSalesPrice(int salesPrice)
{
    this->totalSalesPrice += salesPrice;
}

void Product::setTotalSatisfiction(int satisfiction)
{
    this->totalSatisfiction += satisfiction;
}

void Product::setAverageSatisfiction(int averageSatisfiction)
{
    this->averageSatisfiction = averageSatisfiction;
}
