//홀수 짝수 판별 프로그램 (if문은 그냥 내가 추가로 써넣은거임여)
#include <stdio.h>

int main() {

	int remainder;
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	remainder = n % 2;

	printf("2로 나누었을 때 나머지 = %d\n", remainder);

	if (remainder == 0)	printf("입력하신 숫자는 짝수입니다.");
	else printf("입력하신 숫자는 홀수입니다.");

	return 0;
}