#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;

	fp = NULL;

	fp = fopen("alphabet.txt", "w");

	if (fp == NULL) {
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1); //���α׷��� �����Ѵ�
	}
	else printf("file open sucess!\n");
		
	char c;
	for (c = 'a'; c <= 'z'; c++) //'a'���� 'z'���� ���Ͽ� ����
		fputc(c, fp);


	fclose(fp); //�� ���� �ݱ� �������!!!
	return 0;
}