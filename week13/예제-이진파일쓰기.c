//이거 교수님이 써주신거랑 교재 내용이랑 다르니 둘다 하기
// 바로 아래 코드는 교수님이 써주신거

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int buffer[] = { 10,20,30,40,50,60,70,80,90,100 };
	FILE* fp = NULL;
	size_t i, size, count;

	fp = fopen("binaryfile.bin", "wb");
	if (fp == NULL) {
		printf("이진 파일 열기에 실패하였습니다.\n");
		exit(1);
	}
	else
		printf("이진 파일 열기에 성공하였습니다.\n");

	int x = 123456;
	size = sizeof(buffer[0]);
	count = sizeof(buffer) / size;

	i = fwrite(buffer, size, count, fp);
	printf("\n%d개가 써졌음\n", i);

	fclose(fp);

	return 0;
}