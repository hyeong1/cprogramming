// ����� 30�� �迭 ����
// ���� i+1�� �ʱ�ȭ�ϰ� ���� ���
// ��� ������ ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 30;
    int *arr = (int *)calloc(sizeof(int), n);
    for (int i = 0; i < n; i++)
        *(arr + i) = i + 1;
    for (int i = 0; i < n; i++) // ������ 30�� �迭 ��� �� ����ϴ� �ݺ���
        printf("%d ", *(arr + i));
    return 0;
}