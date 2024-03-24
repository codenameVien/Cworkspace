//정수 배열에 대하여 평균을 계산하고 배열을 출력하는 함수 작성
#include <stdio.h>
#define SIZE 5 // 전처리기를 통해 SIZE를 5로 정의, 배열의 크기 = 5
double get_array_avg(int values[], int n); 
void print_array(int values[], int n);

int main() {

	int i;
	int data[SIZE] = { 10,20,30,40,50 }; // 정수형 배열 data선언 후 초기화
	double result;

	print_array(data, SIZE); // print_array 함수를 호출하여 배열의 원소를 출력
	result = get_array_avg(data, SIZE); // get_array_avg 함수를 호출하여 배열의 평균값을 계산하여 출력

	printf("배열 원소들의 평균 = %f\n", result);

	return  0;
}

// 배열 요소의 평균을 계산하는 함수 
/* 배열과 그 배열의 크기를 매개변수로 받아 배열의 평균값 계산 후 반환 */
double get_array_avg(int values[], int n) {

	int i;
	double sum = 0.0;

	for (i = 0; i < n; i++)
		sum += values[i];

	return sum / n;
}

// 배열 요소를 화면에 출력하는 함수 
/* 배열과 그 배열의 크기를 매개변수로 받아 배열의 모든 원소 출력 */
void print_array(int values[], int n) {

	int i;

	printf("[ ");

	for (i = 0; i < n; i++)
		printf("%d ", values[i]);

	printf("]\n");
}