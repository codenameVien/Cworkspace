//윤년 판단

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;

	printf("연도를 입력하세요 : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // != 기억하기!!!! 
	//아래에 이거 처음에 && 3개 써서 틀린 이유 적어놓음
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);
	
	return 0;
}


/*
내가 처음에 if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) 썼었는데,
이걸로 실행하면 2020를 입력했을 때 윤년이 아니라고 나왔다. 
왜냐하면
year % 4 == 0 은 참이므로 참, year % 100 != 0 은 거짓이므로 참인데
year % 400 == 0 은 거짓이므로 거짓이기 때문에 if문을 건너뛰고 else에서 출력된다.
*/