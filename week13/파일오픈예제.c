#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE *fp;
	
	fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("���� ���� ����\n");
	else printf("���� ���� ����\n");

	fclose(fp); //�� ���� �ݱ� �������!!!
	return 0;
}