#include <iostream>
#include <vector>
#include "SignOutUI.h"
#include "SignOut.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : SignOutUI::signOut
    기능 : 읽은 파일 내용을 signOut 클래스에게 전달하여 signOut() 함수를 호출함. 또한, 수행 결과를 파일에 써준다.
    전달 인자 : 읽기 파일 포인터, 쓰기 파일 포인터, 유저 목록, 현재 유저 포인터, 현재 유저의 vector index값
    반환 인자 : 없음
*/
void SignOutUI::signOut(FILE* out_fp, vector<User> &user, User* nowUser, int &nowUserIndex)
{
    SignOut *signOut = new SignOut();
    signOut->signOut(user, nowUser, nowUserIndex);
    
    fprintf(out_fp,"1.2. 회원탈퇴\n");
    fprintf(out_fp,"> %s\n", nowUser->getId().c_str());
}