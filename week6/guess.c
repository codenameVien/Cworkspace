//숫자 맞추기 게임 (랜덤변수 사용)
#include <stdio.h>

int main() {

	int answer;
	srand(time(NULL));
	answer = rand()%100; // 0~99 의 랜덤 숫자(난수) 
	int guess;
	int tries = 0;

	printf("숫자 맞추기 게임을 시작하겠습니다.\n");
	printf("0~99 사이의 숫자 중 하나가 정답입니다.\n");

	do {

		printf("\n정답을 추측하여 보세요: ");
		scanf_s("%d", &guess);
		tries++;  //시도횟수(tries)를 증가한다

		if (guess > answer) //사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 정답보다 높습니다.\n");

		if (guess < answer) //사용자가 입력한 정수가 정답보다 낮으면
			printf("제시한 정수가 정답보다 낮습니다.\n");

	} while (guess != answer);

	printf("정답입니다! 축하합니다.   (시도횟수=%d)", tries);

	return 0;
}