#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double x, y, result;
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%lf %lf", &x, &y);

	result = x + y;
	printf("%lf + %lf = %lf\n", x, y, result);
	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);
	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);
	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);
	//result = x % y;
	//printf("%lf % %lf = %lf\n", x, y, result); //������ ����� ������(int)�� ����,
												 //             �Ǽ���(double)������ �Ұ���

	return 0;
}