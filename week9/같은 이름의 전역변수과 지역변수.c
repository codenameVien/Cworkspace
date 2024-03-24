#include <stdio.h>

int sum = 123; // 전역 변수

int main() {

    int sum = 321; // 지역 변수
    printf("%d\n", sum);
    return 0;
}