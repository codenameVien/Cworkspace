#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp;
	fp = fopen("data.txt", "w"); 
	if (fp == NULL) {
		printf("data.txt 파일을 열 수 없습니다.");
		exit(1);
	}
	fputs("This is an house.", fp); // 실행시키면 과정중에 처음에 data.txt파일에는 This is an house. 라고 써주지만
	fseek(fp, 11, SEEK_SET); //실행되면서 얘 땜에 seek_set(파일 맨 처음, 즉 This is an house. 에서 맨 앞글자의앞)부터 
	                         //11번(바이트) 뒤까지 포인터를 이동시키고 
							 // 아래 써있는 fputs로 apple을 써주므로 
	                         // 결과적으로 data.txt파일 열어보면 This is an apple. 나옴.
	fputs("apple", fp);
	fclose(fp);
	return 0;
}