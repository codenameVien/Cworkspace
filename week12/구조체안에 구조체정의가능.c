////// 사각형의 면적 계산
////struct중첩!!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//struct rect {
//	struct point p1;
//	struct point p2;
//};
//
//int main() {
//	struct rect r;
//	int w, h, area, peri; // w: width, h: height, area: 면적, peri: 둘레
//
//	printf("왼쪽 상단의 좌표 입력 : ");
//	scanf("%d %d", &r.p1.x, &r.p1.y);  // x와 y는 둘다 int형이니깐 &를 붙인다고 하셨음
//
//	printf("오른쪽 상단의 좌표 입력 : ");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//
//	w = r.p2.x - r.p1.x; //w= width
//	h = r.p2.x - r.p1.x; //h = height
//
//	area = w * h;
//	peri = 2 * w + 2 * h;
//	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
//
//	return 0;
//}
//
///* 실행 결과
//
//왼쪽 상단의 좌표 입력 : 1 1
//오른쪽 상단의 좌표 입력 : 6 6
//면적은 25이고 둘레는 20입니다.
//
//*/