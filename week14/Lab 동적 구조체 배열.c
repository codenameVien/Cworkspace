/* ���� �޸� �Ҵ�� ����ü�� �Բ� ����Ͽ� ����� �Է��� ó���ϴ� ��� */
// ���� �޸� �Ҵ�� ����ü�� ����Ͽ� ���� ��ȭ�� ����� ������ �Է¹޾� �����ϰ� ����ϴ� �ڵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ��ȭ�� ����ü�� ǥ��
struct movie {
	char title[100]; // ��ȭ ����
	double rating; // ��ȭ ����
};

int main() {
	struct movie* ptr; // movie ����ü�� ����ų ������ ptr ����
	int i, n;

	printf("��ȭ�� ���� : ");
	scanf("%d", &n); // ����ڿ��� ��ȭ�� ������ �Է¹޾� n�� ����
	                 // �� ���� ���� �޸� �Ҵ翡�� ����

	ptr = (struct movie*)malloc(n * sizeof(struct movie)); // �Ҵ��ϴ� ������ ũ��� n���� movie ����ü ũ��� ����
	                                                       // malloc�Ѽ��� �Ҵ�� �޸��� ���� �ּҸ� ��ȯ�ϸ�, �� �ּҴ� ptr�����Ϳ� �����

	if (ptr == NULL) {
		printf("�޸� �Ҵ� ���� \n");
		exit(1); // ���� �� ����
	}

	// ����ڿ��� ����� ������ �Է¹޾� ptr�� ����Ű�� ����ü �迭�� ����
	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : ");
		scanf("%s", ptr[i].title); // title�� ���� �迭�̶� �� ��ü�� �ּ��̹Ƿ� �ּҿ����� & �� �ʿ����!!
		printf("��ȭ ���� : ");
		scanf("%lf", &ptr[i].rating); // �׳� ���� �����ϱ� & �־���� ��!!!
	}
	
	printf("\n=======================\n");

	// ����� ����� ���� ���
	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : %s \n", ptr[i].title);
		printf("��ȭ ���� : %lf \n", ptr[i].rating);
	}

	printf("=======================\n");

	free(ptr); // ���� �Ҵ��� �޸� ����(�ݳ�)

	return 0;
}