//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	// point����ü ���� p1, p2 ����
//	struct point p1, p2;
//
//	double xdiff, ydiff;
//	double dist;
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
//	scanf("%d %d", &p1.x, &p1.y); // member �տ� ��! �ּҿ�����& �����!!
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//
//	dist = sqrt(xdiff * xdiff + ydiff * ydiff); // sqrt() : ������ 
//
//	printf("�� �� ������ �Ÿ��� %f�Դϴ�. \n", dist);
//
//	return 0;
//
//}
//
///* ���� ��� 
//
//���� ��ǥ�� �Է��Ͻÿ�(x y): 10 10
//���� ��ǥ�� �Է��Ͻÿ�(x y): 20 20
//�� �� ������ �Ÿ��� 14.142136�Դϴ�.
//
//*/