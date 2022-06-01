#include <iostream>
#include "User.h"
#include <vector>

/*
    함수 이름 : User::addNewUser
    기능 : 새로운 유저를 생성한다.
    전달 인자 : 이름, 주민번호, 아이디, 비밀번호
    반환 인자 : 이름, 주민번호, 아이디, 비밀번호
*/
void User::addNewUser(string name, string personalNumber, string id, string password, vector<User> &user)
{
    User* newUser = new User(name, personalNumber, id, password);
    user.push_back(*newUser);
}

/*
    함수 이름 : User::deleteUser
    기능 : 현재 회원이 탈퇴한다.
    전달 인자 : X
    반환 인자 : 아이디
*/
void User::deleteUser(vector<User> &user, int &nowUserIndex)
{
    user.erase(user.begin()+nowUserIndex);
}

/*
    함수 이름 : User::getUser
    기능 : 유저가 로그인을 수행한다.
    전달 인자 : 아이디, 비밀번호
    반환 인자 : 아이디, 비밀번호
*/
void User::getUser(string id, string password, vector<User> &user, User* nowUser, int &nowUserIndex)
{
    // 로그인 기능 수행
    for(int i=0; i<user.size();i++){
        if(user[i].getId() == id && user[i].getPassword() == password){
            *nowUser = user[i];
            nowUserIndex = i;
            break;
        }
    }

}