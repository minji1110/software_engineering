#include <iostream>
#include <stdio.h>
#include "AddProductUI.h"
#include "AddProduct.h"

void AddProductUI::createNewProduct(FILE* in_fp, FILE* out_fp,User* user){

    string productName;
    string companyName;
    int price;
    int quantity;

    fscanf(in_fp, "%s %s %d %d", productName.c_str(), companyName.c_str(), &price, &quantity);
    AddProduct *addProduct = new AddProduct();
    addProduct->addNewSalesProduct(user,productName, companyName, price, quantity);
    
    fprintf(out_fp,"3.1 판매 의류 등록\n");
    fprintf(out_fp,"> %s %s %d %d\n", productName.c_str(), companyName.c_str(), price, quantity);
}