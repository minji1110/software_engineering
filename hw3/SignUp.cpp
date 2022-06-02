#include <iostream>
#include <vector>
#include "SignUp.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : SignUp::signUp
    기능 : User 클래스에게 인자들을 전달하여 addNewUser 함수를 호출함
    전달 인자 : 이름, 주민번호, 아이디, 패스워드, 유저 목록
    반환 인자 : 없음
*/
void SignUp::signUp(string name, string personalNumber, string id, string password, vector<User> &user)
{
    User::addNewUser(name, personalNumber, id, password, user);
}