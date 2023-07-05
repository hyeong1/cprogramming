#include <stdio.h>

int main()
{
    int basket[100], n, m;
    scanf("%d %d", &n, &m);

    // 바구니 초기화
    for (int i = 0; i < n; i++)
        basket[i] = i + 1;

    for (int i = 0; i < m; i++)
    {
        int start, end;
        scanf("%d %d", &start, &end);

        for (int j = 0; j < ((end - start) % 2 == 0 ? (end - start) / 2 : (end - start) / 2 + 1); j++)
        {
            int temp = basket[start - 1 + j];
            basket[start - 1 + j] = basket[end - 1 - j];
            basket[end - 1 - j] = temp;
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d ", basket[i]);
    return 0;
}