#include <stdio.h> 

int main(){

	int i = 10;
	char c = 69;
	float f = 12.3;

	/* ���⼭ %u �� %d �� ������ unsigned�� �׷�!! */
	printf("i(%d)�� �ּ�: %u\n", i, &i); // ���� i�� ���� �ּ� ���
	printf("c(%c)�� �ּ�: %u\n", c, &c); // ���� c�� ���� �ּ� ���
	printf("f(%f)�� �ּ�: %u\n", f, &f); // ���� f�� ���� �ּ� ���
	
	return 0;
}