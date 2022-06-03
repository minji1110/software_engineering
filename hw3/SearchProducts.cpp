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
Product  SearchProducts::getProductDetail(string name, vector<User> &user, int &in, int &jn) {

    Product k;
    
    for (int i = 0; i < user.size(); i++) {
        vector<Product> products = user[i].getSalesProducts();
        for (int j = 0; j < products.size(); j++ ){
            Product product = products[j];
            if (product.getProductName() == name)
            {
                in = i;
                jn = j;
                return product;
            }
            
        }
    }
    return k;
}