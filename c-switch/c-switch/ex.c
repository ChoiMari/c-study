/* 2025-04-07 switch문 예제 */
/*

switch(조건값){ // 정수,결과가 정수로 나오는 수식, enum, 문자 가능(실수, 문자열 불가)
	case 상수식 : 명령문; //필수, case문 반드시 1개 이상, 상수식 - 정수, 문자, enum 가능(문자열, 실수 불가)
		break; // 선택(근데 안쓰면 제어할 수 없음)
	default : 명령문; // 선택 사항, 해당하는 case가 없는 경우 실행됨
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int n;

	printf("정수 입력(1~3) : ");
	scanf("%d", &n);

	switch (n) {
		case 1 : printf("\n1번 \n\n"); //조건식의 값이 1일 경우 실행(break를 만날 때까지)
			break;
		case 2 : printf("\n2번 \n\n"); //조건식의 값이 2일 경우 실행(break를 만날 때까지)
			break;
		case 3 : printf("\n3번 \n\n"); //조건식의 값이 3일 경우 실행(break를 만날 때까지)
			break;
		default: printf("\n1 ~ 3까지만 입력하십시오.\n\n"); //조건값에 해당하는 case가 없을 때 실행됨
	}

	//-----------------------------------------------------------

	/* 잘못된 예시
	double d = 2.0;

	// switch문 조건값 : 정수형(int, char, enum) 만 허용
	switch (d) { // 컴파일 에러 : 조건값에 실수 불가
		case 0.1 : printf("\n실수 컴파일 오류 \n\n"); 
			break;
		case '2' : printf("\n상수식에 문자 가능 \n\n"); // '2'는 문자 리터럴 → 내부적으로 ASCII 정수값(50)
			break;
		case "study" : printf("\n문자열 컴파일 오류 \n\n"); 
			break;
		case 2 : printf("\n정수 가능 \n\n");
			break;
		case 2 : printf("\n컴파일 오류 : 중복 불가 \n\n");
			break;
		default : printf("\n--------------------\n\n"); 
	}
	*/

	//-----------------------------------------------------------

	int i;

	printf("정수 입력(1~5) : ");
	scanf("%d", &i);

	switch (i) {
		case 1: printf("\n수박 \n"); // 수박 포도까지 출력됨(break를 만날 때까지)
			                           
		case 2: printf("\n포도 \n"); // 포도 출력됨(break를 만날 때까지)
			break;
		case 3: printf("\n체리 \n"); 
			break;
		case 4: printf("\n파인애플 \n"); 
			break;
		case 5: printf("\n딱딱한 복숭아 \n"); 
			break;
		default: printf("\n1 ~ 5까지만 입력하십시오.\n"); //조건값에 해당하는 case가 없을 때 실행됨
	}

	printf("\n\n----------------------------------------------------\n\n");

	// break를 쓰지 않는 경우(고의적)
	int x;

	printf("정수 입력(1~5) : ");
	scanf("%d", &x);

	switch (x) {
		case 5: printf("* * * * * \n"); 
		case 4: printf("* * * * \n"); 
		case 3: printf("* * * \n");
		case 2: printf("* * \n");
		case 1: printf("* \n\n");
			break;
		default: printf("\n1 ~ 5까지만 입력하십시오.\n\n"); 
	}
	/*
		case문은 책갈피 역할 하는 것
		조건값에 해당하는 case문 위치로 가서 break; 만날 때까지 
		또는 } 코드 블록이 끝날 때 까지 실행됨
	*/

	printf("\n\n----------------------------------------------------\n\n");

	// 사용자 level에 따른 권한 부여(level 0 > 1 > 2 순으로 높음)
	int level;

	printf("레벨 입력(0~2) : ");
	scanf("%d", &level);

	switch (level) {
	case 0: printf("delete 권한 있음 \n");
	case 1: printf("write 권한 있음 \n");
	case 2: printf("read 권한 있음 \n");
		break;
	default: printf("\n0~2까지만 입력하십시오.\n\n");
	}


	return 0; //운영체제에게 0을 반환 : 프로그램 정상 종료
}