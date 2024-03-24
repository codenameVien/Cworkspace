////올 lab은 아니지만 중요한듯
//
////학생들의 데이터를 반복 구조를 사용하여 입력받기
////데이터들은 구조체의 배열에 저장됨 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};
int main() {
	
	struct student list[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하시오 : ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오 : ");
		scanf("%s", list[i].name);// name은 배열이라 & 쓸 필요 X (배열은 이미 주소와 같다)
		printf("학점을 입력하시오(실수) : ");
		scanf("%lf", &list[i].grade);
		printf("\n");
	}
	printf("\n==============================================================\n");
	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
	printf("\n==============================================================\n");
	
	return 0;
}

