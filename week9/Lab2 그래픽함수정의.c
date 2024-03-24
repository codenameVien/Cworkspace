////�Լ� ���� ���
//������ ������ �׷�����
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>

/* ��ǥ(x1, y1)���� (x2, y2)���� ������ �׸��� �Լ� */
void line(HDC hdc, int x1, int y1, int x2, int y2)
{
	MoveToEx(hdc, x1, y1, NULL); // MovetoEx : �׸��� ���� ��ġ ����
	LineTo(hdc, x2, y2); // LineTo : ���� ��ġ���� ������ ��ġ���� ���� �׸�
}

/* x1 ~ y1 ������ ������ �����ϴ� �Լ� */
int randint(int x1, int x2)
{
	return x1 + rand() % (x2 - x1); // �� ������ ����Ͽ� x1�� x2�� �� �� �ϳ��� �������� ��ȯ
}

int main(void) {
	int i;
	HDC hdc = GetWindowDC(GetForegroundWindow()); // GetWindowDC(GetForegroundWindow())�� ����Ͽ� ���� Ȱ��ȭ�� â�� ����̽� context�� ������. 
	                                              // �� ����̽� context�� line�Լ��� �����Ͽ� ���� �׸� �� ����.

	for (i = 0; i < 30; i++) { // ������ ��ġ�� ������ �׸��� �۾��� 30�� �ݺ�
		int x1 = randint(0, 300);
		int y1 = randint(0, 300); 
		int x2 = randint(0, 300); 
		int y2 = randint(0, 300); // randint(0,300)�� ȣ���Ͽ� x�� y��ǥ�� ���� ������ ���� ����
		line(hdc, x1, y1, x2, y2); // �� ���� �� �� ��ǥ�� ����Ͽ� line�Լ��� ȣ���Ͽ� ���� �׸�

		Sleep(100);  // ���� �����带 100ms(�и���) ���� �ܴ�. ( ���� �׷��� ���� ����ڰ� ����� �� �� �ֵ��� �ϱ� ���ؼ� )
	}
}