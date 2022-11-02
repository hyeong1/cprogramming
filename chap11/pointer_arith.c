// 포인터 증감 연산
#include <stdio.h>

int main()
{
    int i = 10;
    int *pi = &i;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++; // p가 가리키는 값에 있는 값이 증가
    printf("i = %d, pi = %p\n", i, pi);

    printf("i = %d, pi = %p\n", i, pi);
    *pi++; // pi가 가리키는 값을 증가 - pi가 가지고 있는 값이 증가
    printf("i = %d, pi = %p\n", i, pi);

    printf("%d\n", a[0]); // 배열이랑
    printf("%d\n", *(a)); // 포인터는 같다
    printf("%d\n", a[1]);
    printf("%d\n", *(a + 1));

    return 0;
}