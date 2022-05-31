#pragma once 
#include<iostream>

using namespace std;

class Product
{
    private:
        string productName;     //상품명
        string companyName;     //제작회사명
        int price;              //가격
        int salesQuantity;      //판매수량
        int remainingQuantity;  //재고수량
        int satisfiction;       //구매만족도    
        
    public:
        string getProductName();
        string getCompanyName();
        int getPrice();
        int getSalesQuantity();
        int getRemainingQuantity();
        int getSatisfiction();
        
        void createProduct(string, string, int, int);
};