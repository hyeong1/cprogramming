// 2���� �����迭�� �޾Ƽ� �����Ǵ� �迭 ��Ұ� ������ �˻�
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
        printf("2���� �迭�� ����\n");
    else    
        printf("2���� �迭�� �ٸ�\n");

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