// 헤더 선언
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include "User.h"
#include "SignUpUI.h"
#include "SignUp.h"
#include "SignOutUI.h"
#include "SignOut.h"
#include "LoginUI.h"
#include "Login.h"
#include "LogoutUI.h"
#include "Logout.h"
#include "AddProductUI.h"
#include "InquirySalesProducts.h"
#include "InquirySoldProducts.h"
#include "EstimateProducts.h"
#include "SearchProducts.h"
#include "SearchProductsUI.h"
#include "AddSatisfaction.h"
#include "AddSatisfactionUI.h"
#include "InquiryBoughtProducts.h"
#include "BuyProductUI.h"
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
vector <User> user; //전체 회원 리스트
User* nowUser = new User(); //현재 로그인한 회원
int nowUserIndex;   //현재 로그인한 회원의 index
Product* nowProduct = new Product(); // 현재 구매중인 상품
int nowProductIndex; // 현재 상품 index


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
            case 1:{
                switch(menu_level_2){
                    case 1:{  // 1.1 회원가입
                        SignUpUI* signUpUI = new SignUpUI();
                        signUpUI->signUp(in_fp, out_fp, user);
                        break;
                    }
                    case 2:{  // 1.2 회원탈퇴
                        SignOutUI* signOutUI = new SignOutUI();
                        signOutUI->signOut(out_fp, user, nowUser, nowUserIndex);
                        break;
                    }
                }
                break;
            }
            case 2:{
                switch(menu_level_2){
                    case 1:{  // 2.1 로그인
                        LoginUI* loginUI = new LoginUI();
                        loginUI->login(in_fp, out_fp, user, nowUser, nowUserIndex);
                        break;
                    }
                    case 2:{  // 2.2 로그아웃
                        LogoutUI* logoutUI = new LogoutUI();
                        logoutUI->logout(out_fp, nowUser);
                        break;
                    }
                }
                break;
            }
            case 3:{
                switch(menu_level_2){
                    case 1:{  // 3.1 판매 의류 등록
                        AddProductUI* addProductUI = new AddProductUI();
                        addProductUI -> createNewProduct(in_fp,out_fp,nowUser);
                        break;
                    }
                    case 2:{  // 3.2 등록 상품 조회 
                        InquirySalesProducts* inquirySalesProducts=new InquirySalesProducts(out_fp, nowUser);
                        break;
                    }
                    case 3:{  // 3.3 판매 완료 상품 조회
                        InquirySoldProducts* inquirySoldProducts = new InquirySoldProducts(out_fp, nowUser);
                        break;
                    }
                }
                break;
            }
            case 4: {
                switch (menu_level_2) {
                case 1: {  // 4.1 상품 정보 검색
                    SearchProductsUI* searchProductUI = new SearchProductsUI;
                    searchProductUI->putProductName(in_fp, out_fp, user);
                    break;
                }
                case 2: {    // 4.2 상품 구매
                 
                    break;
                }
                case 3: {  
                    InquiryBoughtProducts* inquiryBoughtProducts = new InquiryBoughtProducts(out_fp, nowUser);
                    // 4.3 상품 구매 내역 조회
                    break;
                }
                case 4: {  
                    AddSatisfactionUI* addSatisfactionUI = new AddSatisfactionUI();
                    addSatisfactionUI->addSatisfaction(in_fp, out_fp, user);
                    // 4.4 상품 구매 만족도 평가

                    break;
                }
                }
              break;
            }
            case 5:{
                switch(menu_level_2){
                    case 1:{  // 5.1 판매 상품통계
                        EstimateProducts* estimateProducts=new EstimateProducts();
                        estimateProducts->estimateProducts(out_fp, nowUser);
                        break;
                    }
                }
                break;
            }
            case 6:{
                // 6.1 종료 
                program_exit();
                is_program_exit=1;
                break;
            }
        }
        fprintf(out_fp,"\n");
    }
}

                                         
void program_exit(){
    fprintf(out_fp,"6.1. 종료");
}