#include "Product.h"
#include "SearchProducts.h"
#include "SearchProductsUI.h"
#include <vector>
#include "ProductCollection.h"
#include "User.h"

#include "Product.h"

using namespace std;

/*
�Լ� �̸� : getProductDetail
��� : ��ǰ���� �Է��ϸ� �ش��ǰ�� ã�� ��ȯ�Ѵ�.
���� ���� : ��ǰ��, ����������
��ȯ ���� : �ش�Product
*/
Product  SearchProducts::getProductDetail(string name, vector<User> &user) {

 
    vector<Product>::iterator iteratorProduct;
    vector<User>::iterator iteratorUser;
    Product k;
    
    for (int i = 0; i < user.size(); i++) {
        vector<Product> products = user[i].getSalesProducts();
        for (int j = 0; j < products.size(); j++ ){
            Product product = products[j];
            if (product.getProductName() == name)
                return product;
            
        }
    }
    return k;
}