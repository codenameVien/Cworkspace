#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;
	int number; 
	char name[30];
	float score;
	char ch;

	//성적파일(scores.txt)을 쓰기모드로 연다
	fp = fopen("scores.txt.", "w");
	if (fp == NULL) {
		printf("성적 파일 scores.txt를 열 수 없습니다.\n");
		exit(1);
	}
	
	do { 
		printf("\n학번 : ");
		scanf("%d", &number);

		printf("이름 : ");
		scanf("%s", &name);

		printf("성적 : ");
		scanf("%f", &score);

		//파일에 기록한다
		fprintf(fp, "%d %s %f\n", number, name, score);
		printf("데이터 추가를 계속하시겠습니까? (y/n) : ");
		ch = getche(); //echo를 하면서 하나의 문자를 입력받는 함수
		               //getche() 는 getch()의 echo버전
		               // echo버전이기 떄문에 y나 n 입력시 화면에 뜸
		               // getch()로 하면 y또는 n은 입력되지만 화면에는 안뜸

		            //++이거 y나 n 입력하자마자 바로 다음 단게로 넘어가는데
                    //왜 Enter안했는데 넘어가냐 할 수 있음
		            // 그 이유는 getche() (혹은 getch() ) 써서 그런듯!!!!
		            //입력받고 엔터쳐서 실행되게 하려면 scanf로 입력하잖슴


		            // ++ 근데 지금 알았는디 이거 ch가 'n'만 아니면 되기 떄문에
		            // y 아니고 딴거여도 다시 반복실행됨 ㅋㅋㅋㅋ



	} while (ch != 'n'); //do ~while (ch != 'n') : ch가 'n'이 아닐떄까지 반복실행
	                     //do가 붙어있으므로 어찌되었든 반드시 처음 한번은 실행됨
	                         // ㄴ> 즉 "데이터 추가를 계속하시겠습니까? (y/n) : " 
	                         //     라는 이 문구가 한번은 반드시 뜬다는 겨 "
	                      //그냥 while문 이였으면 
						  //처음에 char ch 정의 했을 떄
						  //'n'으로 초기화했을시에는 아예 실행 x 
						  //  ( 근데 'n'이 아니라 다른 값으로 초기화 되었다면 잘 실행됨요)
	                      // 따라서 처음에 ch 정의되었을 때 그 초깃값을 확인하는 과정이 필요한데, 
	                      // 그과정이 매우 귀찮다.
						  // 그러므로 이런 경우에는 편리함을 위해
						  // do - while 문을 사용한다!!
						  // (do - while 문은 ch를 초기화 할 필요도 없으니까
						  //   뭘로 초기화되었는지 확인할 필요도 없기 떄문에)


	fclose(fp); //파일을 닫는다
	return 0;
}
