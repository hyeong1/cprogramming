// ũ�Ⱑ 10�� 1���� �迭�� ���� ���� �� �ִ밪�� �ּҰ� ���
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
    // �ִ밪�� �ּҰ� ����ϱ�
    int max, min;
    max = arr[0]; // max, min �� �Ѵ� �迭�� 0��°���� ����
    min = arr[0];
    for (int i = 1;i < 10;i++)
    {
        if (max < arr[i]) // ���� max ���� �迭�� i��° ������ ������ max���� i��° ���� �ٲ� 
            max = arr[i];

        if (min > arr[i]) // ���� min ���� �迭�� i��° ������ ũ�� min���� i��° ���� �ٲ� 
            min = arr[i];
    }
    printf("�ִ��� %d\n", max);
    printf("�ּҰ��� %d\n", min);
}

// ����� �´��� Ȯ���ϱ� ���� �迭 ��� �Լ�
void PrintArr(int *arr)
{
    for (int i = 0;i < 10;i++)
        printf("%d ", arr[i]);
}