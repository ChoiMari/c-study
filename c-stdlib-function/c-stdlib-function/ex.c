/* 2025-04-13 C언어 표준 라이브러리 함수 연습 */

#include <stdio.h> // 표준 입출력 헤더파일
#include <math.h> // 수학 함수 헤더 파일에 선언된 함수 사용을 위해 포함시킴
#include <stdlib.h> // 표준라이브러리(유틸리티) 헤더 파일 포함

// 함수 원형(함수 선언) : {}몸체 구현은 main()밑에 작성, 코드 가독성을 위해
// 소스코드 상에서 함수를 호출하기 전에 미리 함수가 선언(또는 정의)되어 있어야 컴파일러가 알 수 있다
void print_line(char); // 파라미터 변수명 생략 가능

int main(void) {
	
	print_line('*'); // 함수 호출(함수 실행)
	printf("\n 프로그램의 결과 \n");
	print_line('=');

	int a = 5, b = 3;
	printf("\n%d + %d = %d\n", a, b, a + b);

	printf("\n----------------------------------\n\n");

	// abs() : 절댓값 함수
	int x = 5, y = -5;

	int result_x = abs(x);
	int result_y = abs(y);

	printf("%3d의 절댓값 = %2d \n", x, result_x);
	printf("%3d의 절댓값 = %2d \n", y, result_y);

	printf("\n----------------------------------\n\n");

	//pow(a, b) : a의 b승(a^b)
	a = 2, b = 3;

	double result = pow(a,b);

	printf("%3d의 %3d승 = %3.0f\n",a, b, result);

	printf("\n----------------------------------\n\n");

	// sqrt() : 제곱근
	int i = 25;

	double result2 = sqrt(i);

	printf("%3d의 제곱근 = %.0f \n", i, result2);
	//%.0f : 형식지정자 정밀도 지정, double(실수)를 소수 0자리까지 나타냄(정수로 표현)

	printf("\n----------------------------------\n\n");

	// rand() : 난수 생성
	for (int i = 1; i <= 5; i++) {
		printf("%d회 난수 : %d \n", i, rand());
	}

	printf("\n----------------------------------\n\n");

	// 1~10까지의 난수 5회 출력
	for (int i = 1; i <= 5; i++) {
		printf("%d회 난수 : %d \n", i, (rand() % 10) + 1);
	}

	printf("\n----------------------------------\n\n");

	return 0;
}

// 함수 정의
void print_line(char c) {
	for (int i = 0; i < 40; i++) {
		printf("%c", c);
	}
}