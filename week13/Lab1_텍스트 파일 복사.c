//�ѱ��ھ� �д��ڵ� ( �߰���,,, �ؿ� ���ٷ� �д°ŵ� �õ��ؤǻ�(���� 28������(���� 27p
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp1, * fp2;
	char file1[100], file2[100];

	printf("���� ���� �̸� : ");
	scanf("%s", file1);
	printf("���� ���� �̸� : ");
	scanf("%s", file2);

	//ù���� ������ �б���� ����. fp1
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "�������� %s�� �� �� �����ϴ�. ", file1);
		exit(1);
	}

	//�ι�° ������ ���� ���� ����. fp2
	if ((fp2 = fopen(file2, "w")) == NULL) { //�� null���� ���ƾ� �ϴ� �ɱ�???
		fprintf(stderr, "�������� %s�� �� �� �����ϴ�. ", file1);
		exit(1);
	}

	int c;

	//fp1���� �ѱ��ھ� �о fp2 �� ����
	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp2); 
	

	//���� �ݱ� �ݵ��!!!��!!!!!!!!!
	fclose(fp1); // fp1 ���ϴݱ�
	fclose(fp2); // fp2 ���ϴݱ� 
	
	return 0;

}




//////�ٵ� �̰� ���� �´¤��� Ȯ���� ...���� �ƴѵ�,, ���ۻ���϶�µ�
////���پ� �б����ؼ���..(fp1���� ���پ� �о fp2 �� ����)
//	else {
//		if (fgets(file1, 100, fp1) != NULL)
//			puts(file1);
//		printf("file open sucess!\n");
//	}
//	//++���� ���� ���� ���縸 ���� �������̸� while �� �����ϱ� 
//	do {
//		gets(file1);//����ڷκ��� �� ���� �Է¹޴´�
//		fputs(file1, fp2); //�Է¹��� ������ ���Ͽ� ����
//	} while (strlen(file1) != 0);

