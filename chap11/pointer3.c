#include <stdio.h>

int main()
{
    int *p;
    int v, i = 0;
    printf("%d ", i);
    v = *p++; // == *(p++); -> *(�ּ�) -> �ش� �ּ��� ���� ������
    v = (*p)++;

    return 0;
}