#include <stdio.h>

int main() {

	int i, k;
	for (i = 1; i <= 9; i++) {
    //i�� 1~9���� 9�� �ݺ�
		for (k = 1; k <= 9; k++) {
		//j�� 1~9���� 9�� �ݺ�
			printf("%d x %d = %d \n", i, k, i * k);
		}
	}
	return 0;
}