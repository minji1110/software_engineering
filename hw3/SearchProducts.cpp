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
Product  SearchProducts::getProductDetail(string name, vector<User> *user) {

    string productname = name;
 
    vector<Product>::iterator iteratorProduct;
    vector<User>::iterator iteratorUser;
    Product k;

    for(iteratorUser = user->begin(); iteratorUser != user->end(); iteratorUser++){
        vector<Product> product = iteratorUser->getSalesProducts();
        for (iteratorProduct = product.begin(); iteratorProduct != product.end(); iteratorProduct++)
        {
            if (iteratorProduct->getProductName() == productname)
                k = *iteratorProduct;
                return *iteratorProduct;
                break;
            
        }
    }
    return k;
  
}