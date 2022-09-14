// 0.0부터 1.0까지의 난수를 반환하는 함수 f_rand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();

int main()
{
    srand(time(NULL));
    for (int i = 0;i < 5;i++)
        printf("%lf ", f_rand());

    return 0;
}

double f_rand()
{
    //함수 rand()의 최대값은 32767이므로 이 값으로 나누어주고 실수형(%lf)으로 출력
    double max = 32767;
    return (rand() / max);
}
