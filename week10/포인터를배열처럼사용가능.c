// 이 코드는 배열과 포인터의 관계를 보여줌
  // 배열은 메모리 상에 연속적으로 배치되는데, 배열의 이름은 배열의 첫번째 원소의 주소를 가리키는 포인터와 같다
  // 즉, 이코드에서 a는 배열의 첫 번째 원소 a[0]의 주소를 가리킴
#include <stdio.h>

int main() {
 
	int a[] = { 10, 20, 30, 40, 50 }; // 정수형 배열 a를 선언하고 초기화
	                                  // 배열의 각 원소는 10,20,30,40,50
	int* p; // 정수형 포인터 p 선언

	p = a; // 포인터 p에 배열 a의 주소 할당
	         // 이때 a는 배열의 첫 번째 원소 'a[0]'의 주소를 가리키므로,
	         // p는 이제 배열 a의 첫 번째 원소를 가리키게 된다 !!

	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]); // 배열 a의 첫 세 원소를 출력
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]); // 포인터 p를 통해 배열 a 의 첫 세 원소 출력
	                                                          // 이때 p[i]는 *(p+i)와 동일하므로 a[i]의 값과 같음

	return 0;
}