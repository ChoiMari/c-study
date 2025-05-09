/***************************
** 프로그램 이름 : 예제1
** 개발자 : 깔깔
** 개발버전 : ver 1
** 개발날짜 : 2025-03-04
*******************************/

/* 기본구조 */

#include <stdio.h> //전처리지시자(컴파일 시작 전 실행되는 코드) 표준 입출력 함수를 쓰려고 작성.

int main(void) { // main()함수는 운영체제가 일을 시킴.
	//main() 함수가 프로그램의 시작과 끝
	// int : 리턴 타입(정수형)
	// void : 이 함수는 호출시 아규먼트를 절대 안 받는다는 뜻

	int iData; // (정수형)변수 선언
	char cData; // (문자형)변수 선언
	float fData; // (실수형)변수 선언
	int a, b; // 변수 선언시 자료형타입적고 , 로 구분해서 나열해도 됨.

	iData = 3; // 변수 초기화 : 변수에 처음 값을 저장. 
	// = 대입(할당)연산자 : 오른쪽에 있는걸 왼쪽에 대입(할당) 

	cData = 'b'; // 변수 선언시 char(문자형) 타입으로 선언해서 초기화할때 문자데이터를 대입함
	// 문자 데이터는 ''로 감싸기. 
	
	fData = 0.2;

	int c = 3; // 변수 선언 & 변수 초기화

	printf("이제 시작합니다\n"); //printf() : 호출시 ()안에 아규먼트로 넣은 문자열을 모니터로 출력하는 함수 
	printf("C언어는 재미있습니다.\n");

	return 0; //-> 보통 0은 프로그램의 정상 종료를 의미함(0이 아닌 값은 비정상 종료.)
	// main()함수의 리턴 값은 운영체제에게로 반환됨.
}
