#pragma once 
#include <stdio.h>
#include "User.h"

class AddProductUI
{
    public:
        Product* createNewProduct(FILE* in_fp, FILE* out_fp,User* user);
};