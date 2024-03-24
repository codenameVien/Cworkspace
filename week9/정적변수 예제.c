/* auto변수와 static 변수가 함수 호출에 따라 어떻게 다르게 동작하는지 알아보자 */
#include <stdio.h>

// 함수 정의
/* sub() 함수 : 두 개의 정수형 변수 auto_count와 static_count를 선언하고, 각각의 값을 증가시킨 다음, 그 값들을 출력 */
void sub() {

	int auto_count = 0; // auto_count : 일반적인 지역변수 ('auto'는 생략 가능한 키워드)
	                    // (함수가 호출될 때마다 새롭게 생성되고 함수가 종료되면 사라짐)

	static int static_count = 0; // static_count : 'static'키워드를 사용해 선언된 지역정적변수
	                             // (프로그램이 시작할 때 한 번만 초기화되고, 함수 호출이 끝나도 메모리에서 사라지지 X)
	                                // (즉, 프로그램 실행종료 전까지 이전 값에다 1 더한 값 나옴)

	auto_count++; // 후위 연산(으로 1씩 더함)
	static_count++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n\n", static_count);
}

int main() { 

	sub();
	sub();
	sub(); // sub()함수 세 번 호출

	return 0;
}

/*프로그램을 실행하면 
auto_count는 항상 1을 출력하고, 
static_count는 함수가 호출될 때마다 
1씩 증가하는 값을 출력합니다. 


이는 auto 변수가 함수 호출이 끝날 때 
메모리에서 사라지기 때문에 매번 함수가 호출될 때마다 
새롭게 초기화되는 반면, 

static 변수는 이전의 값을 유지하기 때문입니다.*/