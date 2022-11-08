// 정수 n개로 이루어진 수열a와 정수 x
// a에서 x보다 작은 수를 모두 출력
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

    free(num); // 동적할당 메모리 반납
    return 0;
}