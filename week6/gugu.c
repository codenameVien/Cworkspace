#include <stdio.h>

int main() {

	int i, k;
	for (i = 1; i <= 9; i++) {
    //i를 1~9까지 9번 반복
		for (k = 1; k <= 9; k++) {
		//j를 1~9까지 9번 반복
			printf("%d x %d = %d \n", i, k, i * k);
		}
	}
	return 0;
}