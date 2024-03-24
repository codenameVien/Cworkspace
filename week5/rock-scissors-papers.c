//가위바위보 게임 74~75p  

#include <stdio.h>
#include <stdlib.h>

int main() {

	int user, computer;

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2) : ");
	scanf_s("%d", &user); //사용자로부터 정수 입력받음

	srand(time(NULL)); //rand()함수 준비
	computer = rand() % 3; //컴퓨터가 난수를 생성시키고 정수를 선택한다
	printf("사용자=%d\n", user);
	printf("컴퓨터=%d\n", computer);

	if ((user + 1) % 3 == computer) printf("승리\n");
	else if (computer == user) printf("비겼음\n");
	else printf("사용자 승리\n");

	return 0;
}