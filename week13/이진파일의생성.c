////source���� binary.bin ���� �����Ǿ� ���� (hexEdit���Ϸ� ���� �����Ͱ� ������ֱ⋚���� ���� 00���� ����)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//
//int main() {
//	FILE * fp = NULL;
//
//	fp = fopen("binary.bin", "wb");
//
//	if (fp == NULL) {
//		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");
//		exit(1);
//	}
//	else
//		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n"); 
//	
//	fclose(fp);
//
//	return 0;
//}





////source���� binary.bin ���� �����Ȱſ� hexEdit���Ϸ� ���� �����Ͱ� ������ ����(hex������ ��������)
// + ���� ���α׷��� �������� ���� hex�� �Է��ϸ� 10�������˼� ���� (�ٵ� hex�� �Ųٷ� �Է��ؾ���)
//                                                              ((hex�� �������� ������ 40 e2 01 00 00 00.. ���� ���� �ִµ�
//                                                              ((���⿡ hex�� �Է½� 01 e2 40 �Է� �ؾ���))
// 
// + ���� ���α׷��� �������� ���� dec��(decimal(10����(���⼭�� 123456)) �Է��ϸ� hex�� �˼� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL) {
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");
		exit(1);
	}
	else
		printf("���� ���� ���⿡ �����Ͽ����ϴ�.\n");


	int x = 123456;

	fwrite(&x, sizeof(int), 1, fp);

	fclose(fp);

	return 0;
}
