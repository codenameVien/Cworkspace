//1. 배열 prices[]의 원소를 초기화한다.
//2. 일단 첫 번째 원소를 최소값 minium이라고 가정한다.
//3. for (i = 1; i < 배열의 크기; i++)
//	     if (prices[i] < minimum)
//	         minimum = prices[i]
//4. 반복이 종료되면 minimum에 최소값이 저장된다

#include <stdio.h>
#define SIZE 10 

int main() {

	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 9 }; // 배열의 원소 선언과 동시에 초기화
	int i, minimum; //minimum : 배열 prices의 [0]번째(첫번째) 원소 나타냄 , i : minimum과 비교될 배열prices의 두번째~마지막값
	printf("[");
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", prices[i]);
	} //prices 배열에 들어있는 원소들을 모두 출력
	printf("]\n");

	minimum = prices[0]; // minimum을 배열prices의 [0]번째(첫번째) 원소라 가정한다.
	for (i = 1; i < SIZE; i++) /*prices[SIZE}하면 오버바운드 - prices[SIZE]가 아무거나 되므로? 일단 암튼 아님 */ {
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("최솟값은 %d입니다.\n", minimum);
	return 0;
}