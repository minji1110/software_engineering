#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "User.h"
using namespace std;

class SearchProductsUI {
public:
    void putProductName(FILE* in_fp, FILE* out_fp, vector<User>&);
};