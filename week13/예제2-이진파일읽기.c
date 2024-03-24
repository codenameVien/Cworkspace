// 바로 아래 코드는 교재 내용 그대로(binary파일 이름만 다르게)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int buffer[SIZE];
	FILE* fp = NULL;
	int i;

	fp = fopen("binaryfile2.bin", "rb");
	if (fp == NULL) {
		printf("이진 파일 열기에 실패하였습니다.\n");
		return 1;
	}
	else
		printf("이진 파일 열기에 성공하였습니다.\n");

	i = fread(buffer, sizeof(int), SIZE, fp);
	printf("\n%d개를 읽어옴\n", i);


	for (i = 0; i < SIZE; i++)
		printf("%d ", buffer[i]);

	printf("\n");

	fclose(fp);

	return 0;
}