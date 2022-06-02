#include <vector>
#include <iostream>
#include "User.h"
#include "EstimateProducts.h"
#include "EstimateProductsUI.h"


void EstimateProducts::estimateProducts(FILE* out_fp, User* user)
{
        
        vector<Product> salesEstimations = user->getSalesEstimations();

        EstimateProductsUI *estimateProductsUI= new EstimateProductsUI();
        estimateProductsUI->showEstimation(out_fp, salesEstimations);
}