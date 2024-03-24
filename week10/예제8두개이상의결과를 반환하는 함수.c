#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 기울기와 y절편을 계산
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	// get_line_parameter : 선(라인)의 매개변수(파라미터)를 얻어온다는 의미
	// float* slope, float* yintercept : 기울기와 y-절편을 인수로 전달

	if (x1 == x2) return -1; // return -1 : 에러가 났다
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0; // return 0 : 에러가 안 났다
	}
}

int main(void)
{
	float s, y;
	int x1, y1, x2, y2;
	scanf("% d % d % d % d", &x1, &y1, &x2, &y2);
	if (get_line_parameter(x1, y1, x2, y2, &s, &y) == -1)
		printf("에러\n");
	else
		printf("기울기는 %f, y절편은 %f\n", s, y);

	return 0;
}