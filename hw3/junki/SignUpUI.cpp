#include <iostream>
#include <vector>
#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;

void SignUpUI::signUp(FILE* in_fp,FILE* out_fp, vector<User> &user){
    string name;
    string personalNumber;
    string id;
    string password;
                                        
    fscanf(in_fp, "%s %s %s %s", name, personalNumber, id, password);

    SignUp *signUp = new SignUp();
    signUp->signUp(name, personalNumber, id, password, user);
    
    fprintf(out_fp,"1.1 회원가입\n");
    fprintf(out_fp,"%s %s %d %d\n", name, personalNumber, id, password);
}