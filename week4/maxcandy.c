#include <stdio.h>

int main() {
	int money;
	int candy_price;

	printf("���� ������ �ִ� �� : ");
	scanf_s("%d", &money);
	printf("ĵ���� ���� : ");
	scanf_s("%d", &candy_price);

	//�ִ��� �� �� �ִ� ���� ��
	int n_candies = money / candy_price;
	printf("�ִ�� �� �� �ִ� ĵ���� ���� = %d\n", n_candies);

	//������ �����ϰ� ���� ��
	int change = money - candy_price * n_candies;
	printf("ĵ�� ���� �� ���� �� = %d\n", change);

	return 0;
}