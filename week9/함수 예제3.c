// ������ �ŵ�������(x^y)�� ����ϴ� �Լ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ��� �����Ѵ�
int get_integer() {

	int value;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &value);

	return value;
}


// �Լ��� �����Ѵ�
/* ������ power �Լ��� �� ���� ���� ���� x, y�� �޾� x�� y�� �ŵ������� ���� ��ȯ�� 
   �Լ� ���ο����� result  ������ ����Ͽ� ���� ������ �ݺ��ϸ� ���� ���� �����*/
int power(int x, int y) {

	int i;
	long result = 1;

	for (i = 0; i < y; i++)
		result *= x;  // result = result * x

	return result;
}


int main() {

	int x = get_integer(); // �Լ��� ȣ���Ͽ� ���� x�� �Է¹���
	int y = get_integer(); // �Լ��� ȣ���Ͽ� ���� y�� �Է¹���
	int result = power(x, y); // power�Լ��� ȣ���Ͽ� �ŵ����� ���� ����ϰ� �̸� result������ ������

	printf("%d�� %d�� = %d \n", x, y, result); // �ŵ����� ���� ��� ���

	return 0;
}