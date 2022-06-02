#include <vector>
#include <iostream>
#include "User.h"
#include "EstimateProducts.h"
#include "EstimateProductsUI.h"


/*
    함수 이름 : EstimateProducts::estimateProducts
    기능 : EstimateProductsUI 객체를 생성, 판매 상품 통계를 전달한다.
    전달 인자 : 출력 파일 포인터, 현재 로그인한 유저
    반환 인자 : 없음
*/
void EstimateProducts::estimateProducts(FILE* out_fp, User* user)
{
        vector<Product> salesEstimations = user->getSalesEstimations();

        EstimateProductsUI *estimateProductsUI= new EstimateProductsUI();
        estimateProductsUI->showEstimation(out_fp, salesEstimations);
}