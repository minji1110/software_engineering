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

void SearchProductsUI::putProductName(FILE* in_fp, FILE* out_fp, vector<User>& user, int &sellerIndex, vector<Product>& allProducts, Product* searchedProduct) {
    string sellerID, productName, companyName;
    int price, quantity, satisfiction=0;

    fscanf(in_fp, "%s ", productName.c_str());

    SearchProducts *searchProducts = new SearchProducts(); 
    Product* product =searchProducts->getProductDetail(productName, user, sellerIndex, allProducts, searchedProduct);

    fprintf(out_fp, "4.1 상품 정보 검색\n");

    if(!(product==NULL)){
      sellerID = product->getSellerID();
      companyName = product->getCompanyName();
      price = product->getPrice();
      quantity = product->getRemainingQuantity();
      satisfiction = product->getSatisfiction();
    
      fprintf(out_fp, "> %s %s %s %d %d %d\n", sellerID.c_str(), productName.c_str(), companyName.c_str(), price, quantity, satisfiction);
    }
};