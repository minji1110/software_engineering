#pragma once 
#include <iostream>
#include <vector>
#include "User.h"

class LogoutUI{
public:
    void logout(FILE* out_fp, User* nowUser);
};