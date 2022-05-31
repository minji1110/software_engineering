#pragma once 
#include<iostream>

using namespace std;

class Product
{
private:
    string productName;     //��ǰ��
    string companyName;     //����ȸ���
    int price;              //����
    int salesQuantity;      //�Ǹż���
    int remainingQuantity;  //������
    int satisfiction;       //���Ÿ�����    

public:
    string getProductName();
    string getCompanyName();
    int getPrice();
    int getSalesQuantity();
    int getRemainingQuantity();
    int getSatisfiction();

    void createProduct(string, string, int, int);
};