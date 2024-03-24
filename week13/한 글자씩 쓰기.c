#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;

	fp = NULL;

	fp = fopen("alphabet.txt", "w");

	if (fp == NULL) {
		fprintf(stderr, "파일 alphabet.txt를 열 수 없습니다.\n");
		exit(1); //프로그램을 종료한다
	}
	else printf("file open sucess!\n");
		
	char c;
	for (c = 'a'; c <= 'z'; c++) //'a'부터 'z'까지 파일에 쓴다
		fputc(c, fp);


	fclose(fp); //꼭 파일 닫기 해줘야함!!!
	return 0;
}