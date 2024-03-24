#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	FILE* fp;
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	if ((fp = fopen("scores.txt", "r")) == NULL) {
		fprintf(stderr, "성적 파일을 열수 없습니다.\n");
		exit(1);
	}

	while (!feof(fp)) { // 파일 끝 체크

		// 한 줄에 한 명 씩 적혀있는 학번, 이름, 성적을 읽어들임
		fscanf(fp, "%d %s %f", &number, name, &score); //'(fp,' 쓰는이유가 'fp에서' 읽어오라는 뜻인듯
		                               //문자열 배열은 그 자체가 주소!!이므로 & 안 씀!!!
		printf("%d %s %f\n", number, name, score);
		total += score;//성적 총점 계산
		count++;
	}

	printf("평균 = %f\n", total / count); // 성적 평균 계산

	fclose(fp); //파일 닫기

	return 0; 
}