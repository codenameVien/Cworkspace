// �ٷ� �Ʒ� �ڵ�� ���� ���� �״��(binary���� �̸��� �ٸ���)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int buffer[] = { 10,20,30,40,50,60,70,80,90,100 };
	FILE* fp = NULL;
	size_t i, size, count;

	fp = fopen("binaryfile2.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");
		exit(1);
	}
	else
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");

	int x = 123456;
	size = sizeof(buffer[0]);
	count = sizeof(buffer) / size;

	i = fwrite(buffer, size, count, fp);
	printf("\n%d���� ������\n", i);

	fclose(fp);

	return 0;
}


