// ����ڰ� �Ϸ� ���� ���� ���ĵ��� �Է¹޾� ����ü �迭�� ����
// �Ϸ� ���� ���� ������ Į�θ��� ���
#include <stdio.h>

typedef struct food
{
    char name[100];
    int calories;
}FOOD;

int main()
{
    FOOD list[3] = { {"����", 200},
                     {"����", 300},
                     {"���", 400} };
    int total = 0; // �Ϸ� ���� ���� ������ Į�θ� ����

    // Į�θ� �ջ�
    for (int i = 0;i < 3;i++)
        total += list[i].calories;

    // ��� ���
    printf("�� Į�θ�=%d\n", total);
    return 0;
}