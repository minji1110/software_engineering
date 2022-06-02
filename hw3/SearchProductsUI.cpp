#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
#include "Product.h"
#include "SearchProductsUI.h"
#include "ProductCollection.h"
#include "SearchProducts.h"

/*
�Լ� �̸� : putProductName
��� : ��ǰ���� �Է��ϸ� ��ǰ������ ����Ѵ�..
���� ���� : �б����� ������, �������� ������, user���� �ּ�
��ȯ ���� : ����
*/

void SearchProductsUI::putProductName(FILE* in_fp, FILE* out_fp, vector<User> &user) {
    string sellerID, productName, companyName;
    int price, quantity, satisfiction=0;

    fscanf(in_fp, "%s ", productName);

    SearchProducts *searchProducts = new SearchProducts(); 
     Product product =searchProducts->getProductDetail(productName, &user);
     sellerID = product.getSellerID();
    companyName = product.getCompanyName();
    price = product.getPrice();
     quantity = product.getRemainingQuantity();
       satisfiction = product.getSatisfiction();
    
        fprintf(out_fp, "4.1 ��ǰ �˻�\n");
        fprintf(out_fp, "> %s %s %s %d %d %d\n", sellerID, productName, companyName, price, quantity, satisfiction);
   
};