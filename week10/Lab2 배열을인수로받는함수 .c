//���� �迭�� ���Ͽ� ����� ����ϰ� �迭�� ����ϴ� �Լ� �ۼ�
#include <stdio.h>
#define SIZE 5 // ��ó���⸦ ���� SIZE�� 5�� ����, �迭�� ũ�� = 5
double get_array_avg(int values[], int n); 
void print_array(int values[], int n);

int main() {

	int i;
	int data[SIZE] = { 10,20,30,40,50 }; // ������ �迭 data���� �� �ʱ�ȭ
	double result;

	print_array(data, SIZE); // print_array �Լ��� ȣ���Ͽ� �迭�� ���Ҹ� ���
	result = get_array_avg(data, SIZE); // get_array_avg �Լ��� ȣ���Ͽ� �迭�� ��հ��� ����Ͽ� ���

	printf("�迭 ���ҵ��� ��� = %f\n", result);

	return  0;
}

// �迭 ����� ����� ����ϴ� �Լ� 
/* �迭�� �� �迭�� ũ�⸦ �Ű������� �޾� �迭�� ��հ� ��� �� ��ȯ */
double get_array_avg(int values[], int n) {

	int i;
	double sum = 0.0;

	for (i = 0; i < n; i++)
		sum += values[i];

	return sum / n;
}

// �迭 ��Ҹ� ȭ�鿡 ����ϴ� �Լ� 
/* �迭�� �� �迭�� ũ�⸦ �Ű������� �޾� �迭�� ��� ���� ��� */
void print_array(int values[], int n) {

	int i;

	printf("[ ");

	for (i = 0; i < n; i++)
		printf("%d ", values[i]);

	printf("]\n");
}