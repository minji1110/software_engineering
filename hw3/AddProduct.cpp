#include <iostream>
#include "AddProduct.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : AddProduct::addNewSalesProduct
    기능 : 새로운 상품을 생성한다. 전달 인자를 User 클래스에 전달한다.
    전달 인자 : 상품명, 제작회사명, 가격, 수량
    반환 인자 : 없음
*/
void AddProduct::addNewSalesProduct(User* user,string productName, string companyName, int price, int quantity)
{
    user->addNewSalesProduct(productName,companyName,price,quantity);
}