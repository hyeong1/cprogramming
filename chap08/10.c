// 9������ ���� b_rand()�Լ� �̿��Ͽ� ������ ���� ������ ���� �ùķ��̼�
// ��ǻ�Ͱ� ���� ������ ����ڰ� �յ� ���߱�
// ������ 1�̸� �ո�, 0�̸� �޸�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
    srand(time(NULL));
    int comNum, userNum; // ��ǻ�Ͱ� ���� ���� ����, ����� �Է� ����
    char userChoice;     // '����Ͻðڽ��ϱ�?'�� ���� ��� ���� ����

    do
    {
        comNum = b_rand();

        printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
        scanf("%d", &userNum);
        if (userNum == comNum)
            printf("�¾ҽ��ϴ�.\n");
        else
            printf("Ʋ�Ƚ��ϴ�.\n");

        printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
        scanf(" %c", &userChoice);
    } while (userChoice != 'n'); // userChoice�� n�� �ƴҵ��� �ݺ�
    
    return 0;
}

int b_rand()
{
    return rand() % 2;
}