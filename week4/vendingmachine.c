//���Ǳ� ���α׷� (500,100,50,10��)
#include <stdio.h>

int main() {

	int money, price, change; // ������ ��, ���ǰ�, �Ž����� 

	printf("������ �� : ");
	scanf_s("%d", &money);
	printf("���ǰ� : ");
	scanf_s("%d", &price);

	change = money - price;
	printf("�Ž����� : %d\n\n", change);


	int coin500s = change / 500;
	change = change - 500 * coin500s;
	int coin100s = change / 100;
	change = change - 100 * coin100s;
	int coin50s = change / 50;
	change = change - 50 * coin50s;
	int coin10s = change / 10;
	change = change - 10 * coin10s;

	printf("500�� ������ ���� : %d\n", coin500s);
	printf("100�� ������ ���� : %d\n", coin100s);
	printf("50�� ������ ���� : %d\n", coin50s);
	printf("10�� ������ ���� : %d\n", coin10s);

	return 0;
}