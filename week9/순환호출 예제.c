//��ȯ ȣ�� ���� (�Լ��� �ڽ��� �ٽ� ȣ���ϴ� ��)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n); // �Լ� ���� ���� (�̸� �˷��ִ°� �����̴� �̳븶!!!!!!)

int main() {

	int x = 0, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x); // ����ڷκ��� ���� x �Է¹���

	result = factorial(x); // factorial �Լ� ȣ���Ͽ� �Է¹��� ������ ���丮�� ���
	printf("%d!�� %d�Դϴ�.\n", x, result);

	return 0;
}

// �Լ� ����
int factorial(int n) {

	printf("factorial(%d)\n", n);

	if (n <= 1) return 1; // n�� 1 ������ ��� 1�� ��ȯ
	else return n * factorial(n - 1); // �׷��� ���� ��� n�� factorial(n-1)�� ���� ��ȯ
} 
// �� �Լ��� ���(��ȯ)������(��� : �ϴ� ���𰡸� �����Ҷ� �ڱ⸦ ������ ��)  �ڽ��� ȣ���ϸ�, 
// �̷��� ����� ���� ���丮���� �����
// �Լ��� ȣ��� ������ n�� ���� ���� ��µ�