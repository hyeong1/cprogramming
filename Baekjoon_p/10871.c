// n개의 정수 중에서 x보다 작은 수 출력하기
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int* arr = (int*)malloc(sizeof(int) * n);

    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    // x보다 작은 수 출력
    for (int i=0;i<n;i++)
    {
        if (arr[i] < x) // arr[i]가 x보다 작으면 
            printf("%d ", arr[i]); // arr[i] 출력
    }
    return 0;
}