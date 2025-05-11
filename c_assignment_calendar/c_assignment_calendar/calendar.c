/***********************************
    C언어 과제 - 달력 출력 프로그램
************************************/

#include <stdio.h>

int main(void) {

	printf("==================================== \n\n");
	printf(" 과제명 : 2025년 올해의 달력 출력\n\n");
	printf(" 제출자 : 최마리\n\n");
	printf(" 제출일 : 2025-05-12\n\n");
	printf("==================================== \n\n");

	int this_year = 2025; // 올해 년도
	int end_month = 12; // 달력 종료 월

	int end_day; // 월의 마지막 일

	printf("****** %d년 ******\n\n",this_year);
	
	for (int i = 1; i <= end_month; i++) { // i가 달력 시작 "월"
		// i가 1부터 end_month(12)까지 1씩 증가하며 총 12번 반복 실행함.
		
		switch (i){
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 :
				end_day = 31; // 1,3,5,7,8,10,12월은 31일까지 
				break; // switch문 빠져나옴
			case 2 :
				end_day = 28;  // 2월은 28일까지
				break; // switch문 빠져나옴
			case 4 :
			case 6 :
			case 9 :
			case 11 : 
				end_day = 30; // 4,6,9,11월은 30일까지 있음
				break; // switch문 빠져나옴
		} //switch문 끝

		printf("%d월\n",i); // 월 출력
		
		for (int j = 1; j <= end_day; j++) { // j가 달력의 "일"에 해당함
			//j가 1부터 end_day(달의 마지막 일)까지 1씩 증가하며 반복 실행. 총 end_day만큼 실행되고 종료
			
			printf("%2d ",j); // 달력의 "일" 출력

			if (j % 7 == 0) { // 7의 배수일 때 실행
				printf("\n"); // 한 주(7일)마다 줄바꿈해서 출력함
			}

		}// 안쪽 for문 끝

		printf("\n\n"); // 월이 끝나면 줄바꿈
	
	} // 바깥 for문 끝

	return 0;
}

