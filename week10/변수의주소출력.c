#include <stdio.h> 

int main(){

	int i = 10;
	char c = 69;
	float f = 12.3;

	/* 여기서 %u 는 %d 와 같지만 unsigned라 그럼!! */
	printf("i(%d)의 주소: %u\n", i, &i); // 변수 i의 값과 주소 출력
	printf("c(%c)의 주소: %u\n", c, &c); // 변수 c의 값과 주소 출력
	printf("f(%f)의 주소: %u\n", f, &f); // 변수 f의 값과 주소 출력
	
	return 0;
}