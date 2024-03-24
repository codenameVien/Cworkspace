///* < 핵심코드 >
//
//- 문자열 안의 글자들을 섞으려면 난수가 필요하다.
//- 두개의 난수를 발생시켜서 그 위치의 글자들을 서로 바꾸면 된다.
//	
//	for (i = 0; i<len; i++) {
//		int pos1 = rand() % len;
//		int pos2 = rand() % len; 
//		char tmp = s[pos1]; 
//		s[pos1] = s[pos2]; 
//		s[pos2] = tmp;
//	}
//
//
//
//
//-  do while 루프로 반복을 구현한다.
//
//	do {
//		scanf("%s", ans);
//	} while (strcmp(...) != 0);
//*/
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SOL "apple"
//
//int main() {
//
//	char s[100] = SOL; // 문자열 s는 "apple"을 값으로 갖는 SOL 매크로로 초기화됨
//	char ans[100]; // ans :사용자의 응답을 저장하는 문자열
//	int i, len;
//
//	len = strlen(s); // 문자열 s의 길이를 계산하고 이 값을 len에 저장
//
//
//	// 루프를 통해 문자열 s를 스크램블
//	for (i = 0; i < len; i++) { // : 이 과정을 문자열의 길이만큼 반복
//		int pos1 = rand()%len;
//		int pos2= rand() %len; // 문자열 내의 두 위치 pos1과 pos2를 무작위로 선택
//		char tmp = s[pos1];
//		s[pos1] = s[pos2]; // 두 위치에 있는 문자를 교환
//		s[pos2] = tmp;
//	}
//
//	do {
//		printf("%s 는 어떤 단어가 스크램블 된 것일까요? : ", s); // 스크램블된 단어 s를 보여줌
//		scanf("%s", ans);
//	} while (strcmp(ans, SOL) != 0);  // ans와 SOL의 값이 같지 않을 때
//	                                  // 올바른 단어("apple")를 입력할 때까지 이 과정을 반복
//
//	printf("축하합니다! \n");
//	return 0;
//}