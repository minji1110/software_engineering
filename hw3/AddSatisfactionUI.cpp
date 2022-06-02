#include "AddSatisfactionUI.h"
#include "AddSatisfaction.h"
using namespace std;



void AddSatisfactionUI::addSatisfaction(FILE* in_fp, FILE* out_fp, vector<User>* user) {
	string productname;
	string sellerID;
	int satisfaction;
	fscanf(in_fp, "%s %d", productname, satisfaction);

	AddSatisfaction* addsatisfaction = new AddSatisfaction();

	Product product = addsatisfaction->addSatisfaction(productname, satisfaction, user);
	fprintf(out_fp, "4.4 구매만족도 평가\n");
	fprintf(out_fp, "> %s %s %d %d\n", sellerID.c_str(), productname.c_str(), satisfaction);


}
;