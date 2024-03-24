//#include <stdio.h>
//
//// 2차원 공간의 점을 구조체로 나타낸다잉
//struct point {
//	int x;
//	int y;
//};
//
///* 1번 방식으로 쓰는 것을 권장!! */
//int main() {
//
//	struct point p = { 1,2 }; // 1번 (권장!!)
//	struct point q = { .y = 2, .x = 1 }; // 2번
//	struct point r = p; // 3번
//	                    // p도 point구조체고 r도 point구조체니까
//	                     // r = p 라고 했으니 r에다가 p의 값을 그대로 복사해옴
//	                      // 따라서 r도 {1,2}의 값을 갖게 됨
//	r = (struct point) { 1,2 }; // 4번
//
//	printf("p=(%d,%d) \n", p.x, p.y);
//	printf("q=(%d,%d) \n", q.x, q.y);
//	printf("r=(%d,%d) \n", r.x, r.y);
//
//	return 0;
//}
//
///* 실행결과
//
//p=(1,2)
//q=(1,2)
//r=(1,2)
//
//*/