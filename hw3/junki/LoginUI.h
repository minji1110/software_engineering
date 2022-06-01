#pragma once 
#include <iostream>
#include "User.h"

class LoginUI{
public:
    void login(FILE* in_fp, FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex);
};