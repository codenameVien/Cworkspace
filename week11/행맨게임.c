///* <핵심로직>
//[ch = getch()와 for문]
//- 정답 문자 배열 solution[] = “meet at midnight”
//- 사용자가 입력하는 값을 저장하는 문자 배열 answer[] =“____”
//- 사용자 입력문자는 getch()로 받음
//- 사용자가 문자열에 들어있는 글자를 정확히 입력하면 
//   화면에 그 글자를 출력하기 위해 
//   입력문자와 문자열의 각 문자를 for 루프를 돌면서 하나씩 비교한다
//
//[while - if문]
//- 사용자 입력문자가 정답에 있는지 검사하는 반복 루프 작성 
//- 반복되는 횟수를 알 수 없기 때문에 while 문으로 반복해서 맞추기 실행
//- 정답과 사용자 입력이 같으면 반복 종료
//
//
//
//+ 시도횟수
//*/
//
//#include <stdio.h>
//#define MAX_TRIES 10
//
//int main() {
//
//	char solution[100] = "meet at midnight";
//	char answer[100] = "____ __ ________";
//	char ch;
//	int i;
//	int tries = 0;
//
//	while (1) {
//		printf("\n문자열을 입력하시오 : %s \n", answer);
//		printf("글자를 추측하시오 (시도횟수:%d) : ", tries);
//		ch = getch();
//		for (i = 0; solution[i] != NULL; i++) { // soluton배열에 들어있는 값이 없지 않을경우(까지) 반복 (0아닐때)
//			if (solution[i] == ch) //solution배열에 들어있는 값이 getch()로 입력받은 ch 값과 같을때
//				answer[i] = ch; // answer배열에 들어있는 값은 ch와 같다.
//		}
//		if (strcmp(solution, answer) == 0) { // solution와 answer 문자열을 비교해서 같으면 0이 나옴
//			printf("정답!! \n");
//			break;
//		}
//		if (tries++ >= MAX_TRIES) {
//
//			printf("최대 시도 횟수(%d)를 초과했습니다.", MAX_TRIES);
//			break;
//		}
//	}
//	return 0;
//}