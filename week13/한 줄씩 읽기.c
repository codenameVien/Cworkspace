#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp = NULL;
	char str[100];

	fp = fopen("file.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		exit(1);
	}

	else {
		if (fgets(str, 100, fp) != NULL) 
			puts(str);
		    printf("file open sucess!\n");
		fclose(fp);
	}
	return 0;
}