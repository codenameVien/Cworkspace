#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ��� �����Ѵ�
/* ������ get_integer �Լ��� ����ڷκ��� ���� ���� �Է¹޾� ��ȯ�ϴ� ������ ��
   printf -> scanf�� ����� ����� �Է��� ���� ���� value�� ���� -> �� ���� ��ȯ */
int get_integer()  // main �Լ����� �� ��Ƽ�� �Լ� �ι� ȣ��
{
    int value;

    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &value);

    return value;
}


int main() {

    int x = get_integer(); // get_integer �Լ��� ȣ���Ͽ� ������ x�� �Է¹���
    int y = get_integer(); // get_integer �Լ��� ȣ���Ͽ� ���� y �Է¹���

    int result = x + y; // �� ������ ���� ����� result�� ����

    printf("�� ���� �� =  % d\n", result);

    return 0;
}