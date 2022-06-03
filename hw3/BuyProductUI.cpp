#include "BuyProductUI.h"
#include "BuyProduct.h"

/*
	함수 이름 : BuyProductUI::buyProduct
	기능 : 판매자ID, 상품명을 출력한다.
	전달 인자 : 출력 파일 포인터, 판매자ID 상품명:string
	반환 인자 : 없음
*/
void BuyProductUI::buyProduct(FILE* out_fp, string sellerID, string productName)
{
    fprintf(out_fp, "4.2. 상품 구매\n");
        fprintf(out_fp, "> %s %s \n", sellerID, productName);
    }

