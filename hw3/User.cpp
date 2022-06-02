#include <iostream>
#include <vector>
#include "User.h"
#include "Product.h"

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

/*
    함수 이름 : User::addNewSalesProduct
    기능 : 새로운 의류 상품을 등록한다.
    전달 인자 : 상품명, 제작회사명, 가격, 수량
    반환 인자 : 없음
*/
void User::addNewSalesProduct(string productName, string companyName, int price, int quantity)
{
    Product* newProduct=new Product();
    newProduct->createProduct(productName, companyName, price, quantity);
    this->salesProductCollection.addNewSalesProduct(*newProduct);
}

/*
    함수 이름 : User::getSalesProducts
    기능 : 판매중인 의류상품을 조회한다.
    전달 인자 : 없음
    반환 인자 : 판매중인 상품 리스트
*/
vector<Product> User::getSalesProducts()
{
    return this->salesProductCollection.getSalesProducts();
}

/*
    함수 이름 : User::getSoldProducts
    기능 : 판매 완료 상품을 조회한다.
    전달 인자 : 없음
    반환 인자 : 판매 완료 상품 리스트
*/
vector<Product> User::getSoldProducts()
{
    return this->salesProductCollection.getSoldProducts();
}