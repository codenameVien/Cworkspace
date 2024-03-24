////함수 원형 사용
//난수로 직선을 그려보자
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>

/* 좌표(x1, y1)에서 (x2, y2)까지 직선을 그리는 함수 */
void line(HDC hdc, int x1, int y1, int x2, int y2)
{
	MoveToEx(hdc, x1, y1, NULL); // MovetoEx : 그림의 시작 위치 설정
	LineTo(hdc, x2, y2); // LineTo : 시작 위치에서 지정된 위치까지 선을 그림
}

/* x1 ~ y1 사이의 난수를 생성하는 함수 */
int randint(int x1, int x2)
{
	return x1 + rand() % (x2 - x1); // 이 수식을 사용하여 x1과 x2의 값 중 하나를 무작위로 반환
}

int main(void) {
	int i;
	HDC hdc = GetWindowDC(GetForegroundWindow()); // GetWindowDC(GetForegroundWindow())를 사용하여 현재 활성화된 창의 디바이스 context를 가져옴. 
	                                              // 이 디바이스 context를 line함수에 전달하여 선을 그릴 수 있음.

	for (i = 0; i < 30; i++) { // 무작위 위치에 직선을 그리는 작업을 30번 반복
		int x1 = randint(0, 300);
		int y1 = randint(0, 300); 
		int x2 = randint(0, 300); 
		int y2 = randint(0, 300); // randint(0,300)을 호출하여 x와 y좌표를 위한 무작위 수를 생성
		line(hdc, x1, y1, x2, y2); // 그 다음 이 들 좌표를 사용하여 line함수를 호출하여 선을 그림

		Sleep(100);  // 현재 스레드를 100ms(밀리초) 동안 잔다. ( 새로 그려진 선을 사용자가 충분히 볼 수 있도록 하기 위해서 )
	}
}