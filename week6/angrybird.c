//�ޱ׸� ����� ������ '�ޱ׸� ��' ���α׷�.. ¬^^

#include <windows.h>
#include <stdio.h>


int main() {
	
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30, y = 200; //���� ��ġ��ǥ (x,y)
	int vx = 50, vy = -50;  //���� �ӵ� (vx, vy) �� �����ε�
	int i;

	MoveToEx(hdc, 30, 2000, NULL);
	LineTo(hdc, 800, 200);  //���׸���
	for (i = 0; i < 20; i++) {
		vy = vy + 10;
		x = x + vx;
		y = y + vy;
		Ellipse(hdc, x, y, x + 10, y + 10); //������ 10�� �� �׸���
		Sleep(100); //0.1�� ���� ����
	}
}