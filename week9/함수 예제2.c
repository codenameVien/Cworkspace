// �� �� �߿��� ū ���� ã�� �Լ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ��� �����Ѵ�
int get_integer() {

	int value;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);

	return value;
}


// �Լ��� �����Ѵ�
/* ������ get_max �Լ��� �� ���� ���� ���ڸ� �޾� �� ū ���� ��ȯ�ϴ� ����
   if ���� ����Ͽ� �� �� �� �� ū ���� ��ȯ�� */
int get_max(int x, int y) {

	if (x > y) return(x);
	else return(y);
}


int main() {

	int a = get_integer(); // �Լ� ȣ���Ͽ� ������ a�� �Է¹���
	int b = get_integer(); // �Լ� ȣ���Ͽ� ���� b �Է¹���

	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b)); // get_max �Լ� ����Ͽ� �Է¹��� �� �� �� �� ū ���� ã�� �̸� ���

	return 0;
}