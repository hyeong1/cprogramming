// ũ�Ⱑ 5�� ������ �迭�� ����ڿ��� 5���� ���������� �Է¹��� �� ���� ū ���� ���
#include <stdio.h>

int main()
{
    int score[5];
    int goodScore;
    for (int i = 0;i < 5;i++)
        scanf("%d", &score[i]);
    // ���� ū ���� ����ϱ�
    for (int i = i;i < 5;i++)
    {
        goodScore = score[0];
        if (goodScore < score[i])
            goodScore = score[i];
    }
    printf("���� ���� ����: %d\n", goodScore);
    return 0;
}