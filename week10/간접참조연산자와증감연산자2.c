#include <stdio.h>

int main() {

	int j = 0; // 정수형 변수 j 선언 후 0으로 초기화
	int num[4] = { 10, 20, 30, 40 }; // 정수형 배열 num을 선언 후 초기화
	                                 // 배열의 크기는 4, 각 요소는 10, 20, 30, 40 으로 초기화
	int* pnum = num; // 정수형 포인터 pnum 선언 후 num배열의 첫번째 요소의 주소로 초기화
	                 /* !!! 배열의 이름은 첫 번째 배열 원소의 주소 !!! */


	j = *pnum; // 'pnum이 가리키는 값', 즉 'num 배열의 첫번째 요소(10)' 을 j에 대입
	printf("j = %d, pnum = %p\n", j, pnum); // 'j의 값'과 'pnum의 값 (num배열의 첫번째 요소의 주소)'를 출력


	j = *++pnum; // 'pnum의 값'을 증가시킨 후 ( pnum++ )
	             // 그 주소가 가리키는 값을 j 에 대입
	             // pnum이 가리키는 주소는 num 배열의 두번째 요소의 주소가 됨
	printf("j = %d, pnum = %p\n", j, pnum); // j의 값과 증가된 pnum의 값(배열 num의 두번째 요소의 주소) 출력


	j = ++ * pnum; // pnum이 가리키는 값을 증가시킨 후 ( (*pnum)++ )
	               // 그 값을 j에 대입
	               // 이 시점에서 pnum은 num배열의 두번째 원소를 가리키고 있으므로
	                 // num 배열의 두번째 요소의 값은 21이 됨
	printf("j = %d, pnum = %p\n", j, pnum); // 증가된 j의 값과 pnum의 값(배열 num의 두번째 요소의 주소)를 출력

	return 0;
}