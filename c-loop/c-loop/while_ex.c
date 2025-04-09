/* 2025-04-09 while문 */
/*
	while(조건식){ //조건식이 거짓이 될 때 또는 break문으로 빠져나갈때까지 반복함 
		명령문;
		  // 조건이 true인 동안 반복됨
		  // 특정 조건에서 continue로 건너뛰고
          // 특정 조건에서 break로 탈출 가능
	}
	
	* while 반복문 종료 방법 : 
	1) 조건식이 false가 되도록 제어
	2) break문 사용 (가장 가까운 위치의 반복문 하나를 즉시 탈출)

	* 특정 상황에서만 반복 건너 뛰고 싶을 땐?
	  continue문 사용
	  */
#define _CRT_SECURE_NO_WARNINGS //-> #include위에 있어야 함
#include <stdio.h>

int main(void) {

	/*
	//복붙 코드 -_-;;
	printf("Hello, World! \n");
	printf("Hello, World! \n");
	printf("Hello, World! \n");
	printf("Hello, World! \n");
	printf("Hello, World! \n");

	printf("\n------------------------ \n\n");

	// 반복문 사용 ^o^
	int i = 1; // 반복 시작 횟수
	int end = 5; // 반복 종료 횟수
	while (i <= end) { // 1 ~ 5까지 총 5번 반복하다 i가 6이되면 종료.
		printf("Hello, World! \n");
		i++; // while문 반복 종료를 위해 사용함
	}

	printf("\n------------------------ \n\n");
	*/

	/* 예제1 : 구구단 출력(2단) */
	int dan = 2, i = 1;
	int end = 9;
	
	while (i <= end) {
		printf("%d * %d = %d \n", dan, i, dan * i);
		i++;
	}

	printf("\n------------------------ \n\n");

	/* 예제2 : 제곱값 출력(1~10까지) */
	i = 1; 
	end = 10;

	while (i <= 10) { // i가 1~10까지 반복, 11되면 종료
		printf("%5d의 제곱 %5d \n", i, i * i); //____1의 제곱 ____1, ... , ___10의 제곱 __100까지 출력
		i++;
	}

	printf("\n------------------------ \n\n");

	/* 예제3 : 1 ~ 100까지의 합 구하기 */

	int start = 1; // 더하기 연산 시작 값
	end = 100; // 더하기 연산 종료 값
	int sum = 0; // 합계 담을 변수
	i = start;

	while (i <= end) { // i가 1~100까지 반복, i가 101되면 종료
		sum += i; // sum = sum + i와 같음, +연산이 = 보다 우선순위가 높으므로 더한 다음 대입함
		i++; // 종료 제어 : i를 1씩 증가시켜 종료 조건에 도달하게 함
	}
	printf("%d ~ %d까지의 합 : %d \n", start, end, sum); // 1 ~ 100까지의 합 : 5050

	printf("\n------------------------ \n\n");

	/* 예제4 : 1 ~ 100까지의 홀수의 합 구하기 */
	start = 1;  
	end = 100;
	sum = 0;
	i = start;

	while (i <= end) {
		sum += i;
		i = i + 2;
	}
	printf("%d ~ %d까지의 홀수의 합 : %d \n", start, end, sum);

	printf("\n------------------------ \n\n");

	/* 예제5 : 1 ~ 100까지의 짝수의 합 구하기 */

	start = 1;
	end = 100;
	sum = 0;
	i = 2;

	while (i <= end) {
		sum += i;
		i = i + 2;
	}
	printf("%d ~ %d까지의 짝수의 합 : %d \n", start, end, sum);

	printf("\n------------------------ \n\n");

	/* 예제6 : 999(센티널)가 입력될 때까지 정수를 입력 받아 출력 */

	int input_data = 0; // 입력 받은 데이터 담을 변수

	while (input_data != 999) { // 999 입력 할 때까지 반복함
		printf("정수 입력(종료 : 999) :  ");
		scanf("%d", &input_data);
	}

	printf("\n------------------------ \n\n");

	/* 예제7 : 1 ~ 1000까지의 합을 계산하다가 5000이 넘는 최소의 값을 구하기
				break문을 사용한 반복문 탈출 */
	start = 1;
	end = 1000;
	sum = 0;
	i = start;

	while (i <= end) { //i가 1 ~ 1000까지 반복, 1001되면 종료
		sum += i;
		if (sum > 5000) {
			break; // sum이 5000을 초과하면 반복문 빠져나감
		}
		i++; // if문 실행시(합계가 5000을 초과하면) 반복문을 빠져나가기 때문에 실행되지 않음
	}
	printf("%d ~ %d 합 : %d \n", start, i, sum);

	printf("\n------------------------ \n\n");

	/* 예제8 : 1 ~ 1000까지의 3의 배수를 제외한 합을 계산 
				continue를 사용하여 건너 뜀 */
	start = 1;
	end = 1000;
	sum = 0;
	i = start;

	while (i <= end) {
		if (i % 3 == 0) { //i가 3의 배수일 때 참이 되어 실행
			i++; // 주의  : continue;를 만나면 즉시 건너뛰어 while문 조건 검사로 계속 이동하기 때문에
			// 반드시 continue 위에 써야함
			continue; // while문의 조건검사로 즉시 이동됨(continue의 아래 코드 실행 X)
		}
		sum += i; // continue를 만나면 실행되지 않고 건너뜀
		i++; // continue를 만나면 실행되지 않고 건너뜀
	}
	printf("%d ~ %d까지의(3의 배수 제외) 합 : %d \n", start, end, sum);

	printf("\n------------------------ \n\n");

	return 0;
}