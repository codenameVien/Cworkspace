#include <stdio.h>

int main()
{
	int a, b, c, largest;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) largest = a;
		else largest = c;
	}
	else {
		if (b > c) largest = b;
		else largest=c;
	}

	printf("���� ū ������ %d�Դϴ�. \n", largest);

	return 0;
}