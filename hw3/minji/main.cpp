// 헤더 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "User.h"
#include "AddProductUI.h"
#include "InquirySalesProducts.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void program_exit();
void doTask();

// 변수 선언
FILE* in_fp;
FILE* out_fp;
vector<User> users;
int nowUserIndex;

int main()
{
    in_fp=fopen(INPUT_FILE_NAME, "r+");
    out_fp=fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    User* nowUser=  new User("lee", "123456", "idid", "pwpw");
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
                    // 1.2 회원탈퇴 
                }
            }
            case 2:
            {
                switch(menu_level_2){
                    // 2.1 로그인
                    // 2.2 로그아웃
                }
            }
            case 3:
            {
                switch(menu_level_2){
                    // 3.1 판매 의류 등록
                    case 1:{
                        AddProductUI* addProductUI = new AddProductUI();
                        addProductUI -> createNewProduct(in_fp,out_fp,nowUser);
                        break;
                    }
                // 3.2 등록 상품 조회 
                    case 2:{
                        InquirySalesProducts* inquirySalesProducts=new InquirySalesProducts(out_fp, nowUser);
                        break;
                    }
                // 3.3 판매 완료 상품 조회
                    case 3:{
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                // 4.1 상품 정보 검색
                // 4.2 상품 구매
                // 4.3 상품 구매 내역 조회
                // 4.4 상품 구매 만족도 평가
                break;
            }
            
            case 5:
            {
                // 5.1 판매 상품통계
                break;
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

void program_exit()
{
    fprintf(out_fp,"6.1. 종료");
}