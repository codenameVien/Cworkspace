//�迭���� Ư���� �� Ž���ϱ�
#include <stdio.h>
#define SIZE 10

int main() {

	int key, i;
	int list[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };

	printf("[");
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", list[i]);
	} //list �迭�� ����ִ� ���ҵ��� ��� ���
	printf("]\n");

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &key);
	for (i = 0; i < SIZE; i++) {
		if (list[i] == key)/*list[i]�� �迭 ���� �����̰�, i�� ����� ����(�ε���)���� ��Ÿ���� ���̹Ƿ� list [i] �� ��ߴ�!!*/ {
			printf("Ž�� ���� �ε��� = %d\n", i);
			break;
		}
		else {
			printf("Ž�� ������ ���ڰ� �����ϴ�.");
			break;
		} //�ٵ� �������� for�� �������� ���� if(i=SIZE) �� �ϼ̴�!!! �ٵ� �� ������� ���������� �ִٰ� �ϼ����� ���� �� else ���� �ɵ� - ���庸��
	}

	return 0;
}