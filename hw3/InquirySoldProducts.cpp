#include "InquirySoldProducts.h"
#include "InquirySoldProductsUI.h"
#include "User.h"

/*
    함수 이름 : InquirySoldProducts::InquirySoldProducts
    기능 : InquirySoldProductsUI 클래스를 생성, 판매 완료 의류 상품 목록을 전달한다.
    전달 인자 : 출력 파일 포인터, 현재 로그인한 회원
    반환 인자 : 없음
*/
InquirySoldProducts::InquirySoldProducts(FILE* out_fp, User* user)
{
        vector<Product> soldProducts = user->getSoldProducts();

        InquirySoldProductsUI *inquirySoldProductsUI= new InquirySoldProductsUI();
        inquirySoldProductsUI->showSoldProducts(out_fp, soldProducts);
}