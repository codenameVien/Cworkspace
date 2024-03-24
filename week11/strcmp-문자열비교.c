#include <stdio.h>
#include <string.h>

int main() {

	char str1[] = "cat"; // 문자배열 str1 선언후 문자열 cat 저장
	char str2[] = "dog";
	char str3[] = "dog";

	printf("strcmp(%s %s) : %d \n", str1, str2, strcmp(str1, str2)); // strcmp() 로 str1와 str2를 비교
	                                                                 // 이 두 문자열(str1, str2)은 다르기 때문에 0이 아닌 값을 반환
	                                                                 // 'c'가 'd'보다 앞에 있으므로 -값 반환

	printf("strcmp(%s %s) : %d \n", str2, str3, strcmp(str2, str3)); // 두 문자열으 동일하기에 strcmp()는 0을 반환

	return 0;
}



/*  + 추가적으로,, 일단 아스키 값 차이가 아니라 -1, 0, 1중 하나긴 함

#include <stdio.h>
#include <string.h>

int main() {

	char str2[] = "cat";
	char str3[] = "fat";

	printf("strcmp(%s %s) : %d \n", str2, str3, strcmp(str2, str3)); // -1 반환

	return 0;
}

*/
