//#include <stdio.h>
//
//int main() {
//
//	char s[] = "HelloWorld"; // s[]는 문자열 "HelloWorld"를 저장하는 배열 
//	                         // 이 배열은 메모리에 할당된 공간에 직접 저장됨 
//	                          // 그 내용은 변경 가능 (data segment)
//	
//	char* p = "HelloWorld"; // p는 문자열 "HelloWorld"를 가리키는 포인터
//	                        // 이 문자열은 프로그램의 읽기 전용 메모리에 저장되므로 
//	                         // 내용을 변경하려고 하면 프로그램이 중지됨 (text segment)
//	                          // 따라서 주석 처리된 p[0] = 'h'; 코드는 프로그램의 중지를 초래
//	printf("1.\n");
//	printf("배열 문자열 = %s \n", p);
//	printf("포인터가 가리키는 문자열 = %s \n\n", p);
//
//
//	printf("2.\n");
//	s[0] = 'h'; // 변경 가능하다.
//	//p[0] = 'h'; //컴파일은 되나 이 문장을 실행하면 프로그램의 작동이 중지된다.
//	printf("배열 문자열 = %s \n\n", s);
//
//
//
//	// 포인터 p는 다른 문자열을 가리키도록 변경할 수 있음
//	printf("3.\n");
//	p = "Goodbye"; // 이것은 가능하다. 큰 장점! 
//	               // p가 "Goodbye"라는 새 문자열을 가리키게 만듦
//	//s = "notwork"; // 배열은 불가능, 컴파일 자체가 안됨(컴파일 오류)
//	                 // "배열 이름" s는 "상수 포인터"로 
//	                  // 배열이 한 번 생성되면 배열 자체를 다른 곳을 가리키도록 변경할 수 없음
//	printf("포인터가 가리키는 문자열 = %s \n", p);
//
//	return 0;
//}