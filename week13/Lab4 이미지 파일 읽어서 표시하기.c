// �굵 hexedit���� ���� �� ����
// hex���� �����ʿ� �ִ� ���� �ƽ�Ű �ڵ� ���̷�

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <stdio.h>

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());

	// �̹��� ����(c:\\temp\\lena.raw) ����
	FILE* fp = fopen("c:\\temp\\lena.raw", "rb");
	if (fp == NULL) {
		printf(" c:\\temp\\lena.raw ������ �� �� �����ϴ�.");
		exit(1);
	}
	char image[256][256];
	fread(image, 1, 256 * 256, fp); // �̹��� ������ �޸�(image)�� �ε� 
	fclose(fp); // ���� �ݱ�

	int r, c;
	for (r = 0; r < 256; r++) {  // �� �ٸ��� 
		for (c = 0; c < 256; c++) {  // �� �ȼ��� �׸���
			int red = image[r][c];
			int green = image[r][c];
			int blue = image[r][c];
			SetPixel(hdc, c, r, RGB(red, green, blue));
		}
	}
	return 0;
}