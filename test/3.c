#include <stdio.h>

int main()
{
    int arr[7], num;
    for (int i = 0;i < 6;i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);

    for (int i = 0;i < 6;i++)
    {
        if (arr[i] < num && arr[i+1] > num) // arr[i]���� ũ�� arr[i+1]���� ������
        {
            printf("%d ", num);
            printf("%d ", arr[i]);
        }
        else
            printf("%d ", arr[i]);
    }

    return 0;
}