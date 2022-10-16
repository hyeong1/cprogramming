// 배열 거꾸로 출력하기
#include <stdio.h>

int main()
{
    int num[7]; // 7개의 숫자를 입력받고 거꾸로 출력하기
    for (int i = 0;i < 7;i++)
        scanf("%d", &num[i]);

    for (int i = 6;i >= 0;i--)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}