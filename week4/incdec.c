#include <stdio.h>

int main() {
	int x, y;

	x = 1; //x=1;
	y = ++x; //x=2, y=2;
	printf("x=%d y=%d\n", x, y);

	y = x++; // x=3, y=2
	printf("x=%d y=%d\n", x, y); //x=3, y=2

	return 0;
}