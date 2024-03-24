/* 포인터가 가리키는 값 참조 */
#include <stdio.h>

int main() {
	
	int number = 10; // number라는 이름의 정수형 변수를 선언하고 10으로 초기화
	int* p; // p라는 이름의 정수형 포인터 변수를 선언
	p = &number; // p에 number의 메모리 주소 할당(대입)


	printf("변수 number의 주소 = %u\n", &number); // 'number 변수의 메모리 주소' 출력 
	                         // 주소는 부호없는 정수 형태로 출력되기 때문에 %u 를 사용

	printf("포인터의 값 = %u\n", p); // '포인터 p의 값', 즉 'number의 주소' 를 출력
	                                // 이 값은 위의 출력과 동일해야 함!!!

	printf("변수 number의 값 = %d\n", number); // 'number 변수의 값', 즉 '10'을 출력

	printf("포인터가 가리키는 값 = %d\n", *p); // 포인터 p가 가리키는 메모리 주소에 저장된 값을 출력
	                                          // 이 값은 'number의 값(10)' 과 같아야 함!!!

	return 0;
}