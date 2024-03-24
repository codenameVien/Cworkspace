#include <stdio.h> 

int main() {
	
	// 각 data type(자료형)을 가리키는 포인터들 선언
	/* 이 포인터들은 각각 해당 자료형의 메모리 주소를 저장할 수 있음*/
	char* pc; // 문자형 포인터 pc, 1바이트
	int* pi; // 정수형 포인터 pi, 4바이트
	double* pd; // 실수(double)형 포인터 pd, 8바이트 

	// 모든 포인터에 동일한 메모리 주소값 10000을 할당
	/* 이때 casting(형변환)을 통해 각 타입에 맞게 주소값을 할당 */
	pc = (char*)10000; // (char*) : 명시적 형변환을 통해 char형에 맞게 주소값 저장
	pi = (int*)10000; 
	pd = (double*)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd); // 각 포인터가 가리키는 (메모리 주소에 저장된) 값 출력



	// 각 포인터 변수의 값을 1씩 증가
	/* 이때 증가하는 단위는 각 포인터의 타입에 따라 다름 */
	pc++;
	pi++; 
	pd++;

	// 증가한 후 각 포인터가 가리키는 값 출력
	/* char: 1byte 증가, int: 4 증가, double: 8 증가 */
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);



	// 각 포인터가 가리키는 메모리 주소에 2를 더한 값 출력
	/* char: 2 증가, int: 8 증가, double: 16 (8byte*2) 증가 */
	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);
	return 0;
}