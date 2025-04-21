/****************************
	작성일 : 2025-04-22
	재귀함수 예제
*****************************/

// 양의 정수 n을 입력 받아서 1부터 n까지의 합을 구하는 프로그램(재귀 함수를 이용)
//	|__ 아이디어 : 1 ~ n까지의 합 = 1 부터 (n-1)의 합 + n

// 예) 1 ~ 5까지의 합 = 1 ~ 4까지의 합에 5를 더하는 것과 같음

#define _CRT_SECURE_NO_WARNINGS // #include 위에 작성해야함(VS에서 scanf()경고 때문에 작성함)
#include <stdio.h>

//함수 원형(헤더) 선언
int sum(int n);

int main(void) {
	int n; // 입력 받은 정수를 저장한 변수 선언
	int result; //결과를 저장할 변수

	printf("정수 입력 : "); //입력 안내문 출력
	scanf("%d", &n); // 사용자에게 정수(%d)를 입력받아 변수n에 저장함

	result = sum(n); //sum()함수를 호출해서 결과로 받은 반환 값을 result에 저장함 
	
	printf("\n----------------------------\n\n");
	printf("1 ~ %d까지의 합 = %d \n\n", n, result);

	return 0;
}

//함수 구현
int sum(int n) {
	if (n == 1) { // 재귀함수 쓸거라서 종료조건 반드시 필요함
		return 1; //n이 1일때 1을 반환
	} else {
		return n + sum(n - 1);
	}
}