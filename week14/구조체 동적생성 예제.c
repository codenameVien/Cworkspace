/* 동적 메모리 할당과 구조체를 함께 사용해보자 */
// 동적 메모리 할당과 구조체를 사용하여 책의 정보를 저장하고 출력하느 역할
// 구조체 Book은 멤버로 number와 title을 가지고 있음
// main 함수에서 구조체 Book 의 동적 배열을 생성하고 사용하고 있음
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book { // 구조체 book
	int number; // 멤버 : 책의 번호
	char title[100]; // 멤버 : 제목
};

int main() {

	struct Book* p; // Book 구조체를 가리킬 포인터 p 선언

	p = (struct Book*)malloc(2 * sizeof(struct Book)); // 할당하는 공간의 크기는 2개의 Book 구조체 크기와 같음

	if (p == NULL) {
		printf("메모리 할당 오류 \n");
		exit(1);
	}

	// p[0]과 p[1]에 번호와 제목 저장
	p[0].number = 1; // (*p).number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2; // (*p+1).number = 2;
	strcpy(p[1].title, "Data Structure");
	// p[i] : 구조체 포인터에 대한 배열(array) 접근
	// *(p+i) : 포인터를 이용한 구조체 접근


	// 각 책의 번호와 제목을 출력
	printf("%d %s\n", p[0].number, p[0].title); // 출력할 때 배열(array)로 써주는 게 포인터로 써주는 것 보다 간단하므로(짧으므로) 이렇게 써줌
	printf("%d %s\n", p[1].number, p[1].title);

	free(p);
	return 0;
}