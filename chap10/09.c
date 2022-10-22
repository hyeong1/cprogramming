// �л����� ���� ������ ��� ó���ϴ� ���α׷� �ۼ�-�� ������ �ִ��ּ� ���� ���
// {�й�, ����1, ����2, ����3}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FindMax(int (*score)[4], int column); // �ִ����� ���� �Լ�
int FindMin(int (*score)[4], int column); // �ּ����� ���� �Լ�
int RandArr(int (*rand)[4]);              // �л����� ������ ������ ���� ���

int main()
{
    int score[10][4] = {{1, 30, 10, 11},
                        {2, 40, 50, 32},
                        {3, 70, 65, 56},
                        {4, 70, 43, 32},
                        {5, 80, 10, 89}};
    int randScore[10][4];

    srand(time(NULL));
    /*RandArr(randScore);
    printf("����-���� ����\n");
    printf("����%d�� �ִ�����=%d\n", 1, FindMax(randScore, 1));
    printf("����%d�� �ּ�����=%d\n", 1, FindMin(randScore, 1));
    printf("����%d�� �ִ�����=%d\n", 2, FindMax(randScore, 2));
    printf("����%d�� �ּ�����=%d\n", 2, FindMin(randScore, 2));
    printf("����%d�� �ִ�����=%d\n", 3, FindMax(randScore, 3));
    printf("����%d�� �ּ�����=%d\n", 3, FindMin(randScore, 3));

    printf("����-ǥ�� �ʱ�ȭ\n");
    printf("����%d�� �ִ�����=%d\n", 1, FindMax(score, 1));
    printf("����%d�� �ּ�����=%d\n", 1, FindMin(score, 1));
    printf("����%d�� �ִ�����=%d\n", 2, FindMax(score, 2));
    printf("����%d�� �ּ�����=%d\n", 2, FindMin(score, 2));
    printf("����%d�� �ִ�����=%d\n", 3, FindMax(score, 3));
    printf("����%d�� �ּ�����=%d\n", 3, FindMin(score, 3));*/

    // �ٸ� Ǯ�� �߰�
    int totalScore[10][3];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            totalScore[i][j] = rand() % 101;
    }
    // ���� ���
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", totalScore[i][j]);
        printf("\n");
    }
    // �� ���躰 �ִ�, �ּ� ���� ���
    int max, min;
    for (int i = 0; i < 3; i++)
    {
        max = totalScore[0][i];
        min = totalScore[0][i];
        for (int j = 0; j < 10; j++)
        {

            if (max < totalScore[j][i])
                max = totalScore[j][i];
            if (min > totalScore[j][i])
                min = totalScore[j][i];
        }
        printf("���� %d�� �ִ�����: %d\n", i, max);
        printf("���� %d�� ��������: %d\n", i, min);
    }

    return 0;
}

int FindMax(int (*score)[4], int column)
{
    int max = score[0][column];
    for (int i = 0; i < 10; i++)
    {
        if (max < score[i][column])
            max = score[i][column];
    }
    return max;
}

int FindMin(int (*score)[4], int column)
{
    int min = score[0][column];
    for (int i = 0; i < 10; i++)
    {
        if (min > score[i][column])
        {
            if (score[i][column] == 0)
                continue;
            min = score[i][column];
        }
    }
    return min;
}

int RandArr(int (*randArr)[4])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
            randArr[i][j] = rand() % 101;
    }
}