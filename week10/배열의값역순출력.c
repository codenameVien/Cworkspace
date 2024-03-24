//포인터 사용하여 5개의 정수 입력 받아 역순으로 출력 
#include <stdio.h>

int main() {

	int array[5], i; // 5개의 정수를 저장할 수 있는 array 배열을 선언
	int *p = array; // 포인터 p를 선언하여 배열 array의 첫 번째 요소를 가리킴

	printf("5개의 정수를 입력하시오: "); 
	for (i = 0; i < 5; i++)
		scanf_s("%d", &array[i]); // 5개의 정수 입력값을 정수 배열(array)의 각 요소에 저장
	
	printf("역순: ");
	for (i = 4; i >= 0; i--)
		printf("%d ", *(p + i)); // 포인터 p를 사용하여 배열값 출력
	                               // *(p+i)는 p가 가리키는 주소에서 i만큼 떨어진 위치에 있는 값을 의미
								     // 배열의 마지막 요소부터 첫 요소까지 순서대로 출력
								 // *(p+i) 대신 p[i] 사용해도 됨!!!!!!!!! (배열의 첨자 :[]연산자)
	return 0;
}
/* 코드의 핵심은 포인터를 이용해 배열을 역순으로 접근 후 출력 */
//*(p + i)는 배열의 i번째 요소를 의미
  // 이를 이용하여 i를 감소시키면서 배열을 역순으로 접근 O
    // 이는 포인터와 배열 이름이 첫 번째 원소의 주소를 가리키는 것을 이용