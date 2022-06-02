#include <iostream>
#include "LoginUI.h"
#include "Login.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : LoginUI::login
    기능 : 파일에서 읽은 인자들을 login 클래스의 login() 함수를 호출함. 또한 수행 결과를 파일에 써줌
    전달 인자 : 읽기 파일 포인터, 쓰기 파일 포인터, 유저 목록, 현재 유저 포인터, 현재 유저 vector index
    반환 인자 : 없음
*/
void LoginUI::login(FILE* in_fp, FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex)
{
    string id;
    string password;
                                        
    fscanf(in_fp, "%s %s", id.c_str(), password.c_str());
    Login *login = new Login();
    login->login(id, password, user, nowUser, nowUserIndex);
    
    fprintf(out_fp,"2.1. 로그인\n");
    fprintf(out_fp,"> %s %s\n", id.c_str(), password.c_str());
}