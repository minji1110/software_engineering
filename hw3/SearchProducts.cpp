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