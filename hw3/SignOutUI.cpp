#include <iostream>
#include <vector>
#include "SignOutUI.h"
#include "SignOut.h"
#include "User.h"

using namespace std;

void SignOutUI::signOut(FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex)
{
    SignOut *signOut = new SignOut();
    signOut->signOut(user, nowUser, nowUserIndex);
    
    fprintf(out_fp,"1.2. 회원탈퇴\n");
    fprintf(out_fp,"> %s\n", nowUser->getId().c_str());
}