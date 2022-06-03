#include "BuyProduct.h"
#include "BuyProductUI.h"
#include "Product.h"
#include "User.h"

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