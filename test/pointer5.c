// �迭 ���� �Լ��� �迭 ��� �Լ� - �迭 ÷�� ��� ������ ���
#include <stdio.h>

void arrayCopy(int *from, int *to, int size);
void arrayPrint(int *p, int size);

int main()
{
    int to[] = {13, 34, 28, 56, 73, 45};
    int from[] = {3, 5, 1, 6, 7};
    arrayCopy(from, to, 5);
    arrayPrint(from, 5);
    arrayPrint(to, 6);
    
    return 0;
}

void arrayCopy(int *from, int *to, int size)
{
    for (int i = 0;i < size;i++)
        *(to+i) = *(from+i);
}

void arrayPrint(int *p, int size)
{
    for (int i = 0;i < size;i++)
        printf("%d ", *(p+i));
    printf("\n");
}