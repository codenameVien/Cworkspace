//메뉴 처리
#include <stdio.h>

int main() {

	int i = 0;
	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하세요.\n");
		scanf_s("%d", &i);
	} while (i < 1 || i>3);

	printf("선택된 메뉴=%d\n", i);
	return 0;
}