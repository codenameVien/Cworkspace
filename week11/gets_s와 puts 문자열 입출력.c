//#include <stdio.h>
//
//int main() {
//
//	char name[100];
//	char address[100];
//	
//	printf("이름이 어떻게 되시나요? ");
//
//	gets_s(name, 99); // 사용자로부터 입력 받은 문자열을 name 배열에 저장
//	                  // gets_s 함수는 두 개의 인자를 받음
//	                  //  첫 번째 인자는 저장할 배열의 이름, 두 번째 인자는 저장할 문자열의 최대 길이
//
//	printf("어디 사시나요? "); // 사용자에게 주소를 입력하라는 메시지를 출력
//	gets_s(address, 99); // 입력 받은 문자열을 address 배열에 저장
//
//	printf("안녕하세요, %s에 사는 %s씨. \n", address, name); // printf 함수를 이용하여 저장된 name과 address를 출력
//
//	return 0;
//}