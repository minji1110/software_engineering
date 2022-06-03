#include "BuyProductUI.h"
#include "BuyProduct.h"
void BuyProductUI::buyProduct(FILE* out_fp, string sellerID, string productName)
{
    fprintf(out_fp, "4.2. 상품 구매\n");
        fprintf(out_fp, "> %s %s \n", sellerID, productName);
    }

