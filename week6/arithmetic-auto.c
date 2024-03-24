//산수 문제 자동 출제 프로그램

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, ans; //ans는 answer임..
	printf("산수 문제를 자동으로 출제합니다. \n");
	srand(time(NULL));

	while (1) {
		int x = rand() % 100; //0~99사이의 랜덤 숫자(난수)
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf_s("%d", &ans);

		if (ans == x + y) {
			printf("맞았습니다. \n");
			break; //맞았으면 반복문 탈출
		}

		else
			printf("틀렸습니다.\n");
		    //틀리면 무한 반복이네
	}
	return 0;
}