#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
#include "Product.h"
#include "SearchProductsUI.h"
#include "ProductCollection.h"
#include "SearchProducts.h"

/*
함수 이름 : putProductName
기능 : 상품명을 입력하면 상품정보를 출력한다..
전달 인자 : 읽기파일 포인터, 쓰기파일 포인터, user벡터 주소
반환 인자 : 없음
*/

void SearchProductsUI::putProductName(FILE* in_fp, FILE* out_fp, vector<User>& user, int &sellerIndex, int &productIndex) {
    string sellerID, productName, companyName;
    int price, quantity, satisfiction=0;

    fscanf(in_fp, "%s ", productName.c_str());

    SearchProducts *searchProducts = new SearchProducts(); 
     Product product =searchProducts->getProductDetail(productName, user, sellerIndex, productIndex);
     sellerID = product.getSellerID();
    companyName = product.getCompanyName();
    price = product.getPrice();
     quantity = product.getRemainingQuantity();
       satisfiction = product.getSatisfiction();
    
        fprintf(out_fp, "4.1 상품 검색\n");
        fprintf(out_fp, "> %s %s %s %d %d %d\n", sellerID.c_str(), productName.c_str(), companyName.c_str(), price, quantity, satisfiction);
   
};