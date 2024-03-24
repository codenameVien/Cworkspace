///* strlen()함수는 주어진 문자열의 길이를 반환 */
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char s[] = "abcdefgh"; // 문자열 "abcdefgh"를 선언하고 
//	                       // 그 값을 문자 배열 s에 저장
//	int len = strlen(s); // strlen 함수는 문자열 s의 길이를 구하고 그 값을 len에 저장
//	                     // 문자열의 길이는 종료 문자 \0이 나타나기 전까지의 문자 수를 말함
//	                        // 즉 "abcdefgh"의 문자 수인 8을 반환
//
//	printf("문자열의 %s의 길이 = %d\n", s, len); // 문자열 s와 그 길이 len을 출력
//
//	return 0;
//}