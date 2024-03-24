//영상 영하
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int temperature;

	printf("온도를 입력하시오 : ");
	scanf("%d", &temperature);

	if (temperature > 0) // { temperature 가 0보다 크면 아래 문장을 실행
		printf("영상의 날씨입니다.\n");
	// }

	else // { 
		printf("영하의 날씨입니다.\n");
	// }

	printf("현재 온도는 %d도입니다.\n", temperature); //항상 실행

	return 0;
}