//이거 교수님이 써주신거랑 교재 내용이랑 다르니 둘다 하기
// 바로 아래 코드는 교수님이 써주신거

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int buffer[SIZE];
	FILE* fp = NULL;
	int i;

	fp = fopen("binaryfile.bin", "rb");
	if (fp == NULL) {
		printf("이진 파일 열기에 실패하였습니다.\n");
		exit(1);
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