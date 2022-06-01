#include <iostream>
#include <vector>
#include "SignUp.h"
#include "User.h"

using namespace std;

void SignUp::signUp(string name, string personalNumber, string id, string password, vector<User> &user){
    User::addNewUser(name, personalNumber, id, password, user);
}