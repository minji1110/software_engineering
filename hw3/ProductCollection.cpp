#include "ProductCollection.h"
#include "Product.h"

/*
    함수 이름 : ProductCollection::addNewSalesProduct
    기능 : 새로 생성한 상품 객체를 전달받아, 회원의 판매 상품 목록에 추가한다.
    전달 인자 : Product
    반환 인자 : 없음
*/
void ProductCollection::addNewSalesProduct(Product newProduct)
{
    this->salesProducts.push_back(newProduct);
}

/*
    함수 이름 : ProductCollection::getSalesProducts
    기능 : 판매 상품 목록을 반환한다.
    전달 인자 : 없음
    반환 인자 : 판매 상품 목록
*/
vector<Product> ProductCollection::getSalesProducts() 
{
    return this->salesProducts;
}

/*
    함수 이름 : findIndex
    기능 : 판매 완료 상품 목록을 상품명의 오름차순으로 정렬하기 위해, 삽입 위치를 반환해주는 함수이다.
    전달 인자 : 판매 완료 상품 목록, 삽입할 Product
    반환 인자 : 삽입위치
*/
int findIndex(vector<Product> soldProducts, Product product)
{
    int index=0;
    string compareName; //비교할 상품의 상품명
    string insertName=product.getProductName().c_str(); //삽입할 상품의 상품명

    vector<Product>::iterator iterator;

    // soldProducts에 대해, 삽입할 상품의 상품명이 처음으로 더 작아지는 위치를 찾는다.
    for (iterator = soldProducts.begin(); iterator != soldProducts.end(); ++iterator){
        compareName=iterator->getProductName().c_str();

        if(compareName.compare(insertName) > 0){  // 삽입할 상품명이 더 작은 경우
            break; 
        } else{ // 삽입할 상품명이 더 큰 경우
            index++;    // index를 증가시키고 다음 값과 비교를 진행한다.
        }
    }
    return index;
}

/*
    함수 이름 : ProductCollection::getSoldProducts
    기능 : 판매 완료 상품 목록을 상품명의 오름차순으로 반환한다.
    전달 인자 : 없음
    반환 인자 : 판매 완료 상품 목록
*/
vector<Product> ProductCollection::getSoldProducts() 
{
    vector<Product> allProducts=this->salesProducts;    // 전체 의류 상품 목록
    vector<Product> soldProducts;                       // 판매 완료 의류 상품을 담을 벡터
        
    vector<Product>::iterator product;

    // 전체 목록에 대해, 남은수량이 0인 상품들을 soldProducts에 담는다.
    for (product = allProducts.begin(); product != allProducts.end(); ++product){   
        if(product->getRemainingQuantity() == 0){
            if(soldProducts.size() == 0){  // 벡터가 비어있는 경우, 바로 삽입한다.
                soldProducts.push_back(*product);  
            } else{  // 벡터가 차있는 경우
                int index=findIndex(soldProducts, *product); //오름차순 정렬을 위해, 들어갈 index를 찾는다.
                soldProducts.insert(soldProducts.begin()+index, *product);   //해당 index에 insert한다.
            }
        }
    }
    return soldProducts;
}

vector<Product> ProductCollection::estimateProduct() 
{
    vector<Product> allProducts=this->salesProducts;
    vector<Product>::iterator product;
    for (product = allProducts.begin(); product != allProducts.end(); ++product){   
        int averageSatisfiction = int(product->getTotalSatisfiction() / (product->getSalesQuantity()));
        product->setAverageSatisfiction(averageSatisfiction);
    }
    return allProducts;
} 