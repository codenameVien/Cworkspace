//while문을 이용한 구구단 출력 프로그램

#include <stdio.h>

int main() {
	int n;
	int i = 1;

	printf("구구단 중에서 출력하고 싶은 단을 입력하세요 : ");
	scanf_s("%d", &n);

	while (i <= 9) {
		printf("%d*%d=%d \n", n, i, n * i);
		i++;
	}
	return 0;
}