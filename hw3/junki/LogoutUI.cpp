#include <iostream>
#include <vector>
#include "LogoutUI.h"
#include "Logout.h"
#include "User.h"

using namespace std;

void LogoutUI::logout(FILE* out_fp, User* nowUser){
    Logout *logout = new Logout();
    logout->logout(nowUser);
    
    fprintf(out_fp,"2.2. 로그아웃\n");
    fprintf(out_fp,"%s\n", nowUser->getId().c_str());
}