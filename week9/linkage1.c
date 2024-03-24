#include <stdio.h>

int all_files; // 다른 소스 파일에서도 사용할 수 있는 전역 변수
extern void sub(); // 외부 함수 (extern으로)

int main() {

    sub();
    printf("%d\n", all_files);
    return 0;
}