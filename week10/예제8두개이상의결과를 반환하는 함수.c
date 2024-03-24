#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����� y������ ���
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	// get_line_parameter : ��(����)�� �Ű�����(�Ķ����)�� ���´ٴ� �ǹ�
	// float* slope, float* yintercept : ����� y-������ �μ��� ����

	if (x1 == x2) return -1; // return -1 : ������ ����
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0; // return 0 : ������ �� ����
	}
}

int main(void)
{
	float s, y;
	int x1, y1, x2, y2;
	scanf("% d % d % d % d", &x1, &y1, &x2, &y2);
	if (get_line_parameter(x1, y1, x2, y2, &s, &y) == -1)
		printf("����\n");
	else
		printf("����� %f, y������ %f\n", s, y);

	return 0;
}