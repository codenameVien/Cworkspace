////������ ���ͷ� ��ȯ
//#include <stdio.h>
//
//int main() {
//
//	int meter;
//	int mile = 0;
//
//	while (mile < 3) {
//		meter = mile * 1609;
//		printf("%d ������ %d�����Դϴ�.\n", mile, meter);
//		mile++;
//	}
//	return 0;
//}




//������ ���ͷ� ��ȯ 

#include <stdio.h>

int main() {

	int mile = 0;

	while (mile < 3) {
		printf("%d ������ %d�����Դϴ�.\n", mile, mile*1609); /*���� ���� mile �ݵ�� 0���� �ʱ�ȭ �ؾ���,, �ٵ� �� �׷��� �Ƴ�?*/
		mile++;
	}
	return 0;
}