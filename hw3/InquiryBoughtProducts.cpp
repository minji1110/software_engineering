#include "InquiryBoughtProducts.h"
#include <vector>
#include "User.h"
#include "InquiryBoughtProductsUI.h"

/*
      함수 이름 : InquiryBoughtProducts::InquiryBoughtProduct
    기능 : InquiryBoughtProductsUI 클래스를 생성, 구매한 의류 상품 목록을 전달한다.
    전달 인자 : 출력 파일 포인터, 현재 로그인한 회원
    반환 인자 : 없음
*/
InquiryBoughtProducts::InquiryBoughtProducts(FILE* out_fp, User* user)
{

    vector<Product> boughtProducts = user->getBoughtProducts();

    InquiryBoughtProductsUI* inquiryBoughtProductsUI = new InquiryBoughtProductsUI();
    inquiryBoughtProductsUI->showBoughtProducts(out_fp, boughtProducts);
}