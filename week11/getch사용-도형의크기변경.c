///*
// 
//ȭ�鿡 �簢���� �׷��� �ְ� ����ڰ� ��b���� ������ �簢���� ũ�Ⱑ ���� Ŀ����. 
//����ڰ� ��s���� ������ �簢���� ũ�Ⱑ �۾�����. 
//��q���� ������ ���α׷��� ����Ǵ� ���α׷��� �ۼ��غ���.
//
//*/
////�ٽ��ڵ� : ����� �Է��� ���ڷ� �޾Ƽ� �������� if-else�� ���
//
//
//#include <windows.h> 
//#include <stdio.h>
//
//int main(void) {
//
//	int ch; // �������� ����
//	int width = 200, height = 200;
//
//	HDC hdc = GetWindowDC(GetForegroundWindow()); 
//	while (1) {
//		Rectangle(hdc, 100, 100, width, height); // �簢���� �׸���.
//		ch = getch(); // ���ڸ� �Է¹޴´�
//		Rectangle(hdc, 0, 0, 800, 600); // ȭ���� �����.
//		if (ch == 'b') {
//			width += 10;
//			height += 10;
//		}
//		else if (ch == 's') {
//			width -= 10;
//			height -= 10;
//		}
//		else if (ch == 'q') {
//			return 0;
//		}
//	}
//	return 0;
//}