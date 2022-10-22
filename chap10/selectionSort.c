// ��������
// �迭 �� ������ �Է¹޾Ƽ� �����ϱ� �߰�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintArr(int list[], int size);
void RandArr(int list[], int size);
void SelectionSort(int list[], int size);

int main()
{
    int list[10];
    int size, temp, least;
    size = 10;
    srand(time(NULL));
    RandArr(list, size);
    // ���� �� �迭 ����ϱ�
    PrintArr(list, size);
    printf("\n");
    // �������� ����
    SelectionSort(list, size);
    // ���ĵ� �迭 ����ϱ�
    PrintArr(list, size);
    return 0;
}

void PrintArr(int list[], int size)
{
    for (int i = 0;i < size;i++)
        printf("%d ", list[i]);
}

void RandArr(int list[], int size)
{
    for (int i = 0;i < size;i++)
        list[i] = rand() % 100;
}

void SelectionSort(int list[], int size)
{
    int least, temp;
    for (int i = 0;i < size-1;i++)
    {
        least = i; // least�� �ּڰ��� �ε��� -i��°�� �ּڰ��̶� ����
        for (int j = i+1;j < size;j++) // i �ٷ� ������°���� ���ϸ鼭 �ּڰ� ã��
        {
            if (list[least] > list[j]) // �ּҶ�� ������ ��Һ��� j��° ��Ұ� ������
                least = j; // �ּڰ� �ε����� j�� ��ü
        }
        // �ּڰ��� �ڸ� ��ȯ
        temp = list[i]; // i��° ��Ҹ� �� ������ ����
        list[i] = list[least]; // i �ڸ����� �ּڰ� ��� ����
        list[least] = temp; // �ּڰ��� �־��� �ڸ����� i��°�� �־��� ��� ����
    }
}