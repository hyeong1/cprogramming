#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *basket;
    scanf("%d %d", &n, &m);

    basket = (int *)calloc(n, sizeof(int));
    // �ٱ��� �ʱ�ȭ
    for (int i = 0; i < n; i++)
    {
        basket[i] = i + 1;
    }

    // �� ��ȯ
    for (int i = 0; i < m; i++)
    {
        int b1, b2, temp;
        scanf("%d %d", &b1, &b2);

        temp = basket[b1 - 1];
        basket[b1 - 1] = basket[b2 - 1];
        basket[b2 - 1] = temp;
    }

    // ��� ���
    for (int i = 0; i < n; i++)
        printf("%d ", basket[i]);

    return 0;
}