//야 이거 break 문 연습한건데 아뇓니까 이따 다시해봐


#include <stdio.h>

int main() {
	int number;

    switch (number) {
    case 0:
	    printf("없음\n");
        break; 
	case 1:
	    printf("하나\n");
    case 2: 
		printf("둘\n");
		break; 
	default:
	    printf("많음\n");
		break;
} 
return 0;
}