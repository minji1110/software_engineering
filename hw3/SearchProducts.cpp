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
Product*  SearchProducts::getProductDetail(string name, vector<User> &user, int & sellerIndex,vector<Product>& allProducts, Product* searchedProduct) {

    Product* matchedProduct=NULL;
    vector<Product>::iterator iteratorProduct;
    string productName=name.c_str();

     for(iteratorProduct=allProducts.begin(); iteratorProduct!=allProducts.end();++iteratorProduct){
            string compareName=iteratorProduct->getProductName().c_str();

            if ((compareName.compare(productName)==0) && iteratorProduct->getRemainingQuantity() != 0){

                matchedProduct=&(*iteratorProduct);
                *searchedProduct=*matchedProduct;
                return matchedProduct;
            }
        }
    
    return matchedProduct;
}