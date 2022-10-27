// 포인터 증감 연산
#include <stdio.h>

int main()
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++; // p가 가리키는 값에 있는 값이 증가
    printf("i = %d, pi = %p\n", i, pi);

    printf("i = %d, pi = %p\n", i, pi);
    *pi++; // pi가 가리키는 값을 증가
    printf("i = %d, pi = %p\n", i, pi);

    return 0;
}