// 2���� ���� �迭 a, b�޾Ƽ� �迭 a�� ��Ҹ� b�� ����
#include <stdio.h>

void ArrayCopy(int a[], int b[], int size);

int main()
{
    int a[10], b[10] = {0};
    for (int i = 0;i < 10;i++)
        scanf("%d", &a[i]);
        
    printf("���� ��\n");
    for (int i =0;i < 10;i++)
        printf("a[%d] = %d b[%d] = %d\n", i+1, a[i], i+1, b[i]);
    
    ArrayCopy(a, b, 10);

    printf("���� ��\n");
    for (int i =0;i < 10;i++)
        printf("a[%d] = %d b[%d] = %d\n", i+1, a[i], i+1, b[i]);

    return 0;
}

void ArrayCopy(int a[], int b[], int size)
{
    for (int i = 0;i < size;i++)
        b[i] = a[i];
}