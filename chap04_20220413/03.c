#include <stdio.h>

int main()
{
    //���� x�� y�� ���� �ٲ㼭 ���
    int x = 10;
    int y = 20;
    int z;

    printf("x = %d, y = %d\n", x, y);

    //z�� x�� ����
    z = x;
    //x���� y�� ����
    x = y;
    //y�� z�� ���� x���� ����
    y = z;

    printf("x = %d, y = %d", x, y);

    return 0;
}