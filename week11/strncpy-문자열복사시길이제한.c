///* ! 토막 상식 ! */
//// strncpy()이 strcpy()보다 더 안전한 함수 !!!!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char src[] = "Hello"; // 문자배열 src 선언 후 거기에 문자열 "Hello" 저장
//	char dst[6]; // 크기가 6인 문자배열 dst 선언
//
//	strncpy(dst, src, 6); // strncpy() 함수를 사용하여 src에서 dst로 6개 문자를 복사
//	                      // 만약 원본 문자열의 길이가 복사할 길이보다 짧으면, 나머지 공간은 '\0'으로 채워짐
//	printf("복사된 문자열 = %s\n", dst);
//
//	return 0;
//}