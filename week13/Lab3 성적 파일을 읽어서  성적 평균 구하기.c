#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	FILE* fp;
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	if ((fp = fopen("scores.txt", "r")) == NULL) {
		fprintf(stderr, "���� ������ ���� �����ϴ�.\n");
		exit(1);
	}

	while (!feof(fp)) { // ���� �� üũ

		// �� �ٿ� �� �� �� �����ִ� �й�, �̸�, ������ �о����
		fscanf(fp, "%d %s %f", &number, name, &score); //'(fp,' ���������� 'fp����' �о����� ���ε�
		                               //���ڿ� �迭�� �� ��ü�� �ּ�!!�̹Ƿ� & �� ��!!!
		printf("%d %s %f\n", number, name, score);
		total += score;//���� ���� ���
		count++;
	}

	printf("��� = %f\n", total / count); // ���� ��� ���

	fclose(fp); //���� �ݱ�

	return 0; 
}