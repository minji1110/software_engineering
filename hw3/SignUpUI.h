#pragma once 
#include <iostream>
#include <vector>
#include "User.h"

class SignUpUI
{
    public:
        void signUp(FILE* in_fp,FILE* out_fp, vector<User> &user);
};