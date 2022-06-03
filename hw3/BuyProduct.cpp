#include "BuyProduct.h"
#include "BuyProductUI.h"
#include "Product.h"
#include "User.h"


/*
	함수 이름 : BuyProduct::BuyProduct
	기능 : 검색한 상품의 정보를 받아오고 남은수량 --, 구매목록에 추가한다.
	전달 인자 : 출력 파일 포인터, User::vector[*], 상품위치 정수
	반환 인자 : 없음
*/
BuyProduct::BuyProduct(FILE* out_fp, vector<User>& user, int i, int j) {

	string sellerID, productName, companyname;
	int price, quantity;


	vector<Product> product = user[i].getSalesProducts();
	productName = product[j].getProductName();

	price = product[j].getPrice();
	quantity = product[j].getRemainingQuantity();
	product[j].setQuantity();
	user[i].addNewBoughtProduct(productName, companyname, price, quantity);

	BuyProductUI* buyProductUI = new BuyProductUI();
	buyProductUI->buyProduct(out_fp, sellerID, productName);


}