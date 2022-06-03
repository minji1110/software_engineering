#pragma once 
#include <iostream>
#include <vector>
#include "ProductCollection.h"
#include "BoughtProductCollection.h"

using namespace std;

class User
{
private:
    string name;            // 회원명
    string personalNumber;  // 주민번호
    string id;              // 아이디
    string password;        // 비밀번호
    ProductCollection salesProductCollection; // 판매 상품 목록
    BoughtProductCollection boughtProductCollection;

public:
    // 생성자
    User(){};
    User(string name, string personalNumber, string id, string password)
    {
        this->name = name;
        this->personalNumber = personalNumber;
        this->id = id;
        this->password = password;
    }
    string getId(){
        return this->id;
    }
    string getPassword(){
        return this->password;
    }
    static void addNewUser(string name, string personalNumber, string id, string password, vector<User> &user);
    void deleteUser(vector<User> &user, int &nowUserIndex);
    void getUser(string id, string password, vector<User> &user, User* nowUser, int &nowUserIndex);
    void addNewSalesProduct(string,string,int,int); // 판매 상품 등록
    void addNewBoughtProduct(string, string, int, int); // 구매한 상품등록
    vector<Product> getSalesProducts();   // 판매 상품 조회
    vector<Product> getSoldProducts();    // 판매 완료 의류 조회
    vector<Product> getSalesEstimations(); // 상품 판매 통계
    vector<Product> getBoughtProducts();
};