#include <stdio.h>

int compute_sum(int n);  // �Լ� ����

int main() {

	int sum; 
	sum = compute_sum(100);
	printf("1���� 100������ �� = %d \n", sum);
	return 0;
}

int compute_sum(int n) {
	int i;
	int result = 0;
	for (i = 1; i <= n; i++)
		result += i;
	return result;
}