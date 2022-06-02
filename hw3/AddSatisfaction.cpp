#include "AddSatisfaction.h"
#include "Product.h"
#include "User.h"
Product addSatisfaction(string name, int satisfiction, vector<User>* user)
{

	vector<User>::iterator us;

	for (us = user->begin(); us != user->end(); us++) {
		vector<Product> pro = us->getSalesProducts();
		vector<Product>::iterator iteratorPro;
		for (iteratorPro = pro.begin(); iteratorPro != pro.end(); iteratorPro++) {
			if (iteratorPro->getProductName() == name)
			{
				iteratorPro->setTotalSatisfiction(satisfiction);

			return *iteratorPro;
			break;
		}
			
		}

	}


	
}