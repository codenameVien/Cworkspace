//#include <windows.h>
//#include <stdlib.h>
//#define SIZE 100
//
//struct point {
//	int x;
//	int y;
//};
//
//int main() {
//	struct point p[SIZE]; //ũ�Ⱑ 100�� point ����ü �迭 ����
//	int i; 
//
//	for (i = 0; i < SIZE; i++) { //������ ������ ��ġ ����
//		p[i].x = rand() % 500;
//		p[i].y = rand() % 500;
//	}
//
//	HDC hdc = GetWindowDC(GetForegroundWindow());
//	for (i = 0; i < SIZE; i++) { //���� ���� ������ �׸���
//		Ellipse(hdc, p[i].x, p[i].y, p[i].x+10, p[i].y + 10); //������ 10�� ���� ����..
//	}
//
//	return 0;
//}