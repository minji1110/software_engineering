#pragma once 
#include <iostream>
#include <vector>
#include "User.h"

class SignOut{
    public:
        void signOut(vector<User> &user, User* nowUser, int &nowUserIndex);
};