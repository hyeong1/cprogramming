// ����ü �������� 9
// ������ ���Ŀ� ���� ������ �̸�, Į�θ� ���ɸ� ����ü�� ǥ��
// ����ڰ� �Ϸ� ���� ���� ���ĵ��� �Է¹޾� ����ü �迭�� ����
// �Ϸ� ���� ���� ������ Į�θ��� ���
#include <stdio.h>

typedef struct food
{
    char name[100]; // ������ �̸�
    int calories; // �ش� ������ Į�θ�
}FOOD;

int main()
{
    FOOD dayEaten[3]; // �Ϸ� ���� ���� ������ �Է¹��� ����ü �迭
    int totalCalories = 0; // �� Į�θ� �� ����
    // ����� �Է� �κ�
    printf("�Ϸ� ���� ���� ������ �Է��ϼ���.\n");
    for (int i = 0;i < 3;i++) 
    {
        printf("���� �̸�: ");
        scanf("%s", dayEaten[i].name);
        printf("Į�θ�: ");
        scanf("%d", &dayEaten[i].calories);    
    }

    // Į�θ� ���
    for (int i = 0;i < 3;i++)
        totalCalories += dayEaten[i].calories;
    
    // ��� ���
    printf("�� Į�θ�: %d\n", totalCalories);
    return 0;
}