//<�������� �ٽ� �ڵ�>
//int list[8] = { 10, 5, 8, 9, 6, 4, 1, 2 };
//for (k = 0; k < 8; k++) {
//	for (i = 0; i < 7; i++) {
//		if (list[i] > list[i + 1]) {
//			 //list[i] �� list[i+1]�� ��ȯ�ϴ� �ڵ�
//			tmp = list[i];
//			list[i] = list[i + 1];
//			list[i + 1] = tmp;
//		}
//	}
//}

#include <stdio.h>
#define SIZE 8

int main() {
	
	int i, k; // k : tmp ó�� ��ȯ�� ���� �߰��� ������� ����
	int list[SIZE] = { 10,5,8,9,6,4,1,2 };

	///�迭�� ��Ҹ� �����Ѵ�.
	for (k = 0; k < SIZE; k++) {  //8�� ��
		for (i = 0; i < SIZE-1; i++) {  //7�� �� ����?>
			if (list[i] > list[i + 1]) {   //ũ�� ���� �ƴϸ�
				//���� ��ȯ�Ѵ�
				k = list[i];
				list[i] = list[i + 1];
				list[i + 1] = k;
			}
			/* �ݺ� ���� ���� ��������,,,,? �ϴ� �ؿ��Ŵ� �ƴѵ�
			while (i < SIZE - 1) {
				for (i = 0; i < SIZE; i++)
					printf(" %d ", list[i]);
				if (i = SIZE) break;

			}*/
		}
	}
	//�迭�� ��Ҹ� ����Ѵ�.
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", list[i]);
	}
	return 0;
}