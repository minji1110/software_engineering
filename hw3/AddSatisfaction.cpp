#include "AddSatisfaction.h"
#include "Product.h"
#include "User.h"

/*함수 이름 : AddSatisfaction::addSatisfaction
기능 : 구매만족도를 product에 추가하고 판매자ID를 반환받는다.
전달 인자 : 입력 파일 포인터, 출력 파일 포인터, user 주소
반환 인자 : sellerID strig

*/
string AddSatisfaction::addSatisfaction(string name, int satisfiction, vector<User> *user)
{

	vector<User>::iterator us;
	vector<Product>::iterator iteratorPro;
	for (us = user->begin(); us != user->end(); us++) {
		vector<Product> pro = us->getSalesProducts();
	
		for (iteratorPro = pro.begin(); iteratorPro != pro.end(); iteratorPro++) {
			if (iteratorPro->getProductName() == name)
			{
				iteratorPro->setTotalSatisfiction(satisfiction);
			
			return iteratorPro->getSellerID();
		}
			
		}

	}
	return "0";

	
}