/* 배열을 함수에 인수로 넘기는 방법과 배열 원소에 접근하는 방법 */
// 배열의 이름은 첫 번째 원소의 주소를 가리키는 포인터이므로, 
// 배열 이름을 통해 함수에 배열을 인수로 넘길 수 있고, 
//넘겨받은 포인터를 통해 배열의 원소에 접근할 수 있음.
#include <stdio.h>

// 정수형 포인터 ptr를 매개변수로 가지는 sub 함수를 선언
/* ptr은 넘겨받은 배열의 첫 번째 원소를 가리키는 포인터 */
void sub(int* ptr) // == void sub(int ptr[])
{
	printf("%d\n", ptr[10]); // ptr를 통해 11번째 원소를 출력
	                         // ptr[i]는 *(ptr + i)와 동일하므로 
	                         // large_data[10]의 값과 같음
}

int main() {

	// 정수형 배열 large_data를 선언하고 초기화
	int large_data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	sub(large_data); // sub 함수에 배열 large_data를 인수로 넘김
	                 // large_data는 배열의 첫 번째 원소 large_data[0]의 주소를 가리킴

	return 0;
}