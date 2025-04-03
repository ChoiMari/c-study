/*2025-04-03
산술연산자와 형변환의 활용 연습
*/

#include <stdio.h>

int main(void) {
	
	int oprand1 = 7;
	int oprand2 = 5;

	/* 산술 연산자 - 정수 연산 */
	// 정수 연산 정수의 결과는 정수

	printf("%d + %d = %5d \n", oprand1, oprand2, (oprand1 + oprand2));
	printf("%d - %d = %5d \n", oprand1, oprand2, (oprand1 - oprand2));
	printf("%d * %d = %5d \n", oprand1, oprand2, (oprand1 * oprand2));
	printf("%d / %d = %5d \n", oprand1, oprand2, (oprand1 / oprand2));
	printf("%d %% %d = %5d \n\n", oprand1, oprand2, (oprand1 % oprand2));

	// 이것 보다는 변수에 넣는 것이 더 코드 가독성이 좋음

	int sum_result = oprand1 + oprand2;
	int sub_result = oprand1 - oprand2;
	int multi_result = oprand1 * oprand2;
	//int div_result = oprand1 / oprand2;
	int mod_result = oprand1 % oprand2;

	printf("%d + %d = %5d \n", oprand1, oprand2, sum_result);
	printf("%d - %d = %5d \n", oprand1, oprand2, sub_result);
	printf("%d * %d = %5d \n", oprand1, oprand2, multi_result);
	//printf("%d / %d = %5d \n", oprand1, oprand2, div_result);
	printf("%d %% %d = %5d \n\n", oprand1, oprand2, mod_result);
	// 형식지정자 %로 인식되서 문자 그대로 %출력하려고 %% 사용함

	// 주의, 나눗셈(/) 연산에는 문제가 있음
	// 정수 연산 정수의 결과는 정수이기 때문에 소수점 이하 자리가 표현이 안됨(절삭됨) 

	/* 해결 */

	double div_result = (double) oprand1 / oprand2;
	// 주의) 나누기 전에 Casting 해야 함
	// 그래야 실수 / 정수 형태가 되어서 더 큰 타입으로 통일해서 계산 된다
	// 만약 정수 / 정수 먼저 계산한 뒤 형변환(Casting)하면 이미 소수점 버려진 뒤여서 소용이 없음
	// 연산자 우선 순위에서 산술연산보다 형변환이 더 우위 
	// (double) oprand1이 먼저 되고 / oprand2가 계산됨

	printf("%d / %d = %5.1f \n\n", oprand1, oprand2, div_result); //__1.4
	// %5.1 : 문자폭지정(전체출력자리수) 5칸,정밀도 지정 소수점이하 1자리수만 출력해라
	// 소수점 . 도 전체출력자리수에 포함됨

	/* 자동 형변환 - 올림 변환 : 정수형 상수를 실수형 변수에 저장 가능 */

	// 실수 타입 변수에 정수를 할당하면
	// 자동 형변환되서 실수 데이터로 저장이 되지만,
	// 정수 / 정수를 실수형 데이터 타입에 담는다고 해도
	// 연산자 우선 순위에서 = 대입 연산자 보다 / 산술연산이 더 우선 순위가 높기 때문에
	// 나눗셈(/) 연산이 먼저 실행되어 소수점 이하가 절삭된 다음 
	// 자동 형변환 돼서 대입이 되는거기 때문에 
	// 이 경우엔 나눗셈(/) 연산이 제대로 안나온다.

	double a = 10 + 3;
	double b = 10 - 3;
	double c = 10 * 3;
	double d = 10 / 3; //-> 나눗셈 연산 뒤 자동 형변환 돼서 대입되는 것. 그래서 제대로 계산이 안됨
	
	// 해결 : 1) 피연산자 중 하나 이상을 실수로 만들거나 2) 강제 형변환을 해준다
	double e = 10 / 3.;
	double f = 10 / 3.0;
	// 3. 과 3.0은 같은 의미

	double g = (double) 10 / 3;

	printf("%f \n", a);
	printf("%f \n", b);
	printf("%f \n", c);
	printf("%f \n", d); // 3.000000
	printf("%f \n", e); // 3.333333
	printf("%f \n", f); // 3.333333
	printf("%f \n\n", g); // 3.333333

	/*자동 형변환 - 내림 변환 : 실수형 상수를 정수형 변수에 저장 가능 */
	//주의 ) 데이터 손실 발생 가능(소수점 이하 버려짐)

	int i = 3.14;
	printf("%d \n", i); // 3으로 출력됨(소수점이하 절삭)

	return 0;
}