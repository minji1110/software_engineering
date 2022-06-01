#pragma once 
#include<iostream>

using namespace std;

class Product
{
private:
    string productName;    
    string companyName;     
    int price;              
    int salesQuantity;      
    int remainingQuantity;  
    int satisfiction;       

public:
    string getProductName();
    string getCompanyName();
    int getPrice();
    int getSalesQuantity();
    int getRemainingQuantity();
    int getSatisfiction();

    void createProduct(string, string, int, int);
};