// n���� ���� �߿��� x���� ���� �� ����ϱ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int* arr = (int*)malloc(sizeof(int) * n);

    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    // x���� ���� �� ���
    for (int i=0;i<n;i++)
    {
        if (arr[i] < x) // arr[i]�� x���� ������ 
            printf("%d ", arr[i]); // arr[i] ���
    }
    return 0;
}