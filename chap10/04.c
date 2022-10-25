// 2개의 정수 배열 a, b받아서 배열 a의 요소를 b로 복사
#include <stdio.h>

void ArrayCopy(int a[], int b[], int size);

int main()
{
    int a[10], b[10] = {0};
    for (int i = 0;i < 10;i++)
        scanf("%d", &a[i]);
        
    printf("복사 전\n");
    for (int i =0;i < 10;i++)
        printf("a[%d] = %d b[%d] = %d\n", i+1, a[i], i+1, b[i]);
    
    ArrayCopy(a, b, 10);

    printf("복사 후\n");
    for (int i =0;i < 10;i++)
        printf("a[%d] = %d b[%d] = %d\n", i+1, a[i], i+1, b[i]);

    return 0;
}

void ArrayCopy(int a[], int b[], int size)
{
    for (int i = 0;i < size;i++)
        b[i] = a[i];
}