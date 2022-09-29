// 2개의 정수배열을 받아서 대응되는 배열 요소가 같은지 검사
#include <stdio.h>

int ArrayEqual(int a[], int b[], int size);

int main()
{
    int a[10], b[10];
    for (int i = 0;i < 10;i++)
        scanf("%d", &a[i]);
    for (int i = 0;i < 10;i++)
        scanf("%d", &b[i]);

    if (ArrayEqual(a, b, 10) == 1)
        printf("2개의 배열은 같음\n");
    else    
        printf("2개의 배열은 다름\n");

    return 0;
}

int ArrayEqual(int a[], int b[], int size)
{
    for (int i = 0;i < size;i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}