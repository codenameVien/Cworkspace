#include <stdio.h>
#include <string.h>

int main() {

	char str1[] = "cat"; // ���ڹ迭 str1 ������ ���ڿ� cat ����
	char str2[] = "dog";
	char str3[] = "dog";

	printf("strcmp(%s %s) : %d \n", str1, str2, strcmp(str1, str2)); // strcmp() �� str1�� str2�� ��
	                                                                 // �� �� ���ڿ�(str1, str2)�� �ٸ��� ������ 0�� �ƴ� ���� ��ȯ
	                                                                 // 'c'�� 'd'���� �տ� �����Ƿ� -�� ��ȯ

	printf("strcmp(%s %s) : %d \n", str2, str3, strcmp(str2, str3)); // �� ���ڿ��� �����ϱ⿡ strcmp()�� 0�� ��ȯ

	return 0;
}



/*  + �߰�������,, �ϴ� �ƽ�Ű �� ���̰� �ƴ϶� -1, 0, 1�� �ϳ��� ��

#include <stdio.h>
#include <string.h>

int main() {

	char str2[] = "cat";
	char str3[] = "fat";

	printf("strcmp(%s %s) : %d \n", str2, str3, strcmp(str2, str3)); // -1 ��ȯ

	return 0;
}

*/
