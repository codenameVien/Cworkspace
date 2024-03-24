//동전 던지기
//난수생성 rand()
#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("동전 던지기 게임을 시작합니다.\n");

	int coin;
	srand(time(NULL)); //0~32767의 랜덤 숫자 생성 
	                   //srand()를 안 써도 값은 나오지만 실행할 때마다 계속 똑같은 값이 나온다
	                   //srand()에서 time함수를 사용하면서 계속 다른 값이 나오게 seeding 하는 것임.
	coin = rand()%2; // 나머지(coin)가 0이면 앞면,  1이면(즉, 0이아니면) 뒷면으로 설정한 것임.
	//printf("%d", coin) //으로 어떠한 랜덤숫자가 생성되었는지 눈으로 볼 수 잇음여

	if (coin == 0) 
		printf("앞면입니다.\n");
	else 
		printf("뒷면입니다.\n");

	return 0;
}
//srand()가 rand()보다 앞에만 있으면 됨