#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp = NULL;
	int c; //정수 변수에 주의한다. 

	fp = fopen("alphabet.txt", "r");

	if (fp == NULL) {
		fprintf(stderr, "파일 alphabet.txt를 열 수 없습니다.\n");
		exit(1); //프로그램을 종료한다
	}
	else printf("file open sucess!\n\n");

	while ((c = fgetc(fp)) != EOF) // fget()의 반환값이 EOF가 아니라면,(EndOfFile) 
		                          //(반환값이 fp 임 c 임???? 정리시 지피티에게 질묺라기)
		                          // 아니;;; 걍 반환값이 return 값이자나
		                          //그니까 파일의 끝이면 이라는 뜻인듯
		                          //그럼 지피티에게 걍 저게 뭔뜻이냐구 무러보자
		putchar(c);



	fclose(fp); //꼭 파일 닫기 해줘야함!!!
	return 0;
}