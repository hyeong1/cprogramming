// sin() 함수 사용하여 0도부터 180도까지 10도 단위로 사인 함수 값 출력
// 각도를 받아서 사인값을 반환하는 함수 sin_degree(double degree) 작성
// sin() 함수 사용법
#include <stdio.h>
#include <math.h>

double sin_degree(double degree);

int main()
{
    for (int i = 0;i <= 180;i += 10)
    {
        printf("sin(%d)의 값은 %lf\n", i, sin_degree(i));
    }

    return 0;
}

double sin_degree(double degree)
{
    return sin(degree);
}