#include <iostream>
#include "LoginUI.h"
#include "Login.h"
#include "User.h"

using namespace std;

void LoginUI::login(FILE* in_fp, FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex){
    string id;
    string password;
                                        
    fscanf(in_fp, "%s %s", id.c_str(), password.c_str());
    Login *login = new Login();
    login->login(id, password, user, nowUser, nowUserIndex);
    
    fprintf(out_fp,"2.1. 로그인\n");
    fprintf(out_fp,"%s %s\n", id.c_str(), password.c_str());
}