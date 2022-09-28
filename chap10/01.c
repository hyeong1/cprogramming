// 각 월의 마지막 일을 배열에 저장
// 8, 9, 10, 11, 12월의 마지막 일수 출력
#include <stdio.h>

int main()
{
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 7;i < 12;i++)
        printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);

    return 0;
}