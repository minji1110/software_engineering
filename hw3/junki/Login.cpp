#include <iostream>

#include "Login.h"
#include "User.h"

using namespace std;

void Login::login(string id, string password, vector<User> &user, User* nowUser, int &nowUserIndex){
    nowUser->getUser(id, password, user, nowUser, nowUserIndex);
}