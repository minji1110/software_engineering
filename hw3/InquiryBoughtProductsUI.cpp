#include "InquiryBoughtProductsUI.h"
#include <vector>
#include <stdio.h>
#include "Product.h"
#include "InquiryBoughtProducts.h"

/*
    함수 이름 : InquiryBoughtProductsUI::showBoughtProducts
    기능 : 구매한 상품의 판매자ID, 상품명, 제작회사명, 가격, 수량, 평균 만족도를 output.txt에 출력한다.
    전달 인자 : 출력 파일 포인터, 판매 의류 상품 목록
    반환 인자 : 없음
*/
void InquiryBoughtProductsUI::showBoughtProducts(FILE* out_fp, vector<Product> products)
{

    vector<Product>::iterator product;

    fprintf(out_fp, "4.3. 구매한 상품 조회\n");
    for (product = products.begin(); product != products.end(); ++product)
    {
        fprintf(out_fp, "> %s %s %d %d\n", product->getProductName(), product->getCompanyName(), product->getPrice(), product->getRemainingQuantity());
    }
}