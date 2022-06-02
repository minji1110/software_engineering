#pragma once 
#include <iostream>
#include "User.h"

class Login
{
    public:
        void login(string id, string password, vector<User> &user, User* nowUser, int &nowUserIndex);
};