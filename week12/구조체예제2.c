//#include <stdio.h>
//
//// 2���� ������ ���� ����ü�� ��Ÿ������
//struct point {
//	int x;
//	int y;
//};
//
///* 1�� ������� ���� ���� ����!! */
//int main() {
//
//	struct point p = { 1,2 }; // 1�� (����!!)
//	struct point q = { .y = 2, .x = 1 }; // 2��
//	struct point r = p; // 3��
//	                    // p�� point����ü�� r�� point����ü�ϱ�
//	                     // r = p ��� ������ r���ٰ� p�� ���� �״�� �����ؿ�
//	                      // ���� r�� {1,2}�� ���� ���� ��
//	r = (struct point) { 1,2 }; // 4��
//
//	printf("p=(%d,%d) \n", p.x, p.y);
//	printf("q=(%d,%d) \n", q.x, q.y);
//	printf("r=(%d,%d) \n", r.x, r.y);
//
//	return 0;
//}
//
///* ������
//
//p=(1,2)
//q=(1,2)
//r=(1,2)
//
//*/