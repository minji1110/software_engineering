#include <iostream>

#include "Login.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : Login::login
    기능 : 현재 유저의 getUser() 함수에게 인자들을 전달해줌
    전달 인자 : 아이디, 패스워드, 유저 목록, 현재 유저 포인터, 현재 유저의 vector index값
    반환 인자 : 없음
*/
void Login::login(string id, string password, vector<User> &user, User* nowUser, int &nowUserIndex)
{
    nowUser->getUser(id, password, user, nowUser, nowUserIndex);
}