//교재 30p(원래ㅑ29p)


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> #include <stdlib.h>
int main(void) {
	FILE* fp;
	fp = fopen("sales.txt", "a");
	fprintf(fp, "2017.3.1 매출: %d \n", 200000); //이거 안에 문장(날짜) 바꿔서 
	                                            // 다시 실행시키면 
	                                             // 'a' 모드로 했기 떄문에 
	                                             //2017.3.1 매출: 200000 아래에 '이어서' 새로운 날짜 써짐!!
	fclose(fp);
	return 0;
}