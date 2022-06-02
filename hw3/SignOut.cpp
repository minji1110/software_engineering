#include <iostream>
#include <vector>
#include "SignOut.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : SignUp::signUp
    기능 : User 클래스에게 인자들을 전달하여 addNewUser 함수를 호출함
    전달 인자 : 유저 목록, 현재 유저 포인터, 현재 유저의 vector 인덱스
    반환 인자 : 없음
*/
void SignOut::signOut(vector<User> &user, User* nowUser, int &nowUserIndex)
{
    nowUser->deleteUser(user, nowUserIndex);
}