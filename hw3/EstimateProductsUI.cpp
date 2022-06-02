#include <iostream>
#include "EstimateProductsUI.h"
#include "EstimateProducts.h"
#include <vector>
#include "Product.h"

void EstimateProductsUI::showEstimation(FILE* out_fp, vector<Product> products)
{
    
    vector<Product>::iterator product;

    fprintf(out_fp,"5.1. 상품 판매 통계\n");
    for (product = products.begin(); product != products.end(); ++product)
    {   
        fprintf(out_fp,"> %s %d %d\n", product->getProductName().c_str(), product->getTotalSalesPrice(), product->getRemainingQuantity());
    }
}