//�̰� �������� ���ֽŰŶ� ���� �����̶� �ٸ��� �Ѵ� �ϱ�
// �ٷ� �Ʒ� �ڵ�� �������� ���ֽŰ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int buffer[SIZE];
	FILE* fp = NULL;
	int i;

	fp = fopen("binaryfile.bin", "rb");
	if (fp == NULL) {
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");
		exit(1);
	}
	else
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");

	i = fread(buffer, sizeof(int), SIZE, fp);
	printf("\n%d���� �о��\n", i);


	for (i = 0; i < SIZE; i++)
		printf("%d ", buffer[i]);

	printf("\n");

	fclose(fp);

	return 0;
}