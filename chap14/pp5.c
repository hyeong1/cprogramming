// int�� �迭��  int�� �����͸� �޾Ƽ� �����Ͱ� �迭�� ���� ū ���� ����Ű�� �ϴ� �Լ� ����
#include <stdio.h>

void set_max_ptr(int **p, int *arr, int size);

int main()
{
    int num[5] = {1, 3, 5, 7, 9};
    int *pMax; // �迭 num�� ���� �߿��� ���� ū ���� ����ų ������ ����

    set_max_ptr(&pMax, num, 5);
    printf("���� ū ���� %d\n", *pMax);
    return 0;
}

void set_max_ptr(int **p, int *arr, int size) // p�� �迭�� ���� ū ���� ����ų ������ ����
{
    *p = arr; // ���������Ͱ� ����Ű���ִ� ���� ���� �迭 ù ��ҷ� �ʱ�ȭ

    // �迭���� �ִ� ã��
    for (int i = 0; i < size; i++)
        if (**p <= *(arr + i))
            **p = *(arr + i);
}