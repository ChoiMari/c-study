/* 2025-04-10 for문, 이중 for문, do while문 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 예제1 : 구구단 출력하기(2단)
	int dan = 2;

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %2d \n", dan, i, dan * i);
	}

	printf("\n-----------------------\n\n");

	// 예제2 : 1~10까지 합
	int start = 1;
	int end = 10;
	int sum = 0;
	
	for (int i = start;i <= end;i++) {
		sum += i;
	}
	printf("%d ~ %d까지의 합 : %d \n", start, end, sum);

	printf("\n-----------------------\n\n");

	// 예제3 : 1~100까지 홀수의 합
	start = 1;
	end = 100;
	sum = 0;

	for (int i = start; i <= end; i+= 2) {
		sum += i;
	}
	printf("%d ~ %d까지의 홀수 합 : %d \n", start, end, sum);

	printf("\n-----------------------\n\n");

	//예제4 : 5개의 정수를 입력 받아 합 출력
	int input_data;
	sum = 0;
	int i;
	for (i = 0;i < 5;i++) { //i가 0~4까지 5회 반복 실행, 5되면 종료
		printf("%d번째 정수 입력 :  ", i + 1);
		scanf("%d",&input_data);
		sum += input_data;
	}
	printf("\n입력 받은 %d개 정수들의 합 : %d \n",i, sum);

	printf("\n-----------------------\n\n");

	//예제5) 이중 for문을 사용한 구구단 출력(2~9단)

	for (int i = 2; i < 10; i++) { // i가 2~9까지 1씩 증가, 10되면 종료
		printf("===== %d단 ===== \n", i); 
		for (int j = 1;j < 10; j++) { // j가 1~9까지 1씩 증가, 10되면 종료
			printf("%d * %d = %2d \n", i, j, i * j);
		}
		printf("\n"); // 내부(inner) 반복문 끝나면 줄내림
	}

	printf("\n-----------------------\n\n");

	//예제6) do-while문
	i = 1000;
	do {
		printf("do-while문은 조건식이 거짓이여도 무조건 한번 실행 보장 \n");
	} while (i < 1);

	printf("\n-----------------------\n\n");




	return 0;
}