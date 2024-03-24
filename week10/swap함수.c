/*swap() 함수 #2*/
// 포인터를 이용하여 참조에 의한 호출을 사용
#include <stdio.h>

// swap()함수 정의
/* 이 함수는 두 개의 정수형 포인터 px, py를 인자로 받음 */
/* 이 포인터들은 main 함수에서 호출할 때 각각 변수 a, b의 주소를 전달받음 !! */
void swap(int* px, int* py) 
{
	int tmp; // 임시 저장공간을 위한 정수형 변수 tmp 선언

	tmp = *px; // 'px가 가리키는 위치에 있는 값'을 'tmp'에 저장
	           // 즉, 'a의 값'을 'tmp'에 저장

	*px = *py; // 'py가 가리키는 위치에 있는 값'을 'px가 가리키는 위치'에 저장
	           // 즉, 'b의 값'을 'a'에 저장

	*py = tmp; // 'tmp에 저장해둔 원래 a의 값'을 'py가 가리키는 위치'에 저장
	           // 즉, 'tmp의 값'을 'b'에 저장
}

int main() {

	int a = 10, b = 20; 
	printf("swap() 호출 전 a=%d b=%d\n", a, b);

	swap(&a, &b); //참조에 의한 호출로 포인터 사용하므로 &주소연산자 꼭 써야댐!!!!!
	              // swap 함수를 호출하며, 
	              // 'a의 주소'와 'b의 주소'를 swap함수의 인자인 포인터 px와 포인터 py로 전달
	              // 이로써 'a의 값'과 'b의 값'이 교환됨

	printf("swap() 호출 후 a=%d b=%d", a, b);

	return 0;
}






///*swap() 함수 #1*/
//// 값에 의한 호출로 변수 2개의 값을 바꾸는 작업
//#include <stdio.h>
//
//void swap(int x, int y)
//{
//	int tmp;
//
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main() {
//	
//	int a = 10, b = 20;
//	printf("swap() 호출 전 a=%d b= %d\n", a, b);
//
//	swap(a, b);
//
//	printf("swap() 호출 후 a=%d b=%d", a, b);
//
//	return 0;
//}
///* 실행 결과 */
//// swap() 호출 전 a=10, b=20
//// swap() 호출 후 a=10, b=20
