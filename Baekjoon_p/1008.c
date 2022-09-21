// 두 정수 A, B 입력받고 A/B 출력하는 프로그램 작성
// 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9 이하면 정답
#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%.9lf", (double)A/(double)B);

    return 0;
}