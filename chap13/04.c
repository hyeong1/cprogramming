// 구조체 연습문제 4
// 복소수를 정의하고 복소수 덧셈을 수행하는 함수 작성 및 테스트
#include <stdio.h>

typedef struct complex // 복소수 구조체 정의
{
    double real;
    double imag;
}COMPLEX;

COMPLEX ComplexAdd(COMPLEX c1, COMPLEX c2); // 복소수 덧셈 수행

int main()
{
    COMPLEX ex1, ex2; // ex1 = 3+i, ex2 = 2+2i
    ex1.real = 3;
    ex1.imag = 1;
    ex2.real = 2;
    ex2.imag = 2;
    ComplexAdd(ex1, ex2);

    return 0;
}

COMPLEX ComplexAdd(COMPLEX c1, COMPLEX c2)
{
    COMPLEX sum; // 더하는 구조체
    sum.real = c1.real + c2.real; // 자연수 부분 더하기
    sum.imag = c1.imag + c2.imag; // 허수 부분 더하기

    // 결과 출력
    printf("%lf + %lfi\n", c1.real, c1.imag);
    printf("%lf + %lfi\n", c2.real, c2.imag);
    printf("%lf + %lfi\n", sum.real, sum.imag);
}