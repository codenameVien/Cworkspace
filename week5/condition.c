/// 조건 연산자 ? ///
//// ? 앞의 조건이 참이면 :(세미콜론)앞의 값을 출력
//// ? 앞의 조건이 거짓이면 : 뒤의 값을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("첫번째 수 = ");
	scanf("%d", &x);
	printf("두번째 수 = ");
	scanf("%d", &y);

	printf("큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);
}