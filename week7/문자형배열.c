//7주차 16p +좀 변형 됨요
#include <stdio.h>
#define SIZE 26

int main() {

	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;

	for (i = 0; i < SIZE; i++)
		printf("codes[%d] : %d(%c)\n", i, codes[i], codes[i]);
	printf("\n");

	return 0;
}