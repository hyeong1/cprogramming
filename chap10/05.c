// 0���� 0������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice[10] = {0};
    int maxN = 0; // ���� ���� ������ ���� �� ���� ���� ����
    int max = dice[0]; // �󵵼� �ִ밪 ���� ����

    srand(time(NULL));
    for (int i = 0;i < 100;i++)
        dice[rand() % 10]++;

    for (int i = 1;i < 10;i++)
    {
        if (max < dice[i])
        {
            max = dice[i];
            maxN = i;
        }
    }

    for (int i = 0;i < 10;i++)
        printf("[%d] = %d\n", i, dice[i]);
    printf("���� ���� ���� ��: %d\n", maxN);

    return 0;
}