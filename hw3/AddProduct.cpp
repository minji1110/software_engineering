#include <iostream>
#include "AddProduct.h"
#include "User.h"

using namespace std;

void AddProduct::addNewSalesProduct(User* user,string productName, string companyName, int price, int quantity)
{
    user->addNewSalesProduct(productName,companyName,price,quantity);
}