// ������ ���� ����
#include <stdio.h>

int main()
{
    int i = 10;
    int *pi = &i;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++; // p�� ����Ű�� ���� �ִ� ���� ����
    printf("i = %d, pi = %p\n", i, pi);

    printf("i = %d, pi = %p\n", i, pi);
    *pi++; // pi�� ����Ű�� ���� ���� - pi�� ������ �ִ� ���� ����
    printf("i = %d, pi = %p\n", i, pi);

    printf("%d\n", a[0]); // �迭�̶�
    printf("%d\n", *(a)); // �����ʹ� ����
    printf("%d\n", a[1]);
    printf("%d\n", *(a + 1));

    return 0;
}