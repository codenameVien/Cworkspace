// 두 수 중에서 큰 수를 찾는 함수 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수를 정의한다
int get_integer() {

	int value;

	printf("정수를 입력하시오 : ");
	scanf("%d", &value);

	return value;
}


// 함수를 정의한다
/* 정의한 get_max 함수는 두 개의 정수 인자를 받아 더 큰 값을 반환하는 역할
   if 문을 사용하여 두 값 중 더 큰 값을 반환함 */
int get_max(int x, int y) {

	if (x > y) return(x);
	else return(y);
}


int main() {

	int a = get_integer(); // 함수 호출하여 정수를 a에 입력받음
	int b = get_integer(); // 함수 호출하여 정수 b 입력받음

	printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b)); // get_max 함수 사용하여 입력받은 두 수 중 더 큰 수를 찾고 이를 출력

	return 0;
}