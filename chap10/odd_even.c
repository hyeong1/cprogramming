// 홀수와 짝수 구분해서 출력하기
#include <stdio.h>

int main()
{
    int num[6]; // 6개의 정수 입력받기
    for (int i = 0; i < 6; i++)
        scanf("%d", &num[i]);

    // 홀수 출력
    for (int i = 0; i < 6; i++)
    {
        if (num[i] % 2) // 2로 나눈 나머지가 0이 아니면 홀수 (0이 아니면 true니까 if문 실행)
            printf("%d ", num[i]);
    }
    printf("\n");
    // 짝수 출력
    for (int i = 0; i < 6; i++)
    {
        if (!(num[i] % 2)) // 2로 나눈 나머지가 0이면 짝수 (0이면 실행하도록 !0)
            printf("%d ", num[i]);
    }
    return 0;
}