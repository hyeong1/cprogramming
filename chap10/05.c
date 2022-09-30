// 0부터 0까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice[10] = {0};
    int maxN = 0; // 가장 많이 생성된 수의 방 번지 저장 변수
    int max = dice[0]; // 빈도수 최대값 저장 변수

    srand(time(NULL));
    for (int i = 0;i < 100;i++)
        dice[rand() % 10]++;

    for (int i = 1;i < 10;i++)
    {
        if (max < dice[i])
        {
            max = dice[i];
            maxN = i;
        }
    }

    for (int i = 0;i < 10;i++)
        printf("[%d] = %d\n", i, dice[i]);
    printf("가장 많이 나온 수: %d\n", maxN);

    return 0;
}