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

	vector<User>::iterator iteratorUser;
	vector<Product>::iterator iteratorPro;
	for (iteratorUser = user->begin(); iteratorUser != user->end(); iteratorUser++) {
		vector<Product> pro = iteratorUser->getSalesProducts();
	
		for (iteratorPro = pro.begin(); iteratorPro != pro.end(); iteratorPro++) {
			if (iteratorPro->getProductName() == name)
			{
				iteratorPro->setTotalSatisfiction(satisfiction);
			
			return iteratorPro->getSellerID();
			break;
		}
			
		}

	}
	return "mbc"; // �ӽ�

	
}