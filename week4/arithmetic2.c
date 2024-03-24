#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double x, y, result;
	printf("두 개의 정수를 입력하시오 : ");
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
	//printf("%lf % %lf = %lf\n", x, y, result); //나머지 계산은 정수형(int)만 가능,
												 //             실수형(double)에서는 불가능

	return 0;
}