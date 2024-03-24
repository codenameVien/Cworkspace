////source가면 binary.bin 파일 생성되어 있음 (hexEdit파일로 열면 데이터가 비어져있기떄문에 전부 00으로 나옴)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//
//int main() {
//	FILE * fp = NULL;
//
//	fp = fopen("binary.bin", "wb");
//
//	if (fp == NULL) {
//		printf("이진 파일 열기에 실패하였습니다.\n");
//		exit(1);
//	}
//	else
//		printf("이진 파일 열기에 성공하였습니다.\n"); 
//	
//	fclose(fp);
//
//	return 0;
//}





////source가면 binary.bin 파일 생성된거에 hexEdit파일로 열면 데이터가 씌어져 있음(hex값으로 써져있음)
// + 계산기 프로그래머 전용으로 열고 hex값 입력하면 10진수값알수 있음 (근데 hex값 거꾸로 입력해야함)
//                                                              ((hex값 내눈으로 볼때는 40 e2 01 00 00 00.. 으로 써져 있는데
//                                                              ((계산기에 hex값 입력시 01 e2 40 입력 해야함))
// 
// + 계산기 프로그래머 전용으로 열고 dec값(decimal(10진수(여기서는 123456)) 입력하면 hex값 알수 있음
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL) {
		printf("이진 파일 열기에 실패하였습니다.\n");
		exit(1);
	}
	else
		printf("이진 파일 열기에 성공하였습니다.\n");


	int x = 123456;

	fwrite(&x, sizeof(int), 1, fp);

	fclose(fp);

	return 0;
}
