// 크기가 10인 1차원 배열에 난수 저장 후 최대값과 최소값 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void FindMinMax(int *arr);
void PrintArr(int *arr);
int main()
{
    srand(time(NULL));
    int randArr[10];
    for (int i = 0;i < 10;i++)
        randArr[i] = rand();

    FindMinMax(randArr);
    PrintArr(randArr);
    return 0;
}

void FindMinMax(int *arr)
{
    // 최대값과 최소값 출력하기
    int max, min;
    max = arr[0]; // max, min 값 둘다 배열의 0번째부터 시작
    min = arr[0];
    for (int i = 1;i < 10;i++)
    {
        if (max < arr[i]) // 현재 max 값이 배열의 i번째 수보다 작으면 max값이 i번째 수로 바뀜 
            max = arr[i];

        if (min > arr[i]) // 현재 min 값이 배열의 i번째 수보다 크면 min값이 i번째 수로 바뀜 
            min = arr[i];
    }
    printf("최댓값은 %d\n", max);
    printf("최소값은 %d\n", min);
}

// 결과가 맞는지 확인하기 위한 배열 출력 함수
void PrintArr(int *arr)
{
    for (int i = 0;i < 10;i++)
        printf("%d ", arr[i]);
}