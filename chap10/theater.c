/*
���� ���� �ý���
����ȭ��
1. �α��� -> ���� �� id, password �Է� - ������ ���� ����/Ʋ���� �ٽ� id, password �Է�
2. ȸ������ -> ȸ������ �� ȸ�� ���� ���Ϸ� ����
3. ���� -> ���� �� ���α׷� ����
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct member // ����� ȸ������ ����ü
{
    char id[10];
    char password[50];
} JOIN;

void PrintSeat(int (*seat)[10], int rowSize, int colSize); // �¼� ��� �Լ�
void ReserveSeat(int (*seat)[10]);                         // �����ϴ� ���� �Լ�
int Login(JOIN *userList, int (*seat)[10]);                // �α����ϴ� �Լ�
void JoinMember(JOIN *userList);                           // ȸ�������ϴ� �Լ�

int main()
{
    int seat[10][10] = {0}; // �¼� - 2���� �迭 ����
    int userChoice;         // ����ȭ�鿡�� 1, 2, 3 ���� ��� �����ϴ� ����
    JOIN *userInformation;  // ȸ�� ������ ������ ����ü �迭

    // ����ȭ��
    while (1)
    {
        printf("1. �α���\n2. ȸ������\n3. ����\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:                                // 1 �����ϸ� �α��� �Լ� ����
            if (!Login(userInformation, seat)) // �α��� �Լ��� 0 ��ȯ�ϸ�
                ReserveSeat(seat);             // ���� �Լ� ����
            break;
        case 2: // 2 �����ϸ� ȸ������ �Լ� ����
            JoinMember(userInformation);
            break;
        case 3: // 3 �����ϸ� ��������
            exit(0);
        default:
            break;
        }
    }
    return 0;
}

void PrintSeat(int (*seat)[10], int rowSize, int colSize) // �¼� ��� �Լ�
{
    // 2���� �¼� ����ϱ�
    // �¼���ȣ ���
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i�� 10�� ����� ������
            printf("\n"); // �ٹٲ�
    }
    // �¼� ���� ���� ���
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", *(*(seat + i) + j));
        printf("\n");
    }
}

void ReserveSeat(int (*seat)[10]) // �����ϴ� ���� �Լ�
{
    char ans1;           // ������� ���� ���θ� �����ϴ� ����
    int member, seatNum; // �ο���, �¼���ȣ ����
    while (1)
    {
        printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            // �¼� ���� ���� ���
            PrintSeat(seat, 10, 10);

            // ������ �ο� �Է¹ޱ�
            printf("�� �� �����Ͻðڽ��ϱ�? ");
            scanf("%d", &member);
            // �ο� �� ��ŭ ������� �ݺ��ϱ�
            for (int i = 0; i < member; i++)
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
                if (*(*(seat + (seatNum / 10)) + (seatNum % 10)) == 0) // ������� �ʾ�����
                {
                    *(*(seat + (seatNum / 10)) + (seatNum % 10)) = 1; // 1�� �ٲٰ�
                    printf("����Ǿ����ϴ�.\n");                      // ����Ϸ� ���� ���
                }
                else // ����Ǿ����� (1�̸�)
                {
                    printf("�̹� ����� �ڸ��Դϴ�.\n");
                    i--; // i�� ���ҽ��Ѽ� �ٽ� �����ϱ�
                }
            }
        }
        else if (ans1 == 'n')
            break; // ����� n�̸� ����
    }
}

int Login(JOIN *userList, int (*seat)[10]) // �α����ϴ� �Լ� - id, password �Է¹޾Ƽ� ���ϱ�
{
    char inputId[10], inputPassword[50];     // ����ڰ� �Է��� id, password�� ������ ���ڿ�
    FILE *fp = fopen("userNumber.txt", "r"); // ȸ�� �� ���Ͽ��� ȸ�� ���� �о���� ���ؼ� �б���� ���� ����
    // ȸ�� �� ���Ͽ��� ȸ�� �� ������ �� ����ü �迭 ���� �Ҵ� ���ֱ�
    int userN; // ȸ�� ��
    fscanf(fp, "%d", &userN);
    userList = (JOIN *)malloc(sizeof(JOIN) * userN); // ȸ�� �� ��ŭ ����� ���� �迭 ���� �޸� �Ҵ�

    // ���� ������ ȸ���� ���ٸ�
    if (userN == 0)
    {
        printf("���� ������ �����ϴ�. ȸ�������� ���� ���ּ���.\n");
        exit(0);
    }
    fclose(fp); // ����� ���� �迭�� ���� �Ҵ縸 ���ְ� ȸ�� �� ������ �ݱ�

    // ȸ�� ����(id, password) ��������
    fp = fopen("membership.txt", "r"); // ȸ�� ���� ���� ���
    // ���� �Ҵ��� ����ü �迭�� ���� ���� �ֱ� (���Ͽ� �ִ� id, password�� �迭�� �ֱ�)
    for (int i = 0; i < userN; i++)
        fscanf(fp, "%s %s", &((userList + i)->id), &((userList + i)->password));

    // �α����Ϸ��� ������� id, password �Է¹ޱ�
    printf("id: ");
    scanf("%s", inputId);
    printf("��й�ȣ: ");
    scanf("%s", inputPassword);

    // id, password �� �� ������ ���� ����, Ʋ���� �ٽ� �Է�
    while (1)
    {
        for (int i = 0; i < 10; i++)
            if (!strcmp(inputId, (userList + i)->id) && !strcmp(inputPassword, (userList + i)->password)) // main�� �ִ� ���� ���� ����ü �迭�� �Է��� id�� password�� �ִ��� �˻�
            {
                free(userList); // id, password ����� �Է������� ����� ���� �迭�� ���� �Ҵ��� �޸𸮴� �ݳ�
                return 0;       // 0 ��ȯ�ϰ� �α��� �Լ� ����
            }
        // for���� �� �������� ȸ�������� ���� id, password�� �Է��� ���̹Ƿ� �ٽ� �Է¹ޱ�
        printf("���̵�, ��й�ȣ�� �ٽ� �Է��ϼ���\n");
        memset(inputId, 0, sizeof inputId); // �ٽ� �Է¹ޱ� ���� ������ ���� ���ڿ� ����ֱ�
        memset(inputPassword, 0, sizeof inputPassword);
        printf("id: ");
        scanf("%s", inputId);
        printf("��й�ȣ: ");
        scanf("%s", inputPassword);
    }
    fclose(fp);
}

void JoinMember(JOIN *userList) // ȸ�������ϴ� �Լ�
{
    char newId[10], newPassword[50]; // ����ڰ� ȸ������ �� ���� �Է��ϴ� id, password�� �����ϴ� ���ڿ�
    // ȸ������ �Լ� ���� �� ȸ�� ���� �������Ѿ� �ϹǷ�
    FILE *fp = fopen("userNumber.txt", "r"); // ȸ�� ���� ����Ǿ��ִ� ���� �б���� ����
    int userN;                               // ȸ�� �� ����
    fscanf(fp, "%d", &userN);                // ���Ͽ� �ִ� ȸ�� �� ��������
    fclose(fp);                              // ȸ�� ���� �������� ���� �ݱ�

    // ȸ�� ���� ������Ű�� ���Ͽ� ����� ���� ������� ����
    fp = fopen("userNumber.txt", "w");
    userN++; // ȸ������ �� ���̹Ƿ� ȸ���� ����
    fprintf(fp, "%d\n", userN);
    fclose(fp); // ȸ������ ������Ű�� ���� �ݱ�

    // ȸ������ membership.txt ���Ͽ� ���ٿ��� �����ϱ�
    fp = fopen("membership.txt", "a");
    // ȸ������ �Է�
    printf("����Ͻ� ID�� �Է��ϼ���: ");
    scanf("%s", newId);
    printf("����Ͻ� ��й�ȣ�� �Է��ϼ���: ");
    scanf("%s", newPassword);

    // ���Ͽ� ���� �Է��ϱ�
    fprintf(fp, "%s %s\n", newId, newPassword);

    fclose(fp);
}