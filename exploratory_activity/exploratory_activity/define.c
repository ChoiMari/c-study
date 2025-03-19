/* C언어 탐구활동 1차
 * 이름 : 최마리
 * 날짜 : 2025-03-19
 * 주제 : #define을 이용한 기호상수 10개를 선언하여 프로그램을 만드세요.
 * 프로그램 설명 : #define으로 선언한 기호 상수 10개를 이용한 자기소개와
 * 사용자에게 일주일 동안 공부한 횟수를 입력받아 그에 따른 공부 태도 평가 및 예상 성적 결과를 도출하는 프로그램.
*/

#define _CRT_SECURE_NO_WARNINGS //-> scanf()함수 사용시 발생하는 오류 때문에 추가함.
#include <stdio.h> // 전처리기 지시자 - 표준 입출력 헤더 파일 
#define MY_NAME "최마리" //#define를 이용한 상수 선언 1
#define MAJOR "컴퓨터공학과" // 2
#define FAVORITE_COURSE "C언어" // 3
#define I_WANT "잘하고 싶습니다!" // 4
#define LECTURE 'C' // 5
#define GOOD_GRADE "A+" // 6
#define BAD_GRADE "슬픈 성적" // 7
#define YEAR 2025 // 8
#define MONTH 3 // 9
#define DAY 19 // 10

int main(void) {

	const char good_attitude[] = "열심히 노력";
	const char normal_attitude[] = "평범";
	const char bed_attitude[] = "게을렀음";
	char* my_attitude = "?";
	int study_date = 0;
	char* my_grade = "?";

	// 자기소개 출력
	printf("----------------------------------------------\n\n");
	printf("안녕하세요. 저는 %s입니다. \n", MY_NAME); // 1
	printf("저의 전공은 %s입니다. \n", MAJOR); // 2
	printf("제가 좋아하는 수업은 %s입니다 \\(^__^)/ \n", FAVORITE_COURSE); // 3 
	printf("저는 %c언어를 %s \n", LECTURE, I_WANT); // 4, 5 
	printf("저는 %s하여 %s를 받고 싶습니다. \n", good_attitude, GOOD_GRADE);
	printf("감사합니다 ㅎㅎ\n");
	printf("제출 날짜 : %4d년 %2.2d월 %2.2d일\n\n", YEAR, MONTH, DAY); // 8, 9, 10
	printf("----------------------------------------------\n\n");

	// 일주일간 공부 횟수에 따른 공부 태도 평가 및 예상 성적 도출
	while(1){ // 무한 루프 - (입력 성공할 때까지 반복)
		// 입력 안내문 출력
		printf("일주일 동안 공부를 몇 번 했나요? (0 ~ 7 정수만 입력 가능) \n\n");
		
		//이중 if문 - scanf 함수로 입력값을 성공적으로 읽었는지 확인
		if (scanf("%d", &study_date) == 1) { // 사용자에게 값을 입력 받고 성공 시 if문 실행

			// 0~7 입력 값 확인
			if (study_date >= 0 && study_date < 8) { 
				break; // while 반복문 끝냄
			} else { 
				// 0~7 사이의 값이 아니면 오류 메시지 출력
				printf("\n잘못된 입력입니다. 0 ~ 7 사이의 정수로만 입력해주세요.\n\n");
				printf("----------------------------------------------\n\n");
			}
		
		} else { // 숫자가 아닌 값을 입력했을 경우 오류 메시지 출력
			printf("\n잘못된 입력입니다. 0 ~ 7 사이의 정수로만 입력해주세요.\n\n");
			printf("----------------------------------------------\n\n");
			while (getchar() != '\n'); // 잘못된 입력 후 버퍼 비우기
		}
	}


	printf("\n입력한 공부 횟수 : %d번 \n\n", study_date);
	
	// 공부 날짜에 따른 태도 설정
	if (study_date >= 0 && study_date < 2) {
		my_attitude = bed_attitude;  // 0 ~ 1번은 게을렀음
	}
	else if (study_date >= 2 && study_date < 5) {
		my_attitude = normal_attitude;  // 2 ~ 4번은 평범
	}
	else {
		my_attitude = good_attitude;  // 5번 이상은 열심히 노력
	}

	// 공부 태도에 따른 성적 결정
	my_grade = (my_attitude == good_attitude) ? GOOD_GRADE : BAD_GRADE;

	// 공부 태도와 성적 출력
	printf("평가 : 당신의 공부 태도는 %s으로 예상 성적은 %s입니다. \n\n", my_attitude, my_grade);
	printf("----------------------------------------------\n\n");

	return 0;
}
