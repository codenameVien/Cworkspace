//제곱값
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
void init_table(int table[], int size);

int main(void)
{
	int table[SIZE];
	int n, data;
	long pos;
	FILE* fp = NULL;

	// 배열을 초기화한다. 
	init_table(table, SIZE);

	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("sample.dat", "wb")) == NULL)
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 배열을 이진 모드로 파일에 저장한다. 
	fwrite(table, sizeof(int), SIZE, fp);
	fclose(fp);

	// 이진 파일을 읽기 모드로 연다.
	if ((fp = fopen("sample.dat", "rb")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}
	// 사용자가 선택한 위치의 정수를 파일로부터 읽는다. 
	while(1) //무한반복
	{
		printf("파일에서의 위치를 입력하십시요(0에서 %d, 종료-1): ", SIZE - 1); //실제 데이터 값에서 몇번쨰에 있는지를 의미 (파일포인터의 주소가 아니다!!!!!!)
		scanf("%d", &n);
		if (n == -1) break;
		pos = (long)n * sizeof(int);
		fseek(fp, pos, SEEK_SET); //pos: 내가 입력한 위치의 실제 파일포인터의 값(파일위치지정자) 
		                          // (,pos, SEEK_SET) : seek_set(파일 맨처음) 에서  pos(내가 입력한 실제 위치)로 이동
		fread(&data, sizeof(int), 1, fp); //그 특정위치(pos)에서 바이트(sizeof(int) (정수형 사이즈가 4바이트) 읽어오기
		printf("%d 위치의 값은 %d입니다.\n", n, data); //읽어온 값 불러오기
	}
	fclose(fp);
	return 0;
}

// 배열을 인덱스의 제곱으로 채운다. //////야 근데 이거 init_table 정의한거지?
void init_table(int table[], int size)
{
	int i; //파일에서의 i번쨰 위치

	for (i = 0; i < size; i++) 
		table[i] = i * i; //위치에서의 제곱값
}