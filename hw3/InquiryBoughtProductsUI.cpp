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

    fprintf(out_fp, "4.3. ������ ��ǰ ��ȸ\n");
    for (product = products.begin(); product != products.end(); ++product)
    {
        fprintf(out_fp, "> %s %s %d %d\n", product->getProductName(), product->getCompanyName(), product->getPrice(), product->getRemainingQuantity());
    }
}