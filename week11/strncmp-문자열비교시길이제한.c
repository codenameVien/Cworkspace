//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char str[][5] = { "R2D2", "C3PO", "R2A6" }; // "R2D2", "C3PO", "R2A6" 이라는 문자열을 가진 3개의 요소를 가진 2차원 문자열 배열 str를 선언하고 초기화
//	int n; 
//
//	puts("R2 타입 드로이드 조회..."); // "R2 타입 드로이드 조회..." 라는 문장을 출력합니다.
//	
//	for (n = 0; n < 3; n++) // n이 0에서 2까지 순차적으로 증가하게 설정
//		if (strncmp(str[n], "R2xx", 2) == 0) // strncmp() 함수를 사용하여 문자열 str[n]의 처음 두 문자가 "R2xx"의 처음 두 문자와 일치하는지 확인   
//			printf("찾았음 %s \n", str[n]); // 만약 두 문자열의 처음 두 문자가 일치한다면
//	                                       // 해당 문자열을 출력
//
//	return 0;
//}