#pragma once 
#include <iostream>
#include <vector>
#include "User.h"

class SignUp
{
    public:
        void signUp(string name, string personalNumber, string id, string password, vector<User> &user);
};