/*************************************************
    작성일 : 2025-04-19
    기억 클래스(auto, register, static, extern)
**************************************************/

#include <stdio.h>

// extern 변수 선언 (다른 파일에서 정의된 변수 사용 시)
// 기억 클래스: extern
// 유효 범위: extern 선언한 이 파일 전체
// 유효 기간: 프로그램 시작 ~ 종료
extern int external_var; // 외부 정의된 변수 사용 예시

// static 함수 안의 정적 변수 사용 예제 함수 선언
void static_counter();

int main() {
    // auto 변수 (생략 가능, 지역 변수의 기본 저장 클래스)
    // 기억 클래스: auto (자동)
    // 유효 범위: 선언된 블록(main 함수) 내부
    // 유효 기간: main 함수 실행 시 생성 ~ 종료 시 소멸
    auto int a = 10;
    printf("auto 변수: %d\n", a);

    // register 변수 (레지스터 저장 요청)
    // 기억 클래스: register
    // 유효 범위: 선언된 블록(main 함수) 내부
    // 유효 기간: main 함수 실행 시 생성 ~ 종료 시 소멸
    register int r = 5;
    printf("register 변수: %d\n", r);

    // static 변수 확인을 위해 함수 3번 호출
    for (int i = 0; i < 3; i++) {
        static_counter(); // 호출될 때마다 static 변수는 유지됨
    }

    return 0;
}

// static 기억 클래스 변수 예제
// 정적 변수 예제
// 기억 클래스: static (정적)
// 유효 범위: 함수 내부(static_counter 함수)
// 유효 기간: 프로그램 시작 ~ 종료 (처음 1회만 초기화되고 값 유지됨)
void static_counter() {
    static int count = 0; // 최초 1회 초기화되고 이후 유지됨
    count++;
    printf("static 변수 count = %d\n", count);
}
