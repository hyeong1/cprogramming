#include <stdio.h>

int main()
{
    int score[5], avg, max, min;
    for (int i = 0;i < 5;i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > 100 || score[i] < 0) // �Էµ� ������ 100���� ũ�ų� 0���� ���� ���
            scanf("%d", &score[i]);   
    }
    // ������ 0~100 ���̸� �Է¹޴´�

    for (int i = 0;i < 5;i++)
        printf("%d ", score[i]);
    avg = 0;
    for (int i = 0;i < 5;i++)
        avg += score[i];
    printf("��� ����: %d\n", avg/5);
    max = score[0];
    min = score[0];
    for (int i = 1;i < 5;i++)
    {
        if (max < score[i])
            max = score[i];
        if (min > score[i])
            min = score[i];
    }
    printf("�ְ�����: %d\n��������: %d\n", max, min);

    return 0;
}