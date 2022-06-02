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
    static bool compareProductName(Product &p1, Product &p2) {  
        return (p1.productName < p2.productName);  
    }  
    string getProductName();
    string getCompanyName();
    int getPrice();
    int getSalesQuantity();
    int getRemainingQuantity();
    int getSatisfiction();

    void createProduct(string, string, int, int);
};