#include <iostream>
#include "AddProduct.h"
#include "User.h"

using namespace std;

Product* AddProduct::addNewSalesProduct(User* user,string productName, string companyName, int price, int quantity)
{
    return user->addNewSalesProduct(productName,companyName,price,quantity);
}