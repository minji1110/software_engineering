#pragma once 
#include <iostream>
#include <vector>
#include "User.h"

class SignOutUI
{
    public:
        void signOut(FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex);
};