#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "AddProductUI.h"
#include "AddProduct.h"

/*
    함수 이름 : AddProduct::addNewSalesProduct
    기능 : 새로운 상품을 생성한 후, 상품명, 제작회사명, 가격, 수량을 output.txt에 출력한다.
    전달 인자 : 파일포인터, User
    반환 인자 : 없음
*/
void AddProductUI::createNewProduct(FILE* in_fp, FILE* out_fp,User* user)
{

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