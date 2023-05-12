// 배열 거꾸로 출력
#include <stdio.h>

void print_reverse(int *a, int size);

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    print_reverse(a, 5);

    return 0;
}

void print_reverse(int *a, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d ", *(a+size-1-i));
}