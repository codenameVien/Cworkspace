//���� ���߱� ���� (�������� ���)
#include <stdio.h>

int main() {

	int answer;
	srand(time(NULL));
	answer = rand()%100; // 0~99 �� ���� ����(����) 
	int guess;
	int tries = 0;

	printf("���� ���߱� ������ �����ϰڽ��ϴ�.\n");
	printf("0~99 ������ ���� �� �ϳ��� �����Դϴ�.\n");

	do {

		printf("\n������ �����Ͽ� ������: ");
		scanf_s("%d", &guess);
		tries++;  //�õ�Ƚ��(tries)�� �����Ѵ�

		if (guess > answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("������ ������ ���亸�� �����ϴ�.\n");

		if (guess < answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("������ ������ ���亸�� �����ϴ�.\n");

	} while (guess != answer);

	printf("�����Դϴ�! �����մϴ�.   (�õ�Ƚ��=%d)", tries);

	return 0;
}