// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고, 그 최댓값이 몇 번째 수인지
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataN = 9, max, maxIndex;
    int *data = (int *)calloc(sizeof(int), dataN);
    for (int i = 0; i < dataN; i++)
        scanf("%d", &data[i]);

    max = *data;
    for (int i = 1; i < dataN; i++)
    {
        if (max < *(data + i))
        {
            max = *(data + i);
            maxIndex = i + 1; // 최댓값 인덱스+1 -> 1번부터 시작할 때 번째 수
        }
    }
    printf("%d %d\n", maxIndex, max);

    return 0;
}