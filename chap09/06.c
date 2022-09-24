// 순환기법을 이용하여 지수값을 계싼하는 함수 power(int base, int power_raised) 작성하고 테스트
// power(2, 3)가 호출되면 2^3을 계산하여 반환
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
    int base, raised;
    printf("밑수: ");
    scanf("%d", &base);
    printf("지수: ");
    scanf("%d", &raised);

    printf("%d^%d = %d\n", base, raised, power(base, raised));

    return 0;
}

int power(int base, int power_raised)
{
    if (power_raised == 1)
        return base;
    else
        return (base * power(base, power_raised-1));
}