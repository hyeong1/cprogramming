// 1. �Լ��� ������ ���� ���� ȣ�� �������� �ѱ�� main���� �ش� ������ ���
// 2. �Լ��� �Ű������� �ּҿ� ���� ȣ��� �������� �ѱ�� main���� �ش� ���� ���
#include <stdio.h>

void printA(int a);
void printArr(int *arr);

int main()
{
    int num = 10;
    printA(num);    // 1. ���� ���� ȣ��
    printf("%d\n", num);
    printArr(&num); // 2. �ּҿ� ���� ȣ��
    printf("%d\n", num);

    return 0;
}

void printA(int a)
{
    a = 20;
}

void printArr(int *arr)
{
    *arr = 20;
}