// �ִ񰪰� �ּڰ� ����ϱ�
#include <stdio.h>

void FindMax(int* arr);
void FindMin(int* arr);

int main()
{
    int num[10], max, min;
    for (int i = 0;i < 10;i++)
        scanf("%d", &num[i]);

    FindMax(num);
    printf("\n");
    FindMin(num);
    return 0;
}

void FindMax(int* arr)
{
    int max = arr[0];
    for (int i = 0;i < 10;i++)
    {
        if (max < arr[i]) // max���� arr[i]������ ������
            max = arr[i]; // max���� arr[i]������ ��ü
    }
    printf("�ִ�: %d", max);
}
void FindMin(int* arr)
{
    int min = arr[0];
    for (int i = 0;i < 10;i++)
    {
        if (min > arr[i]) // min���� arr[i]������ ũ��
            min = arr[i]; // min���� arr[i]������ ��ü
    }
    printf("�ּڰ�: %d", min);
}