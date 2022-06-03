#include "InquiryBoughtProductsUI.h"
#include <vector>
#include <stdio.h>
#include "Product.h"
#include "InquiryBoughtProducts.h"

/*
    �Լ� �̸� : InquiryBoughtProductsUI::showBoughtProducts
    ��� : ������ ��ǰ�� �Ǹ���ID, ��ǰ��, ����ȸ���, ����, ����, ��� �������� output.txt�� ����Ѵ�.
    ���� ���� : ��� ���� ������, �Ǹ� �Ƿ� ��ǰ ���
    ��ȯ ���� : ����
*/
void InquiryBoughtProductsUI::showBoughtProducts(FILE* out_fp, vector<Product> products)
{

    vector<Product>::iterator product;

    fprintf(out_fp, "4.3. 상품 구매 내역 조회\n");
    for (product = products.begin(); product != products.end(); ++product)
    {
        fprintf(out_fp, "> %s %s %s %d %d %d\n", product->getSellerID().c_str(),product->getProductName().c_str(), product->getCompanyName().c_str(), product->getPrice(), product->getRemainingQuantity(), product->getAverageSatisfiction());
    }
}