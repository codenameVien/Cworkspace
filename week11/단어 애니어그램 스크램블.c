///* < �ٽ��ڵ� >
//
//- ���ڿ� ���� ���ڵ��� �������� ������ �ʿ��ϴ�.
//- �ΰ��� ������ �߻����Ѽ� �� ��ġ�� ���ڵ��� ���� �ٲٸ� �ȴ�.
//	
//	for (i = 0; i<len; i++) {
//		int pos1 = rand() % len;
//		int pos2 = rand() % len; 
//		char tmp = s[pos1]; 
//		s[pos1] = s[pos2]; 
//		s[pos2] = tmp;
//	}
//
//
//
//
//-  do while ������ �ݺ��� �����Ѵ�.
//
//	do {
//		scanf("%s", ans);
//	} while (strcmp(...) != 0);
//*/
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SOL "apple"
//
//int main() {
//
//	char s[100] = SOL; // ���ڿ� s�� "apple"�� ������ ���� SOL ��ũ�η� �ʱ�ȭ��
//	char ans[100]; // ans :������� ������ �����ϴ� ���ڿ�
//	int i, len;
//
//	len = strlen(s); // ���ڿ� s�� ���̸� ����ϰ� �� ���� len�� ����
//
//
//	// ������ ���� ���ڿ� s�� ��ũ����
//	for (i = 0; i < len; i++) { // : �� ������ ���ڿ��� ���̸�ŭ �ݺ�
//		int pos1 = rand()%len;
//		int pos2= rand() %len; // ���ڿ� ���� �� ��ġ pos1�� pos2�� �������� ����
//		char tmp = s[pos1];
//		s[pos1] = s[pos2]; // �� ��ġ�� �ִ� ���ڸ� ��ȯ
//		s[pos2] = tmp;
//	}
//
//	do {
//		printf("%s �� � �ܾ ��ũ���� �� ���ϱ��? : ", s); // ��ũ����� �ܾ� s�� ������
//		scanf("%s", ans);
//	} while (strcmp(ans, SOL) != 0);  // ans�� SOL�� ���� ���� ���� ��
//	                                  // �ùٸ� �ܾ�("apple")�� �Է��� ������ �� ������ �ݺ�
//
//	printf("�����մϴ�! \n");
//	return 0;
//}