extern int all_files; // all_files가 외부 전역 변수이므로 
// linkage2.c 소스파일에서는 all_files 가 정의되어 있지 않고,
// linkage1.c 소스파일에 정의되어 있는 것임

void sub() {

    all_files = 10;
}