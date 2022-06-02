#pragma once 
#include <iostream>

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
    int satisfactionNumber;
    int totalSalesPrice;
    int totalSatisfiction;
    int averageSatisfiction;

public:
    string getProductName();
    string getCompanyName();
    int getPrice();
    int getSalesQuantity();
    int getRemainingQuantity();
    int getSatisfiction();
    int getTotalSalesPrice();
    int getTotalSatisfiction();
    int getAverageSatisfiction();
    void setTotalSalesPrice(int salesPrice);
    void setTotalSatisfiction(int satisfiction);
    void setAverageSatisfiction(int averageSatisfiction);
    void createProduct(string, string, int, int);
}; 