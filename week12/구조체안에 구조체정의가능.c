////// �簢���� ���� ���
////struct��ø!!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//struct rect {
//	struct point p1;
//	struct point p2;
//};
//
//int main() {
//	struct rect r;
//	int w, h, area, peri; // w: width, h: height, area: ����, peri: �ѷ�
//
//	printf("���� ����� ��ǥ �Է� : ");
//	scanf("%d %d", &r.p1.x, &r.p1.y);  // x�� y�� �Ѵ� int���̴ϱ� &�� ���δٰ� �ϼ���
//
//	printf("������ ����� ��ǥ �Է� : ");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//
//	w = r.p2.x - r.p1.x; //w= width
//	h = r.p2.x - r.p1.x; //h = height
//
//	area = w * h;
//	peri = 2 * w + 2 * h;
//	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
//
//	return 0;
//}
//
///* ���� ���
//
//���� ����� ��ǥ �Է� : 1 1
//������ ����� ��ǥ �Է� : 6 6
//������ 25�̰� �ѷ��� 20�Դϴ�.
//
//*/