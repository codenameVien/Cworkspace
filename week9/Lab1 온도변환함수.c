/*함수 원형 사용하기*/
//화씨 온도를 섭씨 온도로 변환하여 반환하는 함수 FtoC()를 작성하고 테스트
#include <stdio.h>

double FtoC(double temp_f);  // FtoC "함수 원형 정의" 
                             /* ( 함수의 이름, 반환 타입, 매개변수의 타입을 미리 선언함
                                  이를 통해 컴파일러에게 함수에 대한 정보를 미리 알려줌 ) */

int main() {

	double c, f; // c: 섭씨온도를 저장할 변수, f: 화씨온도를 저장할 변수 선언
	f = 32.0; // f를 32.0 으로 초기화
	c = FtoC(f); // FtoC "함수 호출"

	printf("화씨온도 %f은 섭씨온도 %f에 해당한다. \n", f, c);

	return 0;
}

double FtoC(double temp_f) { // FtoC "함수 정의"

	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	
	return temp_c;
}
/* FtoC 함수는 화씨온도 temp_f를 입력받아 temp_c로 변환하고, 변환된 섭씨온도를 반환함 */