// 얘도 hexedit으로 열면 값 나옴
// hex에서 오른쪽에 있는 값은 아스키 코드 값이래

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <stdio.h>

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());

	// 이미지 파일(c:\\temp\\lena.raw) 열기
	FILE* fp = fopen("c:\\temp\\lena.raw", "rb");
	if (fp == NULL) {
		printf(" c:\\temp\\lena.raw 파일을 열 수 없습니다.");
		exit(1);
	}
	char image[256][256];
	fread(image, 1, 256 * 256, fp); // 이미지 파일을 메모리(image)에 로딩 
	fclose(fp); // 파일 닫기

	int r, c;
	for (r = 0; r < 256; r++) {  // 한 줄마다 
		for (c = 0; c < 256; c++) {  // 한 픽셀씩 그린다
			int red = image[r][c];
			int green = image[r][c];
			int blue = image[r][c];
			SetPixel(hdc, c, r, RGB(red, green, blue));
		}
	}
	return 0;
}