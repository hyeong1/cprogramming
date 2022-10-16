// 최댓값과 최솟값 출력하기
#include <stdio.h>

void FindMax(int* arr);
void FindMin(int* arr);

int main()
{
    int num[10], max, min;
    for (int i = 0;i < 10;i++)
        scanf("%d", &num[i]);

    FindMax(num);
    printf("\n");
    FindMin(num);
    return 0;
}

void FindMax(int* arr)
{
    int max = arr[0];
    for (int i = 0;i < 10;i++)
    {
        if (max < arr[i]) // max값이 arr[i]값보다 작으면
            max = arr[i]; // max값을 arr[i]값으로 교체
    }
    printf("최댓값: %d", max);
}
void FindMin(int* arr)
{
    int min = arr[0];
    for (int i = 0;i < 10;i++)
    {
        if (min > arr[i]) // min값이 arr[i]값보다 크면
            min = arr[i]; // min값을 arr[i]값으로 교체
    }
    printf("최솟값: %d", min);
}