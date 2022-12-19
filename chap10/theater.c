/*
���� ���� �ý��� (���� ����: 12�� 24�� 24:00���� �̸��Ϸ� ����-�ҽ����ϸ�(.c���ϸ�))
����ȭ������ �߰��� ��
1. �α��� -> ���� �� id, password �Է� - ������ ���� ����/Ʋ���� �ٽ� id, password �Է¹ް� �ض� (�Լ�) ���߿� �α����ؼ� �� ������������ Ȯ���� �� �ְ� �Ұ���
  - �α��� �� ���Ͽ��� ���� �о�ͼ� ����
2. ȸ������ -> ȸ�������� id, password �޾Ƽ� ����ü �迭�� ���� (�Լ�) -> ȸ���� 3��
  - ȸ������ �� ȸ�� ���� ���Ϸ� ���� (�޸� �����Ҵ��ؼ� ȸ�������ϸ� ������)
3. ���� -> ���� �� �� (�Լ�)
ȸ�����Ե� ������ �޸� �Ҵ��ؼ� ������ ���ָ�? -ȸ���� �þ ������ �޸� �Ҵ����ֱ�
-�ε��� �������� ��� �����ͷ� ���

���� ���� �͵�
-���� & �迭 ȸ�� �� ����
-����� ���Ͽ��� id���� �����ͼ� �Էµ� ���̶� ���ϰ�
-�ش� id�� ��й�ȣ���� ���ؼ� �α��� �����ϱ�
-�ε��� ��� �����ͷ� �ٲٱ�
-������ ������ �� ���࿡�� �Է��� ȸ�� ������ ���
����
1. ���α׷��� ����Ǹ� ���Ͽ� �Էµ� ��� ������ main�� ����ü �迭�� ������
2. main���� �����ͼ� ȸ�� �� ���� - ȸ�������Ϸ��� �ϴµ� ���� �ο� ������ x
3. ȸ�������� ������ ������ ���� �޸� �Ҵ��ϸ� ������
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct member // ����� ȸ������ ���� -ȸ�� 3��??
{
    char id[10];
    char password[50];
} JOIN;

void PrintSeat(int seat[][10], int rowSize, int colSize); // �¼� ��� �Լ�
void ReserveSeat(int seat[][10]);                         // �����ϴ� ���� �Լ�
void Login(JOIN *userList, int seat[][10]);               // �α����ϴ� �Լ�
void JoinMember(JOIN *userList, FILE *member);            // ȸ�������ϴ� �Լ�

int main()
{
    int seat[10][10] = {0};                        // �¼� - 2���� �迭 ����
    int userChoice;                                // ����ȭ�鿡�� 1, 2, 3 ���� ��� �����ϴ� ����
    JOIN userInformation[10];                      // ȸ������ �ο��� 3��
    FILE *fMembers = fopen("membership.txt", "a"); // "a"�� ���� �ڿ� �����̱�
    // ���α׷� ����Ǹ� main���� ����ü �迭�� ���� ������ ��������

    /*
    // ȸ������ �Լ� �׽�Ʈ
    JoinMember(userInformation);
    printf("ID: %s\n", userInformation[0].id);
    printf("��й�ȣ: %s\n", userInformation[0].password);
    // �α��� �Լ� �׽�Ʈ
    Login(userInformation, seat);
    // ȸ�� ���� ��� �׽�Ʈ
    for (int i = 0;i < 10;i++)
    {
        printf("ID: %s\n", userInformation[i].id);
        printf("PASSWORD: %s\n", userInformation[i].password);
    }
    */

    // ����ȭ��
    while (1)
    {
        printf("1. �α���\n2. ȸ������\n3. ����\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1: // 1 �����ϸ� �α��� �Լ� ����
            Login(userInformation, seat);
            break;
        case 2: // 2 �����ϸ� ȸ������ �Լ� ����
            JoinMember(userInformation, fMembers);
            break;
        case 3: // 3 �����ϸ� ��������
            exit(0);
        default:
            break;
        }
    }
    fclose(fMembers);
    // ReserveSeat(seat); // �����ϱ�
    return 0;
}

void PrintSeat(int seat[][10], int rowSize, int colSize) // �¼� ��� �Լ�
{
    // 2���� �¼� ����ϱ�
    for (int i = 1; i <= 100; i++) // �¼���ȣ ���
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i�� 10�� ����� ������
            printf("\n"); // �ٹٲ�
    }
    for (int i = 0; i < rowSize; i++) // �¼� ���� ���� ���
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", seat[i][j]);
        printf("\n");
    }
}

void ReserveSeat(int seat[][10]) // �����ϴ� ����
{
    char ans1;
    int member, seatNum; // �ο���, �¼���ȣ ����
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

void Login(JOIN *userList, int seat[][10]) // �α����ϴ� �Լ� - id, password �Է¹޾Ƽ� ���ϱ�
{
    char inputId[10], inputPassword[50]; // ����ڰ� id, password �Է��ϴ� ���ڿ�
    // id, password �Է¹ޱ�
    printf("id: ");
    scanf("%s", inputId);
    printf("��й�ȣ: ");
    scanf("%s", inputPassword);

    // strcmp �Լ� ����ؼ� id, password ���ϰ� �ʹ�
    // strcmp(inputId, userInformation[i].id)
    /*
    for (int i = 0; i < 10; i++)
        if (!strcmp(inputId, userList[i].id)) // main�� �ִ� ���� ���� ����ü �迭�� �Է��� id�� password�� �ִ��� �˻�
            return 0; // ������ 0 ��ȯ�ϱ�
    */
    while (1)
    {
        for (int i = 0; i < 10; i++)
            if (!strcmp(inputId, userList[i].id) && !strcmp(inputPassword, userList[i].password)) // main�� �ִ� ���� ���� ����ü �迭�� �Է��� id�� password�� �ִ��� �˻�
            {
                ReserveSeat(seat); // ������ �����ϴ� �Լ� �����ϱ�
                exit(0);           // ��������
            }
        // �ݺ����� �� �������� ȸ�������� ���� id, password�� �Է��� ���̹Ƿ� �ٽ� �Է¹ޱ�
        printf("���̵�, ��й�ȣ�� �ٽ� �Է��ϼ���\n");
        memset(inputId, 0, sizeof inputId); // �ٽ� �Է¹ޱ� ���� ������ ���� ���ڿ� ����ֱ�
        memset(inputPassword, 0, sizeof inputPassword);
        printf("id: ");
        scanf("%s", inputId);
        printf("��й�ȣ: ");
        scanf("%s", inputPassword);
    }
}

void JoinMember(JOIN *userList, FILE *member) // ȸ�������ϴ� �Լ� - member ����ü �迭�� �Ű������� ����
{
    static int userNum = 0;      // userInformation ����ü �迭�� �ε����� ����� ���� -> ����� ������ �ε����� ���ϴ´�� �������� �ʰ� 0���� ������ -> static ������ �ٲ�
    printf("%d��°\n", userNum); // �ε��� ���� Ȯ�ο�
    printf("����� id�� �Է��ϼ���: ");
    scanf("%s", userList[userNum].id);
    // fscanf(fp, "%", &����); --> ���Ͽ� �Է��ϱ�

    printf("����� password�� �Է��ϼ���: ");
    scanf("%s", userList[userNum].password);
    fprintf(member, "%s\t%s\n", userList[userNum].id, userList[userNum].password);

    userNum++; // ȸ�������ϰ� userNum ������Ű�� �Լ� ����
}