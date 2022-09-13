// 사용자에게 행의 길이 입력받아 해당하는 정삼각형 출력
#include <stdio.h>

int main()
{
    int N;
    printf("행 길이 입력: ");
    scanf("%d", &N);

    for (int i = 0;i < N;i++)
    {
        for (int j = N;j > i;j--)
            printf(" ");
        for (int j = 0;j <= i;j++)
            printf("*");
        for (int j = 0;j < i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}