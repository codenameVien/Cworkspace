///* getchar 함수와 putchar 함수 */
//#include <stdio.h>
//
//int main() {
//
//	int ch; // 정수형에 주의
//	ch = getchar(); // 첫번째 문자를 입력받음
//	putchar(ch); // 문자를 출력
//
//	return 0;
//}
///* putchar() 없애고 실행해보면 a가 출력되지 않음 , 오직 입력된 a만 화면에 뜸 */



///* getch 함수와 putch 함수 */
//#include <stdio.h>
//
//int main() {
//
//	int ch; //정수형에 주의
//	ch = getch(); //첫번쨰 문자를 입력받음
//	putch(ch); //문자를 출력
//
//	return 0;
//}
///* putch() 없애고 실행해보면 a가 출력되지 않음 */



////getchar  사용하기
///* 중간에 있는 getchar() (키보드입력버퍼역할)없으면 두번째 getchar 가 실행(호출)이 안된다!!!!!!!!!!!!!!*/ 
////아니면 우리 눈에 화면에서는 보이지 않지만 잘 실행되는 getch 쓰라는디
//#include <stdio.h>
//
//int main() {
//
//	int ch; // 정수형에 주의
//	ch = getchar(); // 첫번째 문자를 입력받는다. 
//	putchar(ch); // 문자를 출력한다.
//
//	printf("와우\n");
//
//	getchar(); // 입력 버퍼 (얘 없으면 첫번째 입출력만 받고 프로그램 종료됨여)
//
//	printf("wow\n");
//	int ch2; // 정수형에 주의
//	ch2 = getchar(); // 두번째 문자를 입력받는다. 
//	putchar(ch2); // 문자를 출력한다.
//
//	return 0;
//}




///*바로 위에 식에서는 abc를 입력했을때 ac만 출력되지만 아래식에서는 abc를 입력하면 abc가 잘 출력된다. */
//#include <stdio.h>
//
//int main(void) {
//
//	int ch; // 정수형에 주의
//	ch = getchar(); // 첫번째 문자를 입력받는다. 
//	putchar(ch); // 문자를 출력한다.
//
//	int ch2; // 정수형에 주의
//	ch2 = getchar(); // 두번째 문자를 입력받는다. 
//	putchar(ch2); // 문자를 출력한다.
//
//	int ch3;
//	ch3 = getchar();//
//	putchar(ch3);
//
//	return 0;
//}


/* 1. a 입력 2. ENTER입력 3. b 입력 4. ENTER 키 입력
하면 결과는 
a
a
b
b
이렇게 출력되는데 
이거는 a는 ch1=getchar() 입력 버퍼에, \0(엔터키)와 b는 ch2=getchar()입력버퍼에, \0(엔터키)는 ch3=getchar() 입력버퍼에 저장되었기 떄문

1. abc 2. ENTER키 입력했을 때 결과가
abc
abc
가 되는데 일케 된 이유가 
a는 ch1=getchar() 입력 버퍼에, b는 ch2=getchar()입력버퍼에, c와 \0(엔터키)는 ch3=getchar() 입력버퍼에 저장되었기 떄문

따라서 위의 경우와 아래의 경우가 다른 이유가 첫번쨰 경우에서는 중간에 엔터키를 쳤기 떄문 

근데 맞는지 정확히는 모르겠다 ! ㅋㅋㅋㅋㅋ

*/