/// ���� ������ ? ///
//// ? ���� ������ ���̸� :(�����ݷ�)���� ���� ���
//// ? ���� ������ �����̸� : ���� ���� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("ù��° �� = ");
	scanf("%d", &x);
	printf("�ι�° �� = ");
	scanf("%d", &y);

	printf("ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);
}