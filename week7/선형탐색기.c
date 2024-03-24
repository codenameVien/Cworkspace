//배열에서 특정한 값 탐색하기
#include <stdio.h>
#define SIZE 10

int main() {

	int key, i;
	int list[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };

	printf("[");
	for (i = 0; i < SIZE; i++) {
		printf(" %d ", list[i]);
	} //list 배열에 들어있는 원소들을 모두 출력
	printf("]\n");

	printf("탐색할 값을 입력하시오 : ");
	scanf_s("%d", &key);
	for (i = 0; i < SIZE; i++) {
		if (list[i] == key)/*list[i]는 배열 안의 원소이고, i는 몇번쨰 원소(인덱스)인지 나타내는 것이므로 list [i] 로 써야댐!!*/ {
			printf("탐색 성공 인덱스 = %d\n", i);
			break;
		}
		else {
			printf("탐색 가능한 숫자가 없습니다.");
			break;
		} //근데 교수님은 for문 빠져나온 다음 if(i=SIZE) 로 하셨다!!! 근데 그 방법말고도 여러가지가 있다고 하셨으니 내가 한 else 문도 될듯 - 여쭤보깅
	}

	return 0;
}