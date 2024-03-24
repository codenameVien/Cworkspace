//<버블정렬 핵심 코드>
//int list[8] = { 10, 5, 8, 9, 6, 4, 1, 2 };
//for (k = 0; k < 8; k++) {
//	for (i = 0; i < 7; i++) {
//		if (list[i] > list[i + 1]) {
//			 //list[i] 와 list[i+1]을 교환하는 코드
//			tmp = list[i];
//			list[i] = list[i + 1];
//			list[i + 1] = tmp;
//		}
//	}
//}

#include <stdio.h>
#define SIZE 8

int main() {
	
	int i, k; // k : tmp 처럼 교환을 위해 추가로 만들어준 공간
	int list[SIZE] = { 10,5,8,9,6,4,1,2 };

	///배열의 요소를 정렬한다.
	for (k = 0; k < SIZE; k++) {  //8번 비교
		for (i = 0; i < SIZE-1; i++) {  //7번 비교 왜지?>
			if (list[i] > list[i + 1]) {   //크기 순이 아니면
				//서로 교환한다
				k = list[i];
				list[i] = list[i + 1];
				list[i + 1] = k;
			}
			/* 반복 과정 어케 보여주지,,,,? 일단 밑에거는 아닌듯
			while (i < SIZE - 1) {
				for (i = 0; i < SIZE; i++)
					printf(" %d ", list[i]);
				if (i = SIZE) break;

			}*/
		}
	}
	//배열의 요소를 출력한다.
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", list[i]);
	}
	return 0;
}