// ���� ���� �ý���
// 10�� 27�ϱ��� �߰��� ��
// 1. �¼� ��� �Լ��� �ٲٱ� o
// 2. �����ϴ� ���� �Լ��� �ٲٱ� x
// 3. ���� �¼� �� ���� ����ޱ� x
// 4. �迭�� 2�������� �ٲٱ� x
#include <stdio.h>

void PrintSeat(int seat[], int size);

int main()
{
    char ans1;
    int ans2, seat[10] = {0};
    while (1)
    {
        printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            PrintSeat(seat, 10);

            printf("���° �¼��� �����Ͻðڽ��ϱ�?");
            scanf("%d", &ans2);
            if (ans2 <= 0 || ans2 > 10) // ������ �¼���ȣ�� 0 ���ϰų� �迭 ũ���� 10 �̻��̸�
            {
                printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
                continue;
            }
            if (seat[ans2 - 1] == 0) // ������� �ʾ�����
            {
                seat[ans2 - 1] = 1; // 1�� �ٲٰ�
                printf("����Ǿ����ϴ�.\n");
            }
            else // ����Ǿ����� (1�̸�)
                printf("�̹� ����� �ڸ��Դϴ�.\n");
        }
        else if (ans1 == 'n')
            return 0; // ����� n�̸� ����
    }
    return 0;
}

void PrintSeat(int seat[], int size)
{
    printf("------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("------------------------\n");
    for (int i = 0; i < size; i++)
        printf("%d ", seat[i]); // �¼� ���� ���� ��� -0�̸� ����x, 1�̸� ����o
    printf("\n");
}