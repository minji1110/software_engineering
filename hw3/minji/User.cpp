#include "User.h"
#include "Product.h"

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
vector<Product> User::getSalesProducts(){
    return this->salesProductCollection.getSalesProducts();
}

/*
    함수 이름 : User::getSoldProducts
    기능 : 판매 완료 상품을 조회한다.
    전달 인자 : 없음
    반환 인자 : 판매 완료 상품 리스트
*/
vector<Product> User::getSoldProducts(){
    return this->salesProductCollection.getSoldProducts();
}