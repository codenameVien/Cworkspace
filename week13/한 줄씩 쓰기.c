#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp = NULL;
	char str[100];

	fp = fopen("file.txt", "w");


	if (fp == NULL) {
		fprintf(stderr, "파일 file.txt를 열 수 없습니다.\n");
		exit(0); //프로그램을 종료한다 (왜 여기는 0임?? 한글자씩 쓰기/읽기.c 파일에서는 1이였는디)
	}//0 이 에러 없고 , 0이아니면 전부 에러있음
	else printf("file open sucess!\n");

	do {
		gets(str);//사용자로부터 한 줄을 입력받는다
		fputs(str, fp); //입력받은 한줄을 파일에 쓴다
	} while (strlen(str) != 0);


	fclose(fp); //꼭 파일 닫기 해줘야함!!!
	return 0;
}