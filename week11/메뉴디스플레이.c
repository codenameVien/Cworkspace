///* 문자열을 2차원 배열에 저장 */
//#include <stdio.h>
//
//int main() {
//
//	int i;
//	char menu[5][10] = {
//		"init",
//		"open",
//		"close",
//		"read",
//		"write"
//	};// 5개의 문자열(각각 "init", "open", "close", "read", "write")
//       // 을 저장하는 2차원 배열 menu를 선언하고 초기화
//	    // 이 배열은 5행 10열로 구성
//	     // 각 행은 문자열 하나를 저장
//
//	for (i = 0; i < 5; i++)
//		printf("%d번째 메뉴 : %s \n", i, menu[i]); // 배열 인덱스 i를 이용해 메뉴 항목의 번호를 출력
//	                                              // 배열 menu의 i행을 이용해 해당 메뉴 항목을 출력
//
//	return 0;
//}
//
///* 실행결과
//
//
//0번째 메뉴 : init
//1번째 메뉴 : open
//2번째 메뉴 : close
//3번째 메뉴 : read
//4번째 메뉴 : write
//
//
//*/