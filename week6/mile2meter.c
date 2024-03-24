////마일을 미터로 변환
//#include <stdio.h>
//
//int main() {
//
//	int meter;
//	int mile = 0;
//
//	while (mile < 3) {
//		meter = mile * 1609;
//		printf("%d 마일은 %d미터입니다.\n", mile, meter);
//		mile++;
//	}
//	return 0;
//}




//마일을 미터로 변환 

#include <stdio.h>

int main() {

	int mile = 0;

	while (mile < 3) {
		printf("%d 마일은 %d미터입니다.\n", mile, mile*1609); /*일케 쓰면 mile 반드시 0으로 초기화 해야함,, 근데 다 그런거 아냐?*/
		mile++;
	}
	return 0;
}