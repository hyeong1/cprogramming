#include <stdio.h>

int main()
{
    int *p;
    int v, i = 0;
    printf("%d ", i);
    v = *p++; // == *(p++); -> *(주소) -> 해당 주소의 값을 가져옴
    v = (*p)++;

    return 0;
}