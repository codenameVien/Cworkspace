#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp;
	fp = fopen("data.txt", "w"); 
	if (fp == NULL) {
		printf("data.txt ������ �� �� �����ϴ�.");
		exit(1);
	}
	fputs("This is an house.", fp); // �����Ű�� �����߿� ó���� data.txt���Ͽ��� This is an house. ��� ��������
	fseek(fp, 11, SEEK_SET); //����Ǹ鼭 �� ���� seek_set(���� �� ó��, �� This is an house. ���� �� �ձ����Ǿ�)���� 
	                         //11��(����Ʈ) �ڱ��� �����͸� �̵���Ű�� 
							 // �Ʒ� ���ִ� fputs�� apple�� ���ֹǷ� 
	                         // ��������� data.txt���� ����� This is an apple. ����.
	fputs("apple", fp);
	fclose(fp);
	return 0;
}