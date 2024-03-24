//앵그리 버드와 유사한 '앵그리 공' 프로그램.. 짭^^

#include <windows.h>
#include <stdio.h>


int main() {
	
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30, y = 200; //공의 위치좌표 (x,y)
	int vx = 50, vy = -50;  //공의 속도 (vx, vy) 음 벡터인듯
	int i;

	MoveToEx(hdc, 30, 2000, NULL);
	LineTo(hdc, 800, 200);  //선그리기
	for (i = 0; i < 20; i++) {
		vy = vy + 10;
		x = x + vx;
		y = y + vy;
		Ellipse(hdc, x, y, x + 10, y + 10); //지름이 10인 공 그리기
		Sleep(100); //0.1초 동안 쉰다
	}
}