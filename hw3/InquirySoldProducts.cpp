#include "InquirySoldProducts.h"
#include "InquirySoldProductsUI.h"
#include "User.h"

InquirySoldProducts::InquirySoldProducts(FILE* out_fp, User* user)
{
        
        vector<Product> soldProducts = user->getSoldProducts();

        InquirySoldProductsUI *inquirySoldProductsUI= new InquirySoldProductsUI();
        inquirySoldProductsUI->showSoldProducts(out_fp, soldProducts);
}