/* 2025-04-04 
관계, 논리, 증감 연산자 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	
	// 부호(+, -) 연산자 - 단항 연산자(피연산자의 개수 1)

	int x, y;
	
	x = -10;
	y = -x;

	printf("x = %d \n", x); // -10
	printf("y = %d \n", y); // 10
	
	*/

	/*
	
	// 증감 연산자(전위, 후위 연산자)

	int a = 10, b = 10;
	int x, y;

	// 전위 연산자 : 증가/감소 시킨 후 실행
	x = ++a; // a = 11, x = 11
	y = --b; // b = 9, y = 9 

	printf("전위연산결과 \n");
	printf("a = %d, b = %d \n", a, b); // a = 11, b = 9  
	printf("x = %d, y = %d \n", x, y); // x = 11, y = 9
	
	*/

	/*
	
	// 후위 연산자 : 실행 후 증가/감소
	int a = 10, b = 10;
	int x, y;

	x = a++; // x = 10 , a = 11
	y = b--; // y = 10 , b = 9

	printf("후위연산결과 \n");
	printf("a = %d, b = %d \n", a, b); // a = 11, b = 9
	printf("x = %d, y = %d \n", x, y); // x = 10, y = 10

	*/
	/*
	* 
	int x = 10, y = 10;

	printf("전위증감연산자 예제 - 증가 후 출력 \n");
	printf("  x = %d \n", x);   //  x = 10
	printf("++x = %d \n", ++x); //++x = 11
	printf("  x = %d \n\n", x); //  x = 11

	printf("후위증감연산자 예제 - 출력 후 증가\n");
	printf("  y = %d \n", y);   //  y = 10 
	printf("y++ = %d \n", y++); //y++ = 10
	printf("  y = %d \n", y);   //  y = 11

	*/

	/*
	
	int x = 1, y = 1;

	int next_x = ++x; // x = 2 , next_x = 2
	int next_y = y++; // next_y = 1 , y = 2 

	printf("++x = %d \n", next_x); //++x = 2
	printf("y++ = %d \n", next_y); //y++ = 1

	*/

	/*
	
	// 관계 연산자
	// 참이면 1 , 거짓이면 0 생성

	int x = 2, y = 4;

	printf("x == y의 결과 : %d \n", x == y);  // x == y의 결과 : 0
	printf("x != y의 결과 : %d \n", x != y);  // x != y의 결과 : 1
	printf("x > y의 결과  : %d \n", x > y);   // x > y의 결과  : 0
	printf("x < y의 결과  : %d \n", x < y);   // x < y의 결과  : 1
	printf("x >= y의 결과 : %d \n", x >= y);  // x >= y의 결과 : 0
	printf("x <= y의 결과 : %d \n", x <= y); // x <= y의 결과  : 1
	
	*/
	
	/*
	
	int x, y;

	printf("두 개의 정수를 입력하세요.\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("입력 받은 정수 : %d, %d \n\n", x, y);

	printf("%d == %d의 결과 : %d \n", x, y, x == y);   
	printf("%d != %d의 결과 : %d \n", x, y, x != y);   
	printf("%d > %d의 결과  : %d \n", x, y, x > y);    
	printf("%d < %d의 결과  : %d \n", x, y, x < y);    
	printf("%d >= %d의 결과 : %d \n", x, y, x >= y);   
	printf("%d <= %d의 결과 : %d \n", x, y, x <= y); 

	*/

	// 삼항 연산자
	int x , y;

	printf("첫 번째 수는? \n");
	scanf("%d", &x);

	printf("두 번째 수는? \n");
	scanf("%d", &y);
	printf("-------------------- \n\n");

	printf("큰 값   = %d \n", (x > y) ? x : y);
	printf("작은 값 = %d \n", (x < y) ? x : y);

	return 0; // 운영체제에게 반환. 0은 프로그램 정상 종료를 의미함
}