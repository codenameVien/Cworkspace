//Ȧ�� ¦�� �Ǻ� ���α׷� (if���� �׳� ���� �߰��� ��������ӿ�)
#include <stdio.h>

int main() {

	int remainder;
	int n;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	remainder = n % 2;

	printf("2�� �������� �� ������ = %d\n", remainder);

	if (remainder == 0)	printf("�Է��Ͻ� ���ڴ� ¦���Դϴ�.");
	else printf("�Է��Ͻ� ���ڴ� Ȧ���Դϴ�.");

	return 0;
}