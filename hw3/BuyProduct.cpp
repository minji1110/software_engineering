#include "BuyProduct.h"
#include "BuyProductUI.h"
#include "Product.h"
#include "User.h"


/*
	�Լ� �̸� : BuyProduct::BuyProduct
	��� : �˻��� ��ǰ�� ������ �޾ƿ��� �������� --, ���Ÿ�Ͽ� �߰��Ѵ�.
	���� ���� : ��� ���� ������, User::vector[*], ��ǰ��ġ ����
	��ȯ ���� : ����
*/
BuyProduct::BuyProduct(FILE* out_fp, User* nowUser, Product* searchedProduct) {

	string sellerID, productName, companyname;
	sellerID=searchedProduct->getSellerID().c_str();
	productName = searchedProduct->getProductName().c_str();

	Product* foundProduct;
	vector<Product> salesProducts=nowUser->getSalesProducts();
	
	vector<Product>::iterator iteratorProduct;
     for(iteratorProduct=salesProducts.begin(); iteratorProduct!=salesProducts.end(); ++iteratorProduct){
            string compareName=iteratorProduct->getProductName().c_str();

            if ((compareName.compare(productName)==0)){	
				cout<<"found name="<<compareName<<endl;
				foundProduct = &(*iteratorProduct);
        }
	 }
	searchedProduct->setQuantity();
	foundProduct->setQuantity();

	nowUser->addNewBoughtProduct(searchedProduct);

	BuyProductUI* buyProductUI = new BuyProductUI();
	buyProductUI->buyProduct(out_fp, sellerID, productName);


}