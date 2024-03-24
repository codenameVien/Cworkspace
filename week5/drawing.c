#include <windows.h>
#include <stdio.h>

int main() {

	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command; 

	printf("명령어를 입력하시오(r또는c) : ");
	command = getchar(); //또는 scanf("%c", &command);

	if (command == 'r') {
		Rectangle(hdc, 100, 100, 200, 200);
	}
	else if (command == 'c') {
		Ellipse(hdc, 200, 200, 300, 300);
	}
	else printf("잘못된 명령어입니다. \n");
	
	Rectangle(hdc, 100, 100, 200, 200);
	return 0;
}