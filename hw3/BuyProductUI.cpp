#include "BuyProductUI.h"
#include "BuyProduct.h"

/*
	�Լ� �̸� : BuyProductUI::buyProduct
	��� : �Ǹ���ID, ��ǰ���� ����Ѵ�.
	���� ���� : ��� ���� ������, �Ǹ���ID ��ǰ��:string
	��ȯ ���� : ����
*/
void BuyProductUI::buyProduct(FILE* out_fp, string sellerID, string productName)
{
    fprintf(out_fp, "4.2. ��ǰ ����\n");
        fprintf(out_fp, "> %s %s \n", sellerID.c_str(), productName.c_str());
    }

