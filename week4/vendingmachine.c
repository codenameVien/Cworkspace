//자판기 프로그램 (500,100,50,10원)
#include <stdio.h>

int main() {

	int money, price, change; // 투입한 돈, 물건값, 거스름돈 

	printf("투입한 돈 : ");
	scanf_s("%d", &money);
	printf("물건값 : ");
	scanf_s("%d", &price);

	change = money - price;
	printf("거스름돈 : %d\n\n", change);


	int coin500s = change / 500;
	change = change - 500 * coin500s;
	int coin100s = change / 100;
	change = change - 100 * coin100s;
	int coin50s = change / 50;
	change = change - 50 * coin50s;
	int coin10s = change / 10;
	change = change - 10 * coin10s;

	printf("500원 동전의 개수 : %d\n", coin500s);
	printf("100원 동전의 개수 : %d\n", coin100s);
	printf("50원 동전의 개수 : %d\n", coin50s);
	printf("10원 동전의 개수 : %d\n", coin10s);

	return 0;
}