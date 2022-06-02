#pragma once 
#include <iostream>
#include "User.h"

class EstimateProductsUI
{
    public:
        void showEstimation(FILE* out_fp, vector<Product> products);
};