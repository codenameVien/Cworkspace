extern int all_files; // all_files�� �ܺ� ���� �����̹Ƿ� 
// linkage2.c �ҽ����Ͽ����� all_files �� ���ǵǾ� ���� �ʰ�,
// linkage1.c �ҽ����Ͽ� ���ǵǾ� �ִ� ����

void sub() {

    all_files = 10;
}