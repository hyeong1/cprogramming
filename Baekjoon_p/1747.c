// 소수&펠린드롬 수
// 어떤 수 N 에 대하여 N 보다 크거나 같고 소수이면서 팰린드롬인 수 중 가장 작은 수 구하기
// 팰린드롬 수: 어떤 수의 숫자를 뒤집은 수가 일치하는 수 -예) 123과 321
// 1. 팰린드롬 수 구하기
// 2. 소수 구하기
// (1 && 2)를 만족하는 수 중에서 가장 작은 수 찾기
#include <stdio.h>

// 입력한 수의 팰린드롬 수 출력하기
int Palindrome(int n);

int main()
{
    int input, palindrome;
    scanf("%d", &input);

    Palindrome(input);
    return 0;
}

int Palindrome(int n)
{
    if (n < 10)
        printf("%d", n);
    else
    {
        printf("%d", n % 10);
        Palindrome(n / 10);
    }
}