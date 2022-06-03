#include "Product.h"

/*
    함수 이름 : Product::createProduct
    기능 : 새로운 상품을 생성한다.
    전달 인자 : 상품명, 제작회사명, 가격, 수량
    반환 인자 : 없음
*/
void Product::createProduct(string productName, string companyName, string sellerID, int price, int quantity)
{
    this->productName=productName;
    this->companyName=companyName;
    this->price=price;
    this->remainingQuantity=quantity;
    this->salesQuantity=0;
    this->salesQuantity=0;
    this->totalSalesPrice=0;
    this->totalSatisfiction=0;
    this->averageSatisfiction=0;
    this->sellerID = sellerID;
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

int Product::getAverageSatisfiction()
{
    return this->averageSatisfiction;
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

string Product::getSellerID()
{
    return this->sellerID;
}

void Product::setQuantity() {
    this->salesQuantity++;
    this->remainingQuantity--;

}