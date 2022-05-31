#include <iostream>
#include "AddProductUI.h"
#include "AddProduct.h"
#include "User.h"

using namespace std;

void AddProductUI::createNewProduct(FILE* in_fp,FILE* out_fp,User* user){
    string productName;
    string companyName;
    int price;
    int quantity;

    fscanf(in_fp, "%s %s %s %s", productName, companyName, &price, &quantity);
    AddProduct *addProduct = new AddProduct();
    addProduct->addNewSalesProduct(user,productName, companyName, price, quantity);
    
    fprintf(out_fp,"3.1 판매 의류 등록\n");
    fprintf(out_fp,"%s %s %d %d\n", productName, companyName, price, quantity);
}