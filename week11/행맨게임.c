///* <�ٽɷ���>
//[ch = getch()�� for��]
//- ���� ���� �迭 solution[] = ��meet at midnight��
//- ����ڰ� �Է��ϴ� ���� �����ϴ� ���� �迭 answer[] =��____��
//- ����� �Է¹��ڴ� getch()�� ����
//- ����ڰ� ���ڿ��� ����ִ� ���ڸ� ��Ȯ�� �Է��ϸ� 
//   ȭ�鿡 �� ���ڸ� ����ϱ� ���� 
//   �Է¹��ڿ� ���ڿ��� �� ���ڸ� for ������ ���鼭 �ϳ��� ���Ѵ�
//
//[while - if��]
//- ����� �Է¹��ڰ� ���信 �ִ��� �˻��ϴ� �ݺ� ���� �ۼ� 
//- �ݺ��Ǵ� Ƚ���� �� �� ���� ������ while ������ �ݺ��ؼ� ���߱� ����
//- ����� ����� �Է��� ������ �ݺ� ����
//
//
//
//+ �õ�Ƚ��
//*/
//
//#include <stdio.h>
//#define MAX_TRIES 10
//
//int main() {
//
//	char solution[100] = "meet at midnight";
//	char answer[100] = "____ __ ________";
//	char ch;
//	int i;
//	int tries = 0;
//
//	while (1) {
//		printf("\n���ڿ��� �Է��Ͻÿ� : %s \n", answer);
//		printf("���ڸ� �����Ͻÿ� (�õ�Ƚ��:%d) : ", tries);
//		ch = getch();
//		for (i = 0; solution[i] != NULL; i++) { // soluton�迭�� ����ִ� ���� ���� �������(����) �ݺ� (0�ƴҶ�)
//			if (solution[i] == ch) //solution�迭�� ����ִ� ���� getch()�� �Է¹��� ch ���� ������
//				answer[i] = ch; // answer�迭�� ����ִ� ���� ch�� ����.
//		}
//		if (strcmp(solution, answer) == 0) { // solution�� answer ���ڿ��� ���ؼ� ������ 0�� ����
//			printf("����!! \n");
//			break;
//		}
//		if (tries++ >= MAX_TRIES) {
//
//			printf("�ִ� �õ� Ƚ��(%d)�� �ʰ��߽��ϴ�.", MAX_TRIES);
//			break;
//		}
//	}
//	return 0;
//}