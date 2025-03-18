# include <stdio.h> // 전처리기 지시자, <> 표준 라이브러리 디렉토리에서 찾아라, 표준 입출력 헤더 파일 삽입
//전처리기 지시자? 컴파일 전에 수행하라는 명령.

#define EX_RATE 1451 // 기호 상수 선언 1

//운영체제가 main함수를 호출한다.
int main(void) { //void : 아규먼트는 안 받는다고 명시
	
	//// 정수 변수 선언
	//int iData;
	//
	//// 실수형 변수 선언
	//double dData;
	//
	//// 문자 변수 선언
	//char ch;

	//// 변수 초기화
	//iData = 50;
	//dData = 7.7;
	//ch = 'A';

	// 변수 선언 & 초기화
	//int iData = 50;
	//double dData = 7.7;
	//char ch = 'A';
	
	//printf("iData = %8d \n", iData);
	//printf("dData = %8.2f \n", dData);
	//printf("ch    = %8c \n", ch);
	
	/* 10진수, 8진수, 16진수 */
	//int x = 10; //10진수
	//int y = 010; //8진수
	//int z = 0x10; //16진수

	//printf("x = %d \n", x); // decimal 
	//printf("y = %d \n", y); // octal
	//printf("z = %d \n\n", z); // hexadecimal

	//printf("%d = %d(%d) \n", x, x, 10);
	//printf("%d = %o(%d) \n", x, x, 8);
	//printf("%d = %x(%d) \n", x, x, 16);

	// 기호 상수 - 1) #define 상수명 값 2) const 자료형 상수명 = 값;
	int dollor1 = 10;
	int dollor2 = 100;
	int dollor3 = 1000;
	
	// 기호 상수 2 - const 사용
	const int EXCHANGE_RATE = 1451;
	
	//int won1 = 1451 * dollor1;
	//int won2 = 1451 * dollor2;
	//int won3 = 1451 * dollor3;
	//-> 이렇게 작성하면 하드코딩... 환율 오르면 일일이 고쳐야함. 권장하지 않는 방식.
	
	int won1 = EX_RATE * dollor1;
	int won2 = EX_RATE * dollor2;
	int won3 = EX_RATE * dollor3;

	int won4 = EXCHANGE_RATE * dollor1;
	int won5 = EXCHANGE_RATE * dollor2;
	int won6 = EXCHANGE_RATE * dollor3;

	printf("%d원 = %d달러 \n", won1, dollor1);
	printf("%d원 = %d달러 \n", won2, dollor2);
	printf("%d원 = %d달러 \n\n", won3, dollor3);

	printf("%d원 = %d달러 \n", won4, dollor1);
	printf("%d원 = %d달러 \n", won5, dollor2);
	printf("%d원 = %d달러 \n", won6, dollor3);

	return 0; //-> 운영체제에게 반환. 반환값 0의 의미 : 프로그램 정상 종료
	// 0이 아닌 다른 값을 반환하면, 보통 오류 발생을 의미
}