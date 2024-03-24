#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수를 정의한다
/* 정의한 get_integer 함수는 사용자로부터 정수 값을 입력받아 반환하는 역할을 함
   printf -> scanf를 사용해 사용자 입력을 정수 변수 value에 저장 -> 이 값을 반환 */
int get_integer()  // main 함수에서 겟 인티져 함수 두번 호출
{
    int value;

    printf("정수를 입력하시오 : ");
    scanf("%d", &value);

    return value;
}


int main() {

    int x = get_integer(); // get_integer 함수를 호출하여 정수를 x에 입력받음
    int y = get_integer(); // get_integer 함수를 호출하여 정수 y 입력받음

    int result = x + y; // 두 정수를 더한 결과를 result에 저장

    printf("두 수의 합 =  % d\n", result);

    return 0;
}