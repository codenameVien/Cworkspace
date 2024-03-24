//#include <stdio.h>
//
//struct student {
//	int number; //학번
//	char name[20]; //이름
//	double grade; // 학점
//};
//
//int main() {
//
//	struct student s = { 200100, "홍길동", 4.5 };
//	struct student* p;
//
//	p = &s;
//	printf("학번=%d,이름=%s,학점= %f,\n", s.number, s.name, s.grade);
//	printf("학번=%d,이름=%s,학점= %f,\n", (*p).number, (*p).name, (*p).grade);
//	printf("학번=%d,이름=%s,학점= %f,\n", p->number, p->name, p->grade);
//
//	return 0;
//}
