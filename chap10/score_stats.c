// �л����� ���� ���� ��� ó���ϱ�
// �� �б��� �ִ� 10��, �� �л����� 3���� ������ ġ����.
// �л����� ������ ������ �����ؼ� ��´�.
// �� ������ �ִ�����, ���������� ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertArr(int arr[][3]);
void FindMaxMin(int arr[][3]);

int main()
{
    int score[10][3]; // �л��� �ִ� 10��, ������ 3��

    srand(time(NULL));
    InsertArr(score);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", score[i][j]);
        printf("\n");
    }
    FindMaxMin(score);

    return 0;
}

void InsertArr(int arr[][3])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            arr[i][j] = rand() % 101;
    }
}
// �ִ����� ã��
void FindMaxMin(int arr[][3])
{
    int max, min;
    for (int col = 0; col < 3; col++)
    {
        max = arr[0][col]; // ���� 0����, ���� �ٲ� (����1, ����2, ����3)
        min = arr[0][col];
        for (int row = 0; row < 10; row++)
        {
            if (max < arr[row][col]) // �ִ� ã��
                max = arr[row][col];
            if (min > arr[row][col]) // �ּڰ� ã��
                min = arr[row][col];
        }
        printf("���� %d�� �ִ����� = %d\n", col, max);
        printf("���� %d�� �������� = %d\n", col, min);
    }
}