#include <iostream>
#include "EstimateProductsUI.h"
#include "EstimateProducts.h"
#include <vector>
#include "Product.h"


/*
    함수 이름 : EstimateProductsUI::showEstimation
    기능 : 판매한 모든 상품의 상품명, 총액, 평균구매만족도를 out.txt에 출력한다.
    전달 인자 : 출력 파일 포인터, 전체 상품 목록
    반환 인자 : 없음
*/
void EstimateProductsUI::showEstimation(FILE* out_fp, vector<Product> products)
{
    
    vector<Product>::iterator product;

    fprintf(out_fp,"5.1. 상품 판매 통계\n");
    for (product = products.begin(); product != products.end(); ++product)
    {   
        fprintf(out_fp,"> %s %d %d\n", product->getProductName().c_str(), product->getTotalSalesPrice(), product->getAverageSatisfiction());
    }
}