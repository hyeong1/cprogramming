#include <stdio.h>

int main()
{
    int number;
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    // number 나누기 2의 나머지가 0이면 짝수
    if (number % 2 == 0)
    {
        printf("짝수");
    }
    // 2로 나눈 나머지가 1이면 홀수
    else
    {
        printf("홀수");
    }

    return 0;
}