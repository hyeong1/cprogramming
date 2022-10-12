#include <stdio.h>

int main()
{
    int sound[8], start1, start8, check;
    for (int i = 0;i < 8;i++)
        scanf("%d", &sound[i]);
    
    // 1~8인지 8~1인지 검사
    start1 = 1;
    start8 = 8;
    if (sound[0] == start1) // 1부터 시작
    {
        for (int i = 1;i < 8;i++) // 0번은 이미 비교했으니 1부터 비교
        {
            start1++;
            if (sound[i] == start1)
                check = 0; // 1부터 8까지면 check변수 0으로 초기화
            else
            {
                printf("mixed");
                check = 2;
                break;
            }
        }
        if (check == 0)
            printf("ascending");
    }
    else if (sound[0] == start8) // 8부터 시작
    {
        for (int i = 1;i < 8;i++) // 0번은 이미 비교했으니 1부터 비교
        {
            start8--;
            if (sound[i] == start8)
                check = 1; // 8부터 1까지면 check변수 1로 초기화
            else
            {
                printf("mixed");
                check = 2;
                break;
            }
        }
        if (check == 1)
            printf("descending");
    }
    else
        printf("mixed");

    return 0;
}