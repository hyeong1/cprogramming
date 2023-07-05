#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *basket;
    scanf("%d %d", &n, &m);

    basket = (int *)calloc(n, sizeof(int));
    // 바구니 초기화
    for (int i = 0; i < n; i++)
    {
        basket[i] = i + 1;
    }

    // 공 교환
    for (int i = 0; i < m; i++)
    {
        int b1, b2, temp;
        scanf("%d %d", &b1, &b2);

        temp = basket[b1 - 1];
        basket[b1 - 1] = basket[b2 - 1];
        basket[b2 - 1] = temp;
    }

    // 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d ", basket[i]);

    return 0;
}