//���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int temperature;

	printf("�µ��� �Է��Ͻÿ� : ");
	scanf("%d", &temperature);

	if (temperature > 0) // { temperature �� 0���� ũ�� �Ʒ� ������ ����
		printf("������ �����Դϴ�.\n");
	// }

	else // { 
		printf("������ �����Դϴ�.\n");
	// }

	printf("���� �µ��� %d���Դϴ�.\n", temperature); //�׻� ����

	return 0;
}