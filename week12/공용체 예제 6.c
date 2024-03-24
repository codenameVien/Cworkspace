////공용체는 메모리 공유 가능, but 한놈만 사용가능(동시 사용은 불가)
////                             (아래 코드에서 따지면 int 와 char 중 하나만
//
//
//#include <stdio.h>
//
//union example {
//	int i;
//	char c;
//};
//
//int main(void) {
//	union example data;
//	data.c = 'A';
//	printf("data.c:%c data.i:%i\n", data.c, data.i);
//	data.i = 10000;
//	printf("data.c:%c data.i:%i\n", data.c, data.i);
//}