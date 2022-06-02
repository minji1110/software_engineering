#include <vector>
#include <stdio.h>
#include "Product.h"
#include "InquirySoldProductsUI.h"

void InquirySoldProductsUI::showSoldProducts(FILE* out_fp, vector<Product> products)
{
    
    vector<Product>::iterator product;

    fprintf(out_fp,"3.3. 판매 완료 상품 조회\n");
    for (product = products.begin(); product != products.end(); ++product)
    {   
        fprintf(out_fp,"> %s %s %d %d %d\n", product->getProductName().c_str(),product->getCompanyName().c_str(),product->getPrice(), product->getSalesQuantity(),product->getSatisfiction());
    }
}