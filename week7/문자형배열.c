//7���� 16p +�� ���� �ʿ�
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