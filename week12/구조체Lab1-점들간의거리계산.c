//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	// point구조체 변수 p1, p2 선언
//	struct point p1, p2;
//
//	double xdiff, ydiff;
//	double dist;
//
//	printf("점의 좌표를 입력하시오(x y): ");
//	scanf("%d %d", &p1.x, &p1.y); // member 앞에 꼭! 주소연산자& 써야함!!
//
//	printf("점의 좌표를 입력하시오(x y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//
//	dist = sqrt(xdiff * xdiff + ydiff * ydiff); // sqrt() : 제곱근 
//
//	printf("두 점 사이의 거리는 %f입니다. \n", dist);
//
//	return 0;
//
//}
//
///* 실행 결과 
//
//점의 좌표를 입력하시오(x y): 10 10
//점의 좌표를 입력하시오(x y): 20 20
//두 점 사이의 거리는 14.142136입니다.
//
//*/