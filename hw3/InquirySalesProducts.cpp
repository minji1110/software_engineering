#include <vector>
#include "User.h"
#include "InquirySalesProducts.h"
#include "InquirySalesProductsUI.h"


InquirySalesProducts::InquirySalesProducts(FILE* out_fp, User* user){
        
        vector<Product> salesProducts = user->getSalesProducts();

        InquirySalesProductsUI *inquirySalesProductsUI= new InquirySalesProductsUI();
        inquirySalesProductsUI->showSalesProducts(out_fp, salesProducts);
}