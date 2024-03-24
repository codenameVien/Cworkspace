/* 동적 메모리 할당과 구조체를 함께 사용하여 사용자 입력을 처리하는 방법 */
// 동적 메모리 할당과 구조체를 사용하여 여러 영화의 제목과 평점을 입력받아 저장하고 출력하는 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 영화를 구조체로 표현
struct movie {
	char title[100]; // 영화 제목
	double rating; // 영화 평점
};

int main() {
	struct movie* ptr; // movie 구조체를 가리킬 포인터 ptr 선언
	int i, n;

	printf("영화의 개수 : ");
	scanf("%d", &n); // 사용자에게 영화의 개수를 입력받아 n에 저장
	                 // 이 값은 동적 메모리 할당에서 사용됨

	ptr = (struct movie*)malloc(n * sizeof(struct movie)); // 할당하는 공간의 크기는 n개의 movie 구조체 크기와 같음
	                                                       // malloc한수는 할당된 메모리의 시작 주소를 반환하며, 이 주소는 ptr포인터에 저장됨

	if (ptr == NULL) {
		printf("메모리 할당 오류 \n");
		exit(1); // 오류 시 종료
	}

	// 사용자에게 제목과 평점을 입력받아 ptr이 가리키는 구조체 배열에 저장
	for (i = 0; i < n; i++) {
		printf("영화 제목 : ");
		scanf("%s", ptr[i].title); // title은 문자 배열이라 그 자체가 주소이므로 주소연산자 & 쓸 필요없음!!
		printf("영화 평점 : ");
		scanf("%lf", &ptr[i].rating); // 그냥 더블 변수니까 & 넣어줘야 함!!!
	}
	
	printf("\n=======================\n");

	// 저장된 제목과 평점 출력
	for (i = 0; i < n; i++) {
		printf("영화 제목 : %s \n", ptr[i].title);
		printf("영화 평점 : %lf \n", ptr[i].rating);
	}

	printf("=======================\n");

	free(ptr); // 동적 할당한 메모리 해제(반납)

	return 0;
}