/* 2025-04-08
 if문을 switch문으로 바꾸고(항상 가능), switch문을 if문으로 바꾸기(일부 가능, switch는 범위 표현이 어렵다)
*/
#define _CRT_SECURE_NO_WARNINGS //VS에서 scanf() 경고 때문에 사용함
#include <stdio.h>

int main(void) {
	
	/* 예제1 : 1~5까지 입력 받아 메뉴 선택 */

	int menu;
	
	printf("**********************************\n");
	printf("간식 메뉴를 번호로 선택하세요\n");
	printf("1. 과일 \n");
	printf("2. 떡볶이 \n");
	printf("3. 우유 \n");
	printf("4. 과자 \n");
	printf("5. 껌 \n");
	printf("**********************************\n");

	printf("\n메뉴 선택(1~5) :  ");
	scanf("%d", &menu);

	//if문
	if(menu == 1){
		printf("\n 1. 과일 선택 \n\n");
	} else if(menu == 2){
		printf("\n 2. 떡볶이 선택 \n\n");
	} else if(menu == 3){
		printf("\n 3. 우유 선택 \n\n");
	} else if(menu == 4){
		printf("\n 4. 과자 선택 \n\n");
	} else if(menu == 5){
		printf("\n 5. 껌 선택 \n\n");
	} else {
		printf("\n error \n\n");
	}

	//switch문
	switch(menu){
		case 1 : printf("\n 1. 과일 선택 \n\n");
			break;
		case 2 : printf("\n 2. 떡볶이 선택 \n\n");
			break;
		case 3 : printf("\n 3. 우유 선택 \n\n");
			break;
		case 4 : printf("\n 4. 과자 선택 \n\n");
			break;
		case 5 : printf("\n 5. 껌 선택 \n\n");
			break;
		default : printf("\n error \n\n");
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* 예제2 : 1~5 입력 받아 짝수/홀수를 구분 */

	int num;

	printf("정수 입력(1~5) :  ");
	scanf("%d", &num); //scanf()는 메모리 주소로 직접접근해서 변수에 값 저장. &주소 연산자 사용해야함

	//switch문
	switch(num){
		case 1 :
		case 3 : 
		case 5 : printf("\n %d : 홀수 \n\n", num);
			break;
		case 2 :
		case 4 : printf("\n %d : 짝수 \n\n", num);
			break;
		default : printf("\n error : 1 ~ 5까지만 가능합니다. \n\n");
	}

	//if문
	if (num % 2 == 0) { // 일반적으로, 0 짝수로 처리됨
		printf("\n %d : 짝수 \n\n", num);
	} else {
		printf("\n %d : 홀수 \n\n", num);
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* 예제3 : 정수 하나를 입력 받아 짝수/홀수를 구분 */

	// switch문
	switch (num % 2) {
		case 0 : printf("\n %d : 짝수 \n\n", num);
			break;
		case 1 : printf("\n %d : 홀수 \n\n", num);
			break;
		default : printf("\n error : 정수만 입력하세요. \n\n");
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* 예제4 : 두 수를 입력 받아 큰 수/작은 수를 구분 */

	int x;
	int y;

	printf("첫번째 정수 입력 :  ");
	scanf("%d", &x);

	printf("두번째 정수 입력 :  ");
	scanf("%d", &y);

	//if문
	if (x > y) {
		printf("큰 수 : %d , 작은 수 : %d \n\n", x, y);
	} else if(x < y) {
		printf("큰 수 : %d , 작은 수 : %d \n\n", y, x);
	} else if (x == y) {
		printf("%d 와 %d는 같습니다. \n\n", x, y);
	} else {
		printf("error \n\n");
	}

	//switch문으로는 표현 불가
	/* 특정 값에 따라 분기 -> switch문
	   범위, 크기 비교 -> if문
	*/


	return 0;
}