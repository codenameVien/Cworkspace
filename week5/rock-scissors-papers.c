//���������� ���� 74~75p  

#include <stdio.h>
#include <stdlib.h>

int main() {

	int user, computer;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2) : ");
	scanf_s("%d", &user); //����ڷκ��� ���� �Է¹���

	srand(time(NULL)); //rand()�Լ� �غ�
	computer = rand() % 3; //��ǻ�Ͱ� ������ ������Ű�� ������ �����Ѵ�
	printf("�����=%d\n", user);
	printf("��ǻ��=%d\n", computer);

	if ((user + 1) % 3 == computer) printf("�¸�\n");
	else if (computer == user) printf("�����\n");
	else printf("����� �¸�\n");

	return 0;
}