#pragma once 
#include <iostream>
#include "ProductCollection.h"

using namespace std;

class User
{
    private:
        string name;            // 회원명
        string personalNumber;  // 주민번호
        string id;              // 아이디
        string password;        // 비밀번호
        ProductCollection salesProductCollection; // 판매 상품 목록
    
    public:
        void addNewSalesProduct(string,string,int,int); // 판매 상품 등록
        vector<Product> getSalesProducts();   // 판매 상품 조회
        vector<Product> getSoldProducts();    // 판매 완료 의류 조회

        //임시로 만듦
        User(string name, string personalNumber, string id, string password){
            this->name=name;
            this->personalNumber=personalNumber;
            this->id=id;
            this->password=password;

            ProductCollection *productCollection=new ProductCollection();
            this->salesProductCollection=*productCollection;
        }
};