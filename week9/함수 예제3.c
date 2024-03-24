// 정수의 거듭제곱값(x^y)를 계산하는 함수 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수를 정의한다
int get_integer() {

	int value;

	printf("정수를 입력하세요 : ");
	scanf("%d", &value);

	return value;
}


// 함수를 정의한다
/* 정의한 power 함수는 두 개의 정수 인자 x, y를 받아 x를 y번 거듭제곱한 값을 반환함 
   함수 내부에서는 result  변수를 사용하여 곱셈 연산을 반복하며 최종 값을 계산함*/
int power(int x, int y) {

	int i;
	long result = 1;

	for (i = 0; i < y; i++)
		result *= x;  // result = result * x

	return result;
}


int main() {

	int x = get_integer(); // 함수를 호출하여 정수 x를 입력받음
	int y = get_integer(); // 함수를 호출하여 정수 y를 입력받음
	int result = power(x, y); // power함수를 호출하여 거듭제곱 값을 계산하고 이를 result변수에 저장함

	printf("%d의 %d승 = %d \n", x, y, result); // 거듭제곱 연산 결과 출력

	return 0;
}