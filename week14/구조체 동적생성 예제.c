/* ���� �޸� �Ҵ�� ����ü�� �Բ� ����غ��� */
// ���� �޸� �Ҵ�� ����ü�� ����Ͽ� å�� ������ �����ϰ� ����ϴ� ����
// ����ü Book�� ����� number�� title�� ������ ����
// main �Լ����� ����ü Book �� ���� �迭�� �����ϰ� ����ϰ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book { // ����ü book
	int number; // ��� : å�� ��ȣ
	char title[100]; // ��� : ����
};

int main() {

	struct Book* p; // Book ����ü�� ����ų ������ p ����

	p = (struct Book*)malloc(2 * sizeof(struct Book)); // �Ҵ��ϴ� ������ ũ��� 2���� Book ����ü ũ��� ����

	if (p == NULL) {
		printf("�޸� �Ҵ� ���� \n");
		exit(1);
	}

	// p[0]�� p[1]�� ��ȣ�� ���� ����
	p[0].number = 1; // (*p).number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2; // (*p+1).number = 2;
	strcpy(p[1].title, "Data Structure");
	// p[i] : ����ü �����Ϳ� ���� �迭(array) ����
	// *(p+i) : �����͸� �̿��� ����ü ����


	// �� å�� ��ȣ�� ������ ���
	printf("%d %s\n", p[0].number, p[0].title); // ����� �� �迭(array)�� ���ִ� �� �����ͷ� ���ִ� �� ���� �����ϹǷ�(ª���Ƿ�) �̷��� ����
	printf("%d %s\n", p[1].number, p[1].title);

	free(p);
	return 0;
}