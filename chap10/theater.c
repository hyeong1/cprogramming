// ���� ���� �ý���
// 10�� 27�ϱ��� �߰��� ��
// 1. �¼� ��� �Լ��� �ٲٱ� o
// 2. �����ϴ� ���� �Լ��� �ٲٱ� o
// 3. ������ �¼� �� ���� ����ޱ� o
// 4. �迭�� 2�������� �ٲٱ� o
#include <stdio.h>

void PrintSeat(int seat[][10], int rowSize, int colSize); // �¼� ��� �Լ�
void ReserveSeat(int seat[][10]);                         // �����ϴ� ���� �Լ�

int main()
{
    int seat[10][10] = {0};
    // PrintSeat(seat, 10, 10);
    ReserveSeat(seat);
    return 0;
}

void PrintSeat(int seat[][10], int rowSize, int colSize) // �¼� ��� �Լ�
{
    // 2���� �¼� ����ϱ�
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i�� 10�� ����� ������
            printf("\n"); // �ٹٲ�
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", seat[i][j]);
        printf("\n");
    }
}

void ReserveSeat(int seat[][10]) // �����ϴ� ����
{
    char ans1;
    int member, seatNum;
    while (1)
    {
        printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            PrintSeat(seat, 10, 10);

            // �� �� �����Ͻðڽ��ϱ� �߰�
            printf("�� �� �����Ͻðڽ��ϱ�? ");
            scanf("%d", &member);            // ������ �ο� �Է¹ޱ�
            for (int i = 0; i < member; i++) // �ο� �� ��ŭ ������� �ݺ��ϱ�
            {
                seatNum = 0; // �¼� ���� ���� �¼���ȣ 0���� �ʱ�ȭ
                printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
                scanf("%d", &seatNum);
                seatNum--;                         // �ε����� ����ϱ� ���� 1 ����
                if (seatNum < 0 || seatNum >= 100) // ������ �¼���ȣ�� 0 ���ϰų� �迭 ũ���� 10 �̻��̸�
                {
                    printf("1���� 100������ ���ڸ� �Է��ϼ���\n");
                    i--; // i ���ҽ��Ѽ� �ٽ� �����ϵ��� �����
                    continue;
                }
                if (seat[seatNum / 10][seatNum % 10] == 0) // ������� �ʾ�����
                {
                    seat[seatNum / 10][seatNum % 10] = 1; // 1�� �ٲٰ�
                    printf("����Ǿ����ϴ�.\n");
                }
                else // ����Ǿ����� (1�̸�)
                    printf("�̹� ����� �ڸ��Դϴ�.\n");
            }
        }
        else if (ans1 == 'n')
            break; // ����� n�̸� ����
    }
}