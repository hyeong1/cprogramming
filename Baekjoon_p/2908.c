// �Էµ� ���ڸ� ���� �Ųٷ� �о �� �� ũ�� ���ϱ�
#include <stdio.h>

int FindBigNum(int *arr1, int *arr2);

int main()
{
    int num1, num2;
    int arr1[3] = {0}, arr2[3] = {0};
    scanf("%d %d", &num1, &num2);

    for (int i = 0; i < 3; i++) // �Էµ� ���ڸ� �Ųٷ� �迭�� �ֱ�
    {
        arr1[i] = num1 % 10;
        num1 = num1 / 10;
        arr2[i] = num2 % 10;
        num2 = num2 / 10;
    }

    if (FindBigNum(arr1, arr2) == 1)
    {
        for (int i = 0; i < 3; i++)
            printf("%d", arr1[i]);
    }
    else
    {
        for (int i = 0; i < 3; i++)
            printf("%d", arr2[i]);
    }

    return 0;
}

int FindBigNum(int *arr1, int *arr2)
{
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] < arr2[i])
            return 2;
        else if (arr1[i] > arr2[i])
            return 1;
        else if (arr1[i] == arr2[i])
        {
            if (arr1[i + 1] < arr2[i + 1])
                return 2;
            else
                return 1;
        }
    }
}