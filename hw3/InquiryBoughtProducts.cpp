#include "InquiryBoughtProducts.h"
#include <vector>
#include "User.h"
#include "InquiryBoughtProducts.h"
#include "InquiryBoughtProductsUI.h"


InquiryBoughtProducts::InquiryBoughtProducts(FILE* out_fp, User* user)
{

    vector<Product> boughtProducts = user->getBoughtProducts();

    InquiryBoughtProductsUI* inquiryBoughtProductsUI = new InquiryBoughtProductsUI();
    inquiryBoughtProductsUI->showBoughtProducts(out_fp, boughtProducts);
}