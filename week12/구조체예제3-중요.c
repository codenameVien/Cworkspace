////�� lab�� �ƴ����� �߿��ѵ�
//
////�л����� �����͸� �ݺ� ������ ����Ͽ� �Է¹ޱ�
////�����͵��� ����ü�� �迭�� ����� 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};
int main() {
	
	struct student list[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", list[i].name);// name�� �迭�̶� & �� �ʿ� X (�迭�� �̹� �ּҿ� ����)
		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
		scanf("%lf", &list[i].grade);
		printf("\n");
	}
	printf("\n==============================================================\n");
	for (i = 0; i < SIZE; i++)
		printf("�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);
	printf("\n==============================================================\n");
	
	return 0;
}

