//순환 호출 예제 (함수가 자신을 다시 호출하는 것)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n); // 함수 원형 정의 (미리 알려주는게 원형이다 이노마!!!!!!)

int main() {

	int x = 0, result;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x); // 사용자로부터 정수 x 입력받음

	result = factorial(x); // factorial 함수 호출하여 입력받은 정수의 팩토리얼 계산
	printf("%d!은 %d입니다.\n", x, result);

	return 0;
}

// 함수 정의
int factorial(int n) {

	printf("factorial(%d)\n", n);

	if (n <= 1) return 1; // n이 1 이하인 경우 1을 반환
	else return n * factorial(n - 1); // 그렇지 않은 경우 n과 factorial(n-1)의 곱을 반환
} 
// 이 함수는 재귀(순환)적으로(재귀 : 일단 무언가를 설명할때 자기를 포함한 것)  자신을 호출하며, 
// 이러한 방식을 통해 팩토리얼을 계산함
// 함수가 호출될 떄마다 n의 현재 값이 출력됨