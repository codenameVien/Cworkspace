//1. �迭 prices[]�� ���Ҹ� �ʱ�ȭ�Ѵ�.
//2. �ϴ� ù ��° ���Ҹ� �ּҰ� minium�̶�� �����Ѵ�.
//3. for (i = 1; i < �迭�� ũ��; i++)
//	     if (prices[i] < minimum)
//	         minimum = prices[i]
//4. �ݺ��� ����Ǹ� minimum�� �ּҰ��� ����ȴ�

#include <stdio.h>
#define SIZE 10 

int main() {

	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 9 }; // �迭�� ���� ����� ���ÿ� �ʱ�ȭ
	int i, minimum; //minimum : �迭 prices�� [0]��°(ù��°) ���� ��Ÿ�� , i : minimum�� �񱳵� �迭prices�� �ι�°~��������
	printf("[");
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", prices[i]);
	} //prices �迭�� ����ִ� ���ҵ��� ��� ���
	printf("]\n");

	minimum = prices[0]; // minimum�� �迭prices�� [0]��°(ù��°) ���Ҷ� �����Ѵ�.
	for (i = 1; i < SIZE; i++) /*prices[SIZE}�ϸ� �����ٿ�� - prices[SIZE]�� �ƹ��ų� �ǹǷ�? �ϴ� ��ư �ƴ� */ {
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("�ּڰ��� %d�Դϴ�.\n", minimum);
	return 0;
}