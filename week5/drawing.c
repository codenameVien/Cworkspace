#include <windows.h>
#include <stdio.h>

int main() {

	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command; 

	printf("��ɾ �Է��Ͻÿ�(r�Ǵ�c) : ");
	command = getchar(); //�Ǵ� scanf("%c", &command);

	if (command == 'r') {
		Rectangle(hdc, 100, 100, 200, 200);
	}
	else if (command == 'c') {
		Ellipse(hdc, 200, 200, 300, 300);
	}
	else printf("�߸��� ��ɾ��Դϴ�. \n");
	
	Rectangle(hdc, 100, 100, 200, 200);
	return 0;
}