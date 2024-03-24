///* 사용자로부터 문자열 2개를 입력받아서 비교하는 프로그램 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char s1[80]; // 첫 번째 단어를 저장할 문자배열
//	char s2[80]; // en 번째 단어를 저장할 문자배열
//	int result;
//
//	printf("첫 번째 단어 입력 : ");
//	scanf("%s", s1);
//	printf("두 번째 단어 입력 : ");
//	scanf("%s", s2);
//
//	result = strcmp(s1, s2); 
//	if (result < 0)
//		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2); 
//	else if (result == 0)
//		printf("%s가 %s와 같습니다.\n", s1, s2); 
//	else
//		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2); 
//	
//	return 0;
//}