#include <vector>
#include <stdio.h>
#include "Product.h"
#include "InquirySoldProductsUI.h"

/*
    함수 이름 : InquirySoldProductsUI::showSoldProducts
    기능 : 판매 완료 의류 상품 목록의 상품명, 제작회사명, 가격, 판매수량, 평균 구매만족도를 output.txt에 출력한다.
    전달 인자 : 출력 파일 포인터, 판매 완료 의류 상품 목록
    반환 인자 : 없음
*/
void InquirySoldProductsUI::showSoldProducts(FILE* out_fp, vector<Product> products)
{
    vector<Product>::iterator product;

    fprintf(out_fp,"3.3. 판매 완료 상품 조회\n");
    for (product = products.begin(); product != products.end(); ++product){   
        fprintf(out_fp,"> %s %s %d %d %d\n", product->getProductName().c_str(),product->getCompanyName().c_str(),product->getPrice(), product->getSalesQuantity(),product->getSatisfiction());
    }
}