// ���� �迭�� �޾Ƽ� ��ҵ��� ������ ä��� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayFill(int *a, int size);  // �迭 ��ҵ��� ������ ä�� �Լ�
void PrintArray(int *a, int size); // �迭 ��ҵ��� ����� �Լ�

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    // ArrayFill �Լ� ��� ���� �迭 ��� ���
    printf("ArrayFill �Լ� ��� ��\n");
    PrintArray(array, 5);

    srand(time(NULL));
    ArrayFill(array, 5);

    // ArrayFill �Լ� ��� ���� �迭 ��� ���
    printf("ArrayFill �Լ� ��� ��\n");
    PrintArray(array, 5);

    return 0;
}

void ArrayFill(int *a, int size)
{
    for (int i = 0; i < size; i++)
        *(a + i) = rand() % 100; // ���� ������ 0~99�� ������
}

void PrintArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(a + i));
    printf("\n");
}