// ���� n���� �̷���� ����a�� ���� x
// a���� x���� ���� ���� ��� ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    int *num;
    scanf("%d %d", &n, &x);
    num = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < n; i++)
    {
        if (num[i] < x)
            printf("%d ", num[i]);
    }

    free(num); // �����Ҵ� �޸� �ݳ�
    return 0;
}