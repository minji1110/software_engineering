#include "InquiryBoughtProducts.h"
#include <vector>
#include "User.h"
#include "InquiryBoughtProductsUI.h"

/*
      �Լ� �̸� : InquiryBoughtProducts::InquiryBoughtProduct
    ��� : InquiryBoughtProductsUI Ŭ������ ����, ������ �Ƿ� ��ǰ ����� �����Ѵ�.
    ���� ���� : ��� ���� ������, ���� �α����� ȸ��
    ��ȯ ���� : ����
*/
InquiryBoughtProducts::InquiryBoughtProducts(FILE* out_fp, User* user)
{

    vector<Product> boughtProducts = user->getBoughtProducts();

    InquiryBoughtProductsUI* inquiryBoughtProductsUI = new InquiryBoughtProductsUI();
    inquiryBoughtProductsUI->showBoughtProducts(out_fp, boughtProducts);
}