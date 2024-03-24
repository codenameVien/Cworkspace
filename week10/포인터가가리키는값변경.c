/* 포인터가 가리키는 값 변경 */
#include <stdio.h>

int main() {

	int number = 10; // 정수형 변수 number 선언 후 10으로 초기화
	int* p = &number; // 정수형 포인터 변수 p 선언 후 number의 메모리 주소 할당
	printf("변수 number의 값 = %d\n", number); // number 변수의 값을 출력
	                                          // 초기값인 10이 출력됨


	*p = 20; // 포인터 p가 가리키는 메모리 주소에 저장된 값(10)을 20으로 변경
	         // 이 연산은 실질적으로 number의 값을 20으로 변경하는 것과 동일
	printf("변수 number의 값 = %d\n", number); // number 변수의 값을 다시 출력
	                                          // 값이 변경됐으므로 20이 출력됨

	return 0;
}