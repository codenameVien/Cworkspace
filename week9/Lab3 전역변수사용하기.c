/* 주어진 시작 좌표(200, 200)에서(400, 400)까지 직선을 그리고, 
   그 다음 줄을 위아래로 10씩 이동하면서 총 30개의 직선을 그리는 코드 */
#include <windows.h> 
#include <math.h> 
#include <stdio.h>

HDC hdc; // 전역 변수 hdc 선언 
         // HDC hdc : 디바이스 context를 담을 변수 (디바이스 context는 그래픽 출력을 위한 환경 정보를 담고 있음)

/* (x1, y1)부터 (x2, y2)까지 직선을 그리는 함수 */
void line(int x1, int y1, int x2, int y2) // 매개 변수가 더 간단해진다.
{
    MoveToEx(hdc, x1, y1, NULL); // 전역 변수 hdc 사용, 시작 지점 (x1, y1) 설정
    LineTo(hdc, x2, y2); // 전역 변수 hdc 사용, 시작 지점에서 주어진 (x2, y2)까지 직선 그림
}

// main 함수에서 실제로 그림을 그리는 작업이 이루어짐
int main() {
	int i;
	int x1 = 200;
	int y1 = 200;
	int x2 = 400;
	int y2 = 200;

	hdc = GetWindowDC(GetForegroundWindow()); // 전역 변수 hdc 사용
	                                          // Get~ 으로 현재 활성화된 창의 디바이스 context를 가져와 hdc에 저장

	for (i = 0; i < 30; i++) { // 30개의
		line(x1, y1, x2, y2); // 직선을 그림

		          // 각 직선은 이전 직선에서
		y1 -= 10; // y1좌표는 위로 10만큼 이동한 지점에,
		y2 += 10; // y2좌표는 아래로 10만큼 이동한 지점에 그려짐

		Sleep(100); // 코드 실행을 100ms 동안 일시 정지 (이를 통해 각각의 선이 그려지는 것을 시간 간격을 두고 볼 수 있음)
	}
}
