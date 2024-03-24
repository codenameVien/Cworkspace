//최대 공약수 찾기
#include <stdio.h>

int main() {
	int x, y, r; // x: 큰수, y: 작은수, r: x%y(x/y의 나머지)

	printf("두 개의 정수를 입력하시오(큰 수, 작은 수) : ");
	scanf_s("%d%d", &x, &y);

	while (y != 0) {
	//y가 0이 아닐 때까지 반복 (즉, 나머지(r) = 0 이 나오는 식이 마지막 식)
		r = x % y;
		x = y;
		y = r;

	}
	printf("최대 공약수는 %d입니다.\n", x);

	return 0;
}