#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp = NULL;
	char str[100];

	fp = fopen("file.txt", "w");


	if (fp == NULL) {
		fprintf(stderr, "���� file.txt�� �� �� �����ϴ�.\n");
		exit(0); //���α׷��� �����Ѵ� (�� ����� 0��?? �ѱ��ھ� ����/�б�.c ���Ͽ����� 1�̿��µ�)
	}//0 �� ���� ���� , 0�̾ƴϸ� ���� ��������
	else printf("file open sucess!\n");

	do {
		gets(str);//����ڷκ��� �� ���� �Է¹޴´�
		fputs(str, fp); //�Է¹��� ������ ���Ͽ� ����
	} while (strlen(str) != 0);


	fclose(fp); //�� ���� �ݱ� �������!!!
	return 0;
}