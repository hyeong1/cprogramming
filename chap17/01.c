// �����޸� �Ҵ� ��������
// ����ڷκ��� ���� �������� ���� ���ϴ� ���α׷��� �ۼ�
// ����ڷκ��� ������ ���� �Է�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *num, sum = 0; // ���� ������ �迭�� �������� �� ������ ����
    // ����ڷκ��� ������ ���� �Է¹ޱ�
    printf("������ ����: ");
    scanf("%d", &size);

    // ������ŭ num�迭 �����Ҵ� �� ���� �Է�
    num = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        printf("���� ������ �Է��Ͻÿ�: ");
        scanf("%d", &num[i]);
    }

    // �� ���ϱ�
    for (int i = 0; i < size; i++)
        sum += num[i];

    // ��� ���
    printf("���� %d�Դϴ�.\n", sum);

    free(num); // ���� �޸� �Ҵ����� ���� �޸� �ݳ�

    return 0;
}