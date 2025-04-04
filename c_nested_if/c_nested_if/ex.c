/* 2025-04-04
 중첩 if문, 연속적인 if문 연습
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x;

	printf("정수 입력 : ");
	scanf("%d", &x);

	// if-else문
	if (x > 0)
		printf("%d => 양수 \n\n\n", x);
	else
		printf("%d => 음수 \n\n\n", x);

	printf("입력받은 정수 : %d \n\n", x);

	printf("------------------------------------------ \n\n");

	// 스왑 알고리즘
	int big, small;
	int temp; // 스왑(swap)알고리즘을 위한 임시 변수

	printf("첫 번째 정수 입력 : ");
	scanf("%d", &big);

	printf("두 번째 정수 입력 : ");
	scanf("%d", &small);

	if (big < small) {
		temp = big;
		big = small;
		small = temp;
	}

	printf("%d >= %d \n\n\n", big, small);

	printf("------------------------------------------ \n\n");

	int a, b;
	int big2, small2;

	printf("첫 번째 정수 입력 : ");
	scanf("%d", &a);

	printf("두 번째 정수 입력 : ");
	scanf("%d", &b);

	if (a >= b) {
		big2 = a;
		small2 = b;
	} else {
		big2 = b;
		small2 = a;
	}

	printf("%d >= %d \n\n\n", big2, small2);

	printf("------------------------------------------ \n\n");

	// 중첩 if문
	// 점수에 따라 성적 부여하고 높은 성적을 받은 학생에게 장학금 주기
	int score;

	printf("점수 입력 : ");
	scanf("%d", &score);

	if (score >= 80) {
		if (score >= 90) {
			printf("A학점 \n"); // 80점 이상이고 90점 이상이면 실행
			printf("축하합니다. 이번 학기 장학금이 부여 됩니다.\n\n");
		} else {
			printf("B학점 \n\n"); // 80점 이상이고 90점 미만이면 실행
		}
	} else if (score >= 70) { 
		printf("C학점 \n\n");// 80점 미만이고 70점 이상이면 실행
	} else {
		printf("F학점 \n\n"); // 나열한 모든 조건식에 해당하지 않으면(모두 거짓이면,70점 미만이면) 실행
	}

	printf("------------------------------------------ \n\n");

	// 연속적인 if문 - 각각의 if문이 개별적(독립적)으로 검사함
	// 나이와 지역주민 여부에 따라서 요금 차등 부과하기
	int age, local, fee;

	printf("당신의 나이는? ");
	scanf("%d", &age);

	printf("지역주민이신가요? (1=예, 2=아니요) ");
	scanf("%d", &local);

	fee = 10000;

	if (age >= 60) { 
		fee -= 5000; // fee = fee - 5000;와 같음
		// 60세 이상이면 5000원 요금 할인
	}

	if (local == 1) {
		fee -= 5000; // 지역 주민이라면 5000원 요금할인
	}

	printf("\n==========================\n\n");
	printf("지불할 요금 : %d \n\n\n", fee);

	printf("------------------------------------------ \n\n");

	int i;

	printf("정수 입력 : ");
	scanf("%d", &i);

	// 연속적인 if문의 좋지 않은 예
	if (i == 0) {
		printf("0 \n\n");
	}
	if (i > 0) {
		printf("양수 \n\n");
	}
	if (i < 0) {
		printf("음수 \n\n");
	}
	// => 좋지 않은 이유? 모든 조건 전부 검사
	// i는 0, 양수, 음수 중 하나의 값만 가질 수 있음
	// 그런데 위 코드는 세 개의 조건을 전부 검사함
	// 쓸 떼없는 실행이 많아진다. if문으로 일일히 다 검사하니까.
	// if - else if - else문 구조는 하나로 묶여서 조건에 만족하는게 나오면 
	// 그 밑에 나열한 조건식은 실행 하지 않음(쓸 떼 없는 실행을 줄임)

	// 필요한 조건만 검사 + 실행 하도록 위의 코드를 고침 
	if (i == 0) {
		printf("0 \n\n"); // 첫 조건이 참이면 바로 실행하고 나머지 전부 무시
	} else if (i > 0) {
		printf("양수 \n\n"); // 두 번째 조건은 첫 번째가 실패했을 때만 검사
	} else {
		printf("음수 \n\n"); //마지막 else는 위 조건 다 실패했을 때 자동 실행
	}

	return 0;
}