//��� ���� �ڵ� ���� ���α׷�

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, ans; //ans�� answer��..
	printf("��� ������ �ڵ����� �����մϴ�. \n");
	srand(time(NULL));

	while (1) {
		int x = rand() % 100; //0~99������ ���� ����(����)
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf_s("%d", &ans);

		if (ans == x + y) {
			printf("�¾ҽ��ϴ�. \n");
			break; //�¾����� �ݺ��� Ż��
		}

		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		    //Ʋ���� ���� �ݺ��̳�
	}
	return 0;
}