//���� ���
//���� �ٶ�,, �� ������
#include <stdio.h> 
#include <math.h> //pow �̿��� ���� 

int main(void) {

	int init_money = 24;
	double interest = 0.06;
	int years = 382;

	double money = init_money * pow((1.0 + interest), years);

	printf("%d�� ���� ������=%f\n", years, money);

	return 0;

}