#define _CRT_SECURE_NO_WARNINGS
#include "AddSatisfactionUI.h"
#include "AddSatisfaction.h"
using namespace std;

/*함수 이름 : AddSatisfactionUI::addSatisfaction
기능 : 구매만족도를 Product에 추가한다.
전달 인자 : 입력 파일 포인터, 출력 파일 포인터, user 주소
반환 인자 : 없음

*/
void AddSatisfactionUI::addSatisfaction(FILE* in_fp, FILE* out_fp, vector<User>& user) {
	string productname;
	string sellerID;
	int satisfaction = 0;
	fscanf(in_fp, "%s %d", productname, &satisfaction);

	AddSatisfaction* addsatisfaction = new AddSatisfaction();

	sellerID = addsatisfaction->addSatisfaction(productname, satisfaction, &user);
	fprintf(out_fp, "4.4 구매만족도 평가\n");
	fprintf(out_fp, "> %s %s %d\n", sellerID, productname, satisfaction);


}
