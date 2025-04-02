/* 2025-04-03 
* C언어 데이터 형
* 정수형, 실수형, 문자형 실습
*/

#include <stdio.h>

int main(void) {
	int x;
	double d;
	char ch;
	
	//sizeof() 연산자 : 자료형의 크기를 byte 단위로 반환함

	printf("정수형 변수 x의 크기 : %d \n", sizeof(x)); // 4
	printf("값 10의 크기         : %d \n", sizeof(10)); // 4
	printf("자료형 int의 크기    : %d \n\n", sizeof(int)); // 4

	

	printf("실수형 변수 d의 크기 : %d \n", sizeof(d)); // 8
	printf("값 3.14의 크기       : %d \n", sizeof(3.14)); // 8
	printf("자료형 double의 크기 : %d \n\n", sizeof(double)); // 8

	printf("정수 자료형 short의 크기 : %d \n", sizeof(short)); // 2
	printf("정수 자료형 int의 크기   : %d \n", sizeof(int)); // 4
	printf("정수 자료형 long의 크기  : %d \n\n", sizeof(long)); // 4

	printf("실수 자료형 float의 크기  : %d \n", sizeof(float)); // 4
	printf("실수 자료형 double의 크기 : %d \n\n", sizeof(double)); // 8
	
	printf("문자 자료형 char의 크기   : %d \n\n", sizeof(char)); // 1

	printf("------------------------------------------------------\n\n");

	/* 정수형을 출력하는 방법 */
	int iData = 5;
	printf("%d \n", iData);    //5
	printf("%5d \n", iData);   //____5 
	printf("%5.2d \n", iData); //___05 
	printf("%5.5d \n", iData); //00005
	// %5d : (문자폭 지정) 5칸 폭으로 출력해라(없으면 왼쪽 공백으로 채움)
	// %5.2d : (문자폭 지정.정밀도 지정) 5칸 폭으로 출력하는데 2칸은 숫자로 채워라
	// 없으면 왼쪽부터 0으로 채움
	// %5.5d : 5칸폭으로 출력하는데 5칸을 숫자로 채워라. 부족한 부분은 왼쪽부터 0 으로 채움

	printf("------------------------------------------------------\n\n");

	/* 문자폭 지정으로 출력시 정렬 맞출 수 있음 */
	int num1 = 5;
	int num2 = 2354;

	printf("%8d \n", num1);
	printf("%8d \n", num2);

	printf("------------------------------------------------------\n\n");

	/* 실수형 출력 */
	double dNum = 0.123456789;

	printf("%f \n", dNum); //0.123457까지만 출력됨.
	//실수 출력 기본값 : 소수점 이하 6자리까지(소수점 7번째에서 반올림)

	// 다 출력되게 하고 싶으면 정밀도 지정하면 됨
	printf("%.9f \n", dNum); //0.123456789
	// %.9f : 소수점 이하 9자리로 출력해라

	printf("------------------------------------------------------\n\n");
	
	/* 문자형 출력 - 문자인코딩표 - ASCII 코드  */
	//예) 문자 A를 ASCII 코드에 매핑된 십진수 65로 저장함(실제로는 65를 이진수로 변환해서 저장)

	char code1 = 'A';
	int code2 = 65;

	printf("%c(%d) \n", code1, code1); // A(65)
	printf("%c(%d) \n\n", code2, code2); // A(65)

	// 그래서 문자에 대한 +, - 같은 연산도 가능함
	printf("%c,%c,%c \n", code1, code1 + 1, code1 + 2); // A,B,C
	printf("%d,%d,%d \n", code1, code1 + 1, code1 + 2); // 65, 66, 67

	printf("------------------------------------------------------\n\n");

	/* 오버플로우 */
	// 데이터 타입이 표현할 수 있는 최대값을 넘어서 값이 제대로 저장되지 않는 현상

	int max = 2147483647; // int의 최대값 (2,147,483,647)

	max = max + 1; // 오버플로우 발생!

	printf("오버플로우된 값: %d\n", max);  //-2147483648라는 엉뚱한 값이 나옴
	// 양수 최대값을 초과하면 음수 최솟값으로 wrap-around 됨!

	/* 언더플로우 : 너무 작은 숫자를 표현할 수 없을 때 0으로 사라지는 현상 */

	double underflow = 1.0e-324; // double의 최소값보다 작은 값

	printf("%e \n", underflow / 10);  // 결과: 0.000000e+00 (언더플로우)
	// %e : 지수 표기법으로 %f보다 더 작은 값이나 큰 값을 표현할 때 정보 손실 없이 출력

	// 해결 방법?
	// 1. 더 큰 자료형 사용 (예: int 대신 long long, float 대신 long double)
	// 2. 부동소수점 연산 대신 정수 연산 활용 (필요한 경우)
	// 3. 연산 전 최소/최대값 체크 후 처리

	return 0;
}