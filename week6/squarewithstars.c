//별(*)로 네모 그리기 (중첩 for문)

#include <stdio.h>

int main() {

	int x, y;

	for (y = 0; y < 5; y++) {
	//y축 방향으로 5번 반복

		for (x = 0; x < 10; x++)
		//x축 방향으로 10번 반복
			printf("*");

		printf("\n");
	}
	return 0;
}