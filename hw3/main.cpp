// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <vector>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// 함수 선언
void program_exit();
void doTask();

// 변수 선언
FILE* in_fp, *out_fp;
vector <User> user;
User nowUser = new User();
int nowUserIndex;

// entity 선언
class User
{
private:
    char name[MAX_STRING];
    char personalNumber[MAX_STRING];
    char string id[MAX_STRING];
    char string password[MAX_STRING];
    ProductCollection salesProductCollection;
    BuyingCollection boughtProductColletion;
public:
    // 생성자
    User(){};
    User(char name[MAX_STRING], char personalNumber[MAX_STRING], char id[MAX_STRING], char password[MAX_STRING])
    {
        this->name = name;
        this->personalNumber = personalNumber;
        this->id = id;
        this->password = password;
    }
    // 기본 멤버 함수들도 diagram에 추가해야할까요?
    char* getId(){
        return this->id;
    }
    char* getPassword(){
        return this->password;
    }
    // 기능 수행 함수
    void addNewUser();
    void deleteUser();
    void getUser();
    void logOut();  // diagram 추가해야할것같아요, 출력때문에 함수가 필요해서..
};

int main()
{
    in_fp=fopen(INPUT_FILE_NAME, "r+");
    out_fp=fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask(){

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1=0, menu_level_2=0;
    int is_program_exit=0;
    
    while(!is_program_exit) { 
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d", &menu_level_1,&menu_level_2);
        
        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1){
            case 1:
            {
                switch(menu_level_2){
                    // 1.1 회원가입
                    addNewUser();
                    // 1.2 회원탈퇴
                    deleteUser();
                }
            }
            case 2:
            {
                switch(menu_level_2){
                    // 2.1 로그인
                    getUser();
                    // 2.2 로그아웃
                }
            }
            case 3:
            {
                // 3.1 판매 의류 등록
                // 3.2 등록 상품 조회
                // 3.3 판매 완료 상품 조회

            }
            case 4:
            {
                // 4.1 상품 정보 검색
                // 4.2 상품 구매
                // 4.3 상품 구매 내역 조회
                // 4.4 상품 구매 만족도 평가

            }
            case 5:
            {
                // 5.1 판매 상품통계
            }
            case 6:
            {
                // 6.1 종료 
                program_exit();
                is_program_exit=1;
                break;
            }
        }
    }
}


void User::addNewUser()
{
    char name[MAX_STRING], personalNumber[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
                                        
    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, personalNumber, id, password);

    // 회원가입 기능 수행
    User newUser = new User(name, personalNumber, id, password);
    user.push_back(newUser);
 
    // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, personalNumber, id, password);
}
                    
void User::getUser()
{
    char name[MAX_STRING], personalNumber[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
                                        
    // 입력 형식 : ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s", id, password);

    // 로그인 기능 수행
    for(int i=0; i<user.size();i++){
        if(!strcmp(user[i].getId, id) && !strcmp(user[i].getPassword, password)){
            nowUser = user[i];
            nowUserIndex = i;
            break;
        }
    }
 
    // 출력 형식
    fprintf(out_fp, "2.1. 회원가입\n");
    fprintf(out_fp, "%s %s\n", id, password);
}

void User::deleteUser()
{
    char name[MAX_STRING], personalNumber[MAX_STRING], id[MAX_STRING], password[MAX_STRING];

    // 회원탈퇴 기능 수행
    user.erase(user.begin()+nowUserIndex);
 
    // 출력 형식
    fprintf(out_fp, "1.2. 회원탈퇴\n");
    fprintf(out_fp, "%s\n", id);
}

void User::logOut()
{
    // 로그아웃 기능 수행
    // 별거 안해도 될까요..?
 
    // 출력 형식
    fprintf(out_fp, "2.2. 로그아웃\n");
    fprintf(out_fp, "%s\n", id);
}
                                                                    
                                         
void program_exit(){
    fprintf(out_fp,"6.1. 종료");
}

