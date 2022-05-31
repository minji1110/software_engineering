#pragma once 
#include <stdio.h>
#include "User.h"

class AddProductUI{
    public:
        void createNewProduct(FILE* in_fp, FILE* out_fp, User* user);
};