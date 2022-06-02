#include <vector>
#include "User.h"
#include "InquirySalesProducts.h"
#include "InquirySalesProductsUI.h"


/*
    함수 이름 : InquirySalesProducts::InquirySalesProduct
    기능 : InquirySalesProductsUI 클래스를 생성, 판매 의류 상품 목록을 전달한다.
    전달 인자 : 출력 파일 포인터, 현재 로그인한 회원
    반환 인자 : 없음
*/
InquirySalesProducts::InquirySalesProducts(FILE* out_fp, User* user)
{
        
        vector<Product> salesProducts = user->getSalesProducts();

        InquirySalesProductsUI *inquirySalesProductsUI= new InquirySalesProductsUI();
        inquirySalesProductsUI->showSalesProducts(out_fp, salesProducts);
}