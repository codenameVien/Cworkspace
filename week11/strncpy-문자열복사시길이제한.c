///* ! �丷 ��� ! */
//// strncpy()�� strcpy()���� �� ������ �Լ� !!!!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char src[] = "Hello"; // ���ڹ迭 src ���� �� �ű⿡ ���ڿ� "Hello" ����
//	char dst[6]; // ũ�Ⱑ 6�� ���ڹ迭 dst ����
//
//	strncpy(dst, src, 6); // strncpy() �Լ��� ����Ͽ� src���� dst�� 6�� ���ڸ� ����
//	                      // ���� ���� ���ڿ��� ���̰� ������ ���̺��� ª����, ������ ������ '\0'���� ä����
//	printf("����� ���ڿ� = %s\n", dst);
//
//	return 0;
//}