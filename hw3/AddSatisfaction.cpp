#include "AddSatisfaction.h"
#include "Product.h"
#include "User.h"

/*�Լ� �̸� : AddSatisfaction::addSatisfaction
��� : ���Ÿ������� product�� �߰��ϰ� �Ǹ���ID�� ��ȯ�޴´�.
���� ���� : �Է� ���� ������, ��� ���� ������, user �ּ�
��ȯ ���� : sellerID strig

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