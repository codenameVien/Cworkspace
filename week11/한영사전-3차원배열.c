////3차원 문자 배열을 이용하여 간단한 한영 사전을 구현하여 보자. 
////영어 사전은 영어 단어와 한글 단어의 묶음을 여러 개 저장해야 한다. 
////따라서 3차원 배열을 사용하면 편하게 구현할 수 있다
//
///*< 3차원 문자 배열 >
//영어 단어가 dic[index][0]에 저장되고 한글 설명은 dic[index][1]에 저장된다.
//	(예를 들어 dic[0][0] 은 “book”이고, dic[0][1]은 “책”이다.)
//
//	dic[WORDS][2][30]  - [WORDS] : 단어의 갯수, 
//					   - [2] : index 0에 영어단어 1에 한글단어 저장
//					   - [30] : 문자열의 최대 길이
//*/
//
///* 간단한 영-한 사전 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define WORDS 5 // WORDS 매크로 상수는 프로그램에서 사용되는 배열의 크기 결정
//
//int main() {
//
//	int index; // for 루프에 사용될 변수를 선언
//	char dic[WORDS][2][30] = { // 3차원 문자 배열 선언
//							   // WORDS는 단어의 개수(5개)
//		                       // 두 번째 차원은 각 단어와 그 뜻을 저장하는데 사용
//		                       // 세 번째 차원은 각 문자열을 저장하는데 사용
//		{"book", "책"},
//		{"boy", "소년"},
//		{"computer", "컴퓨터"},
//		{"language", "언어"},
//		{"rain", "비"}
//	};
//
//	char word[30]; // 사용자로부터 입력받은 단어를 저장하는 문자열
//	printf("단어를 입력하시오: ");
//	scanf("%s", word); // 사용자로부터 단어를 입력받아 word 배열에 저장
//	
//
//	// 배열 dic의 모든 요소를 순회하는 루프
//	for (index = 0; index < WORDS; index++) {
//		if (strcmp(dic[index][0], word) == 0) { // dic[index]의 [0](영어단어)와  word가 같을 때 
//			                                      // ( 사용자가 입력한 단어(word)와 사전(dic)의 각 단어(dic[index][0])를 비교
//			                                       // strcmp 함수는 두 문자열이 동일하면 0을 반환하므로, 
//												    // 이 조건문은 사용자가 입력한 단어와 사전의 단어가 일치하는 경우 )
//			                                       
//			printf("%s: %s\n", word, dic[index][1]); //찾아낸 단어와 해당 뜻을 출력
//
//			return 0;
//		}
//	}
//
//	// 만약 dic 배열의 모든 요소를 검사한 후에도 단어가 발견되지 않으면, 
//	printf("사전에서 발견되지 않았습니다.\n"); // <- 얘가 실행됨
//
//	return 0;
//
//}
