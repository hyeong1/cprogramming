// 윤년 구하기 함수로 작성
#include <stdio.h>

void is_leap(int year);
/*
int main()
{
    int year;
    printf("년도를 입력하시오: ");
    scanf("%d", &year);

    is_leap(year);

    return 0;
}

// 사용자가 입력한 연도가 윤년인지 출력하는 프로그램
void is_leap(int year)
{
    // 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
    // 윤년은 366일
    if (year % 4 == 0) 
    {
        if (year % 100 != 0 || year % 400 == 0)
            printf("%d년은 366일입니다.\n", year);
        else
            printf("%d년은 365일입니다.\n", year);
    }
    else
        printf("%d년은 365일입니다.\n", year);
}*/
int main()
{
    int year;
    scanf("%d", &year);
    is_leap(year);
    return 0;
}

void is_leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0 || year % 400 == 0)
            printf("%d년은 366일입니다.\n", year);
        else
            printf("%d년은 365일입니다.\n", year);
    }
    else
        printf("%d년은 365일입니다.\n", year);
}