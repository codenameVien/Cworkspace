//한글자씩 읽는코드 ( 추가로,,, 밑에 한줄로 읽는거도 시도해ㅗ삼(교재 28페이지(원래 27p
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp1, * fp2;
	char file1[100], file2[100];

	printf("원본 파일 이름 : ");
	scanf("%s", file1);
	printf("복사 파일 이름 : ");
	scanf("%s", file2);

	//첫번쨰 파일을 읽기모드로 연다. fp1
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "원본파일 %s를 열 수 없습니다. ", file1);
		exit(1);
	}

	//두번째 파일을 쓰기 모드로 연다. fp2
	if ((fp2 = fopen(file2, "w")) == NULL) { //왜 null값과 같아야 하는 걸까???
		fprintf(stderr, "복사파일 %s를 열 수 없습니다. ", file1);
		exit(1);
	}

	int c;

	//fp1에서 한글자씩 읽어서 fp2 로 쓴다
	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp2); 
	

	//파일 닫기 반드시!!!해!!!!!!!!!
	fclose(fp1); // fp1 파일닫기
	fclose(fp2); // fp2 파일닫기 
	
	return 0;

}




//////근데 이거 ㅅㅂ 맞는ㄴ지 확인좀 ...ㄴㄴ 아닌득,, 버퍼사용하라는디
////한줄씩 읽기위해서는..(fp1에서 한줄씩 읽어서 fp2 로 쓴다)
//	else {
//		if (fgets(file1, 100, fp1) != NULL)
//			puts(file1);
//		printf("file open sucess!\n");
//	}
//	//++위만 쓰면 한줄 복사만 가능 여러줄이면 while 문 포함하기 
//	do {
//		gets(file1);//사용자로부터 한 줄을 입력받는다
//		fputs(file1, fp2); //입력받은 한줄을 파일에 쓴다
//	} while (strlen(file1) != 0);

