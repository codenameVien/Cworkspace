//#include <stdio.h>
//
//// student 라는 구조체 정의
///* 구조체를 함수 외부에서(main함수보다 먼저) 정의하면 (?맞나?? 아님 그냥 제일 위라는 건가??)
//   해당 소스파일의 모든 함수에서 사용 가능하다 */
//struct student {
//	int number; // 학번
//	char name[20]; // 이름
//	double grade; // 학점
//};
//
//int main() {
//
//	struct student s; // 구조체 변수 s 선언
//
//	s.number = 20170001;
//	strcpy(s.name, "홍길동");
//	s.grade = 4.5;
//
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
//
//	return 0;
//}
//
///* 
//
//학번 : 20170001
//이름 : 홍길동
//학점 : 4.500000
//
//*/