#include "InquiryBoughtProductsUI.h"
#include <vector>
#include <stdio.h>
#include "Product.h"


void InquiryBoughtProductsUI::showBoughtProducts(FILE* out_fp, vector<Product> products)
{

    vector<Product>::iterator product;

    fprintf(out_fp, "4.2. 판매 상품 조회\n");
    for (product = products.begin(); product != products.end(); ++product)
    {
        fprintf(out_fp, "> %s %s %d %d\n", product->getProductName().c_str(), product->getCompanyName().c_str(), product->getPrice(), product->getRemainingQuantity());
    }
}