#pragma once 
#include <iostream>

using namespace std;

class Product
{
private:
    string productName;    
    string companyName;     
    string sellerID;
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
    string getSellerID();
    int getPrice();
    int getSalesQuantity();
    int getRemainingQuantity();
    int getSatisfiction();
    int getTotalSalesPrice();
    int getTotalSatisfiction();
    int getAverageSatisfiction();
    void setQuantity();
    void setTotalSalesPrice(int salesPrice);
    void setTotalSatisfiction(int satisfiction);
    void setAverageSatisfiction(int averageSatisfiction);
    void createProduct(string, string, string, int, int);
}; 