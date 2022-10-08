// n���� ������ �־��� �� �ּڰ��� �ִ� ���ϱ�
// ù° �ٿ� �־��� ������ ���� n �Է�, ��° �ٿ� n���� ���� �Է�
#include <stdio.h>
#include <stdlib.h>

void InsertArr(int *arr, int n); 
int ArrMax(int *arr, int n); // �־��� �������� �ִ� ã��
int ArrMin(int *arr, int n); // �־��� �������� �ּڰ� ã��

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

int ArrMax(int *arr, int n) // �ִ� �Լ�
{
    int max = arr[0];
    for (int i = 1;i < n;i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int ArrMin(int *arr, int n) // �ּڰ� �Լ�
{
    int min = arr[0];
    for (int i = 1;i < n;i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}