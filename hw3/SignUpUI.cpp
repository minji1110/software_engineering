#include <iostream>
#include <vector>
#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : SignUpUI::signUp
    기능 : 읽은 파일 내용을 signUp 클래스에게 전달하여 signUp() 함수를 호출함. 또한, 수행 결과를 파일에 써준다.
    전달 인자 : 읽기 파일 포인터, 쓰기 파일 포인터, 유저 목록
    반환 인자 : 없음
*/
void SignUpUI::signUp(FILE* in_fp,FILE* out_fp, vector<User> &user)
{
    string name;
    string personalNumber;
    string id;
    string password;
                                        
    fscanf(in_fp, "%s %s %s %s", name.c_str(), personalNumber.c_str(), id.c_str(), password.c_str());

    SignUp *signUp = new SignUp();
    signUp->signUp(name, personalNumber, id, password, user);
    
    fprintf(out_fp,"1.1. 회원가입\n");
    fprintf(out_fp,"> %s %s %s %s\n", name.c_str(), personalNumber.c_str(), id.c_str(), password.c_str());
}