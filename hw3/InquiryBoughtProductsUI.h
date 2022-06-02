#pragma once 
#include "stdio.h"
#include <vector>
#include "InquiryBoughtProducts.h"


class InquiryBoughtProductsUI
{
public:
   
	void showBoughtProducts(FILE*, vector<Product>);
};