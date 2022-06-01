#include <iostream>
#include <vector>
#include "SignOut.h"
#include "User.h"

using namespace std;

void SignOut::signOut(vector<User> &user, User* nowUser, int &nowUserIndex){
    nowUser->deleteUser(user, nowUserIndex);
}