///출석부 알고리즘
//1. 학기는 15주로 가정한다.
//2. 사용자에게 각 강의마다 출석(1)인지 결석(0)인지 질문해서 크기가 15인 배열에 저장한다.
//3. 결석률을 계산하고 30%이상 결석하면 수업일수 부족으로 출력한다
//4. 결석률 = (결석한 날짜수) / 15

#include <stdio.h>
#define SIZE 15  //학기==15주

int main() {

	int att_book[SIZE] = { 0 }; // 전부 0으로 초기화, att_book[15] : 출석부 (출석부 배열 안에 출석인지 결석인지 0과 1로 저장됨)
	int i, count = 0;  // i : n번째 강의 ,  count : 결석한 횟수 


	///사용자로부터 출석인지 결석인지를 받아서 배열에 저장한다. 
	for (i = 0; i < SIZE; i++) {
		printf("%d번째 강의에 출석하셨나요?(출석은 1, 결석은 0): ", i+1); //시작 index가 0이므로 i+1해주어서 출력시 1부터 시작하도록!
		scanf_s("%d", &att_book[i]);
	}

	//배열을 검사하여서 결석한 횟수를 계산한다. 
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0) //출석부에 0으로 찍혀있을 때
			count++; 
	}

	//이번 학기 결석률을 계산한다. 
	double ratio = (double)count / SIZE; // ratio : 결석률
	if (ratio > 0.3)
		printf("수업일수 부족입니다(%f%%). \n", ratio * 100.0);
	return 0;
}