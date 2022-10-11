#include <stdio.h>

int main()
{
    int arr[7], num;
    for (int i = 0;i < 6;i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);

    for (int i = 0;i < 6;i++)
    {
        if (arr[i] < num && arr[i+1] > num) // arr[i]보다 크고 arr[i+1]보다 작으면
        {
            printf("%d ", num);
            printf("%d ", arr[i]);
        }
        else
            printf("%d ", arr[i]);
    }

    return 0;
}