#include <stdio.h>

int all_files; // �ٸ� �ҽ� ���Ͽ����� ����� �� �ִ� ���� ����
extern void sub(); // �ܺ� �Լ� (extern����)

int main() {

    sub();
    printf("%d\n", all_files);
    return 0;
}