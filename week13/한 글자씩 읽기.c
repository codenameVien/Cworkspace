#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp = NULL;
	int c; //���� ������ �����Ѵ�. 

	fp = fopen("alphabet.txt", "r");

	if (fp == NULL) {
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1); //���α׷��� �����Ѵ�
	}
	else printf("file open sucess!\n\n");

	while ((c = fgetc(fp)) != EOF) // fget()�� ��ȯ���� EOF�� �ƴ϶��,(EndOfFile) 
		                          //(��ȯ���� fp �� c ��???? ������ ����Ƽ���� ���M���)
		                          // �ƴ�;;; �� ��ȯ���� return �����ڳ�
		                          //�״ϱ� ������ ���̸� �̶�� ���ε�
		                          //�׷� ����Ƽ���� �� ���� �����̳ı� ��������
		putchar(c);



	fclose(fp); //�� ���� �ݱ� �������!!!
	return 0;
}