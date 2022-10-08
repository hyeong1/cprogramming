// n개의 정수가 주어질 때 최솟값과 최댓값 구하기
// 첫째 줄에 주어질 정수의 개수 n 입력, 둘째 줄에 n개의 정수 입력
#include <stdio.h>
#include <stdlib.h>

void InsertArr(int *arr, int n); 
int ArrMax(int *arr, int n); // 주어진 정수에서 최댓값 찾기
int ArrMin(int *arr, int n); // 주어진 정수에서 최솟값 찾기

int main()
{
    int n;
    scanf("%d", &n);
    int* num = (int*)malloc(sizeof(int) * n);

    InsertArr(num, n);
    printf("%d %d", ArrMin(num, n), ArrMax(num, n));

    return 0;
}

void InsertArr(int *arr, int n)
{
    for (int i = 0;i < n;i++)
        scanf("%d", &arr[i]);
}

int ArrMax(int *arr, int n) // 최댓값 함수
{
    int max = arr[0];
    for (int i = 1;i < n;i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int ArrMin(int *arr, int n) // 최솟값 함수
{
    int min = arr[0];
    for (int i = 1;i < n;i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}