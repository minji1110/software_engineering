#include <iostream>
#include <vector>
#include "Logout.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : Logout::logout
    기능 : 가리키고 있는 현재 유저 포인터를 초기화 시킴
    전달 인자 : 현재 유저 포인터
    반환 인자 : 없음
*/
void Logout::logout(User* nowUser)
{
    nowUser = NULL;
}