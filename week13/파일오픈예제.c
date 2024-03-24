#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE *fp;
	
	fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else printf("파일 열기 성공\n");

	fclose(fp); //꼭 파일 닫기 해줘야함!!!
	return 0;
}