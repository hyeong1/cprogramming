// °ø ³Ö±â
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *basket;
    int n, m;
    scanf("%d %d", &n, &m);

    basket = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < m; i++)
    {
        int startIdx, endIdx, ballN;
        scanf("%d %d %d", &startIdx, &endIdx, &ballN);

        for (int j = 0; j <= (endIdx - startIdx); j++)
        {
            basket[(startIdx-1) + j] = ballN;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", basket[i]);
    }

    free(basket);
    return 0;
}