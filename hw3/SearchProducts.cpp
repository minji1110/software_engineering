#include "Product.h"
#include "SearchProducts.h"
#include "SearchProductsUI.h"
#include <vector>
#include "ProductCollection.h"
#include "User.h"

#include "Product.h"

using namespace std;

/*
함수 이름 : getProductDetail
기능 : 상품명을 입력하면 해당상품을 찾아 반환한다.
전달 인자 : 상품명, 벡터포인터
반환 인자 : 해당Product
*/
Product  SearchProducts::getProductDetail(string name, vector<User> *user) {

    string productname = name;
 
    vector<Product>::iterator pro;
    vector<User>::iterator use;
    Product k;

    for(use = user->begin(); use!= user->end(); use++){
        vector<Product> product = use->getSalesProducts();
        for (pro = product.begin(); pro != product.end(); pro++)
        {
            if (pro->getProductName() == productname)
                k = *pro;
                return *pro;
                break;
            
        }
    }
    return k;
  
}