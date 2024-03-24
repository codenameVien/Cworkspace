///*
// 
//화면에 사각형이 그려져 있고 사용자가 ‘b’를 누르면 사각형의 크기가 점점 커진다. 
//사용자가 ‘s’를 누르면 사각형의 크기가 작아진다. 
//‘q’를 누르면 프로그램이 종료되는 프로그램을 작성해보자.
//
//*/
////핵심코드 : 사용자 입력을 문자로 받아서 연속적인 if-else문 사용
//
//
//#include <windows.h> 
//#include <stdio.h>
//
//int main(void) {
//
//	int ch; // 정수형에 주의
//	int width = 200, height = 200;
//
//	HDC hdc = GetWindowDC(GetForegroundWindow()); 
//	while (1) {
//		Rectangle(hdc, 100, 100, width, height); // 사각형을 그린다.
//		ch = getch(); // 문자를 입력받는다
//		Rectangle(hdc, 0, 0, 800, 600); // 화면을 지운다.
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