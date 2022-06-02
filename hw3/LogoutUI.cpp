#include <iostream>
#include <vector>
#include "LogoutUI.h"
#include "Logout.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : LogoutUI::logout
    기능 : logout 클래스의 signOut() 함수를 호출함. 또한, 수행 결과를 파일에 써준다.
    전달 인자 : 쓰기 파일 포인터, 현재 유저 포인터
    반환 인자 : 없음
*/
void LogoutUI::logout(FILE* out_fp, User* nowUser)
{
    Logout *logout = new Logout();
    logout->logout(nowUser);
    
    fprintf(out_fp,"2.2. 로그아웃\n");
    fprintf(out_fp,"> %s\n", nowUser->getId().c_str());
}