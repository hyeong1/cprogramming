// 주어진 정수가 몇 개의 자리수를 가지고 있는지 계산하는 프로그램
// 12345의 경우 5 출력
#include <stdio.h>

int FindDigit(int num);

int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    printf("자리수: %d\n", FindDigit(num));
    return 0;
}

int FindDigit(int num)
{
    static int digit = 0;
    digit++;
    if (num > 10)    
        FindDigit(num / 10);
    else
        return digit;
}