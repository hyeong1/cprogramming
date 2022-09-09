// 함수 3개 테스트
// int even(int n): 주어진 정수가 짝수면 1, 홀수면 0 반환
// int absolute(int n): 주어진 정수의 절대값을 구하는 함수
// int sign(int n): 주어진 정수가 음수면 -1, 양수면 1, 0이면 0 반환
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if (even(num) == 1)
        printf("even()의 결과: 짝수\n");
    else if (even(num == 0))
        printf("even()의 결과: 홀수\n");

    printf("absolute()의 결과: %d\n", absolute(num));

    if (sign(num) == 0)
        printf("sign()의 결과: 0\n");
    else
    {
        if (sign(num) == 1)
            printf("sign()의 결과: 양수\n");
        else 
            printf("sign()의 결과: 음수\n");
    }    
    

    return 0;
}

// 짝수면 1, 홀수면 0 반환하는 함수
int even(int n)
{
    if (n % 2 == 0) // 짝수
        return 1;
    else  // 홀수
        return 0;
}

// 절대값 구하는 함수
int absolute(int n)
{
    if (n > 0)
        return n;
    else
        return (-(n));
}

// 음수면 -1, 양수면 1, 0이면 0 변환
int sign(int n)
{
    if (n == 0)
        return 0;
    else 
    {
        if (n > 0)
            return 1;
        else 
            return -1;
    }
}