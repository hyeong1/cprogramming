// ����ڿ��� ���� ���� �Է¹޾� �ش��ϴ� ���ﰢ�� ���
#include <stdio.h>

int main()
{
    int N;
    printf("�� ���� �Է�: ");
    scanf("%d", &N);

    for (int i = 0;i < N;i++)
    {
        for (int j = N;j > i;j--)
            printf(" ");
        for (int j = 0;j <= i;j++)
            printf("*");
        for (int j = 0;j < i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}