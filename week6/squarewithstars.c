//��(*)�� �׸� �׸��� (��ø for��)

#include <stdio.h>

int main() {

	int x, y;

	for (y = 0; y < 5; y++) {
	//y�� �������� 5�� �ݺ�

		for (x = 0; x < 10; x++)
		//x�� �������� 10�� �ݺ�
			printf("*");

		printf("\n");
	}
	return 0;
}