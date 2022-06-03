#define _CRT_SECURE_NO_WARNINGS
#include "AddSatisfactionUI.h"
#include "AddSatisfaction.h"
using namespace std;

/*�Լ� �̸� : AddSatisfactionUI::addSatisfaction
��� : ���Ÿ������� Product�� �߰��Ѵ�.
���� ���� : �Է� ���� ������, ��� ���� ������, user �ּ�
��ȯ ���� : ����

*/
void AddSatisfactionUI::addSatisfaction(FILE* in_fp, FILE* out_fp, vector<User>& user) {
	string productname;
	string sellerID;
	int satisfaction = 0;
	fscanf(in_fp, "%s %d", productname.c_str(), &satisfaction);

	AddSatisfaction* addsatisfaction = new AddSatisfaction();

	sellerID = addsatisfaction->addSatisfaction(productname, satisfaction, &user);
	fprintf(out_fp, "4.4 상품 구매만족도 평가\n");
	fprintf(out_fp, "> %s %s %d\n", sellerID.c_str(), productname.c_str(), satisfaction);

}
