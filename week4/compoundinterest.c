//복리 계산
//복습 바람,, 걍 복붙함
#include <stdio.h> 
#include <math.h> //pow 이용을 위한 

int main(void) {

	int init_money = 24;
	double interest = 0.06;
	int years = 382;

	double money = init_money * pow((1.0 + interest), years);

	printf("%d년 후의 원리금=%f\n", years, money);

	return 0;

}