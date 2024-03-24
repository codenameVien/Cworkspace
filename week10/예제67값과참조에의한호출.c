/* 값에 의한 호출 - 함수에 변수를 전달 할 때 변수의 값을 복사해서 전달 !! */
/*               - 함수 내에서 해당 매개변수의 값을 변경하더라도 원본 변수에는 영향을 미치지 않음!!!! */
#include <stdio.h>

//함수 선언
/* 이 함수는 정수형 변수 value를 인자로 받음 */
void modify(int value) {

	value = 99; // value의 값을 99로 변경
	            // 하지만 이 변경은 함수 밖의 number변수에는 영향을 미치지 않는다
}

int main() {

	int number = 1;

	modify(number); // number의 값을 modify함수에 인자로 전달
	                // 이때 number의 값은 modify 함수의 value 변수에 "복사" 되어 전달됨

	printf("number = %d\n", number); // number의 값 출력
	                                 // modify함수에서 value값을 변경했으나
	                                 // 이는 number의 원래 값을 변경하지 않으므로
	                                 // 출력값은 여전히 1
	return 0;
}



///* 참조에 의한 호출 --함수에 변수를 전달할 때 변수의 주소를 변경함으로써 원본 데이터변경 !*/
//// + 기억할 것은 항상 main 함수가 가장 먼저 실행된다!! 
//#include <stdio.h>
//
//// 함수 선언
///* modify라는 함수를 선언하고, 이 함수는 정수형 포인터 ptr을 인자로 받음 */
//void modify(int* ptr) {
//
//	*ptr = 99; // ptr이 가리키는 변수의 값을 99로 변경 (매개변수를 통하여 원본을 변경)
//               // 이때 ptr은 main함수의 number변수의 주소를 가리키고 있음
//}
//
//int main() {
//
//	int number = 1; 
//
//	modify(&number); // modify함수에 number의 주소를 계산해서 전달(보냄)
//	                 // 이로써 modify함수에서는 number의 주소에 직접 접근하여 그 값을 변경 가능
//	
//	printf("number = %d\n", number); // number의 최종값 출력
//	                                 // modify 함수에서 number의 값을 99로 변경했으므로
//	                                 // 출력값은 99
//
//	return 0;
//}