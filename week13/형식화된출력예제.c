//���� 30p(������29p)


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> #include <stdlib.h>
int main(void) {
	FILE* fp;
	fp = fopen("sales.txt", "a");
	fprintf(fp, "2017.3.1 ����: %d \n", 200000); //�̰� �ȿ� ����(��¥) �ٲ㼭 
	                                            // �ٽ� �����Ű�� 
	                                             // 'a' ���� �߱� ������ 
	                                             //2017.3.1 ����: 200000 �Ʒ��� '�̾' ���ο� ��¥ ����!!
	fclose(fp);
	return 0;
}