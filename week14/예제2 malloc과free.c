// 동적 메모리 할당을 통해 정수형 배열을 생성하고, 그 배열에 값을 할당하며, 배열의 모든 요소를 출력함
#include <stdio.h>
#include <stdlib.h>

int main() {

	int* pi; // 정수형 포인터 pi 선언

	pi = (int*)malloc(5 * sizeof(int)); // malloc함수로 메모리 동적 할당
	if (pi == NULL) { 
		printf("메모리 할당 오류\n");
		exit(1);
	}

	// 각 메모리 위치에 정수 값 저장 
	// '정수형' 포인터이기에 실제로는 4바이트 씩 증가
	*pi = 1; // pi[0] = 1; 와 같은 의미
	*(pi + 1) = 2; // pi[1] = 2;
	*(pi + 2) = 3; // pi[2] = 3;
	*(pi + 3) = 4; // pi[3] = 4;
	*(pi + 4) = 5; // pi[4] = 5;

	int i = 0;
	for (i = 0; i < 5; i++) // 배열의 요소를 순차적으로 출력
		printf("%d ", pi[i]); // 입력은 포인터로 받았지만 출력은 배열(array)로

	free(pi); // malloc 함수를 통해 동적할당한 메모리를 해제
	return 0;
}