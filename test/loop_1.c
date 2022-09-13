// N을 입력받아 구구단 N단출력
#include <stdio.h>

int main()
{
    int N;
    printf("1 ~ 9 사이 입력: ");
    scanf("%d", &N);

    for (int i = 1;i < 10;i++)
        printf("%d * %d = %d\n", N, i, N*i);
    
    return 0;
}