// 1. (�����, ����)�� ����ü�� �� ��Ҹ� 3�� ���� �迭 ����
// 2. 3���� ��ҿ� ���� ��(������ ����)�� ���� �Է¹޾Ƽ� �迭�� ����
// 3. ����� �������̸��� ������ ���
#include <stdio.h>

typedef struct info
{
    char subject[20]; // �����
    int score; // ����
} INFO;

INFO InputInfo(INFO* list); // ������ ������ �Է¹��� �Լ�

int main()
{
    INFO list[3];
    int total = 0; // ���� ������ ������ ����

    InputInfo(list);
    for (int i = 0;i < 3;i++)
    {
        total += list[i].score;
        printf("%s ", list[i].subject);
    }
    printf("\n");
    printf("����: %d\n", total);

    return 0;
}

INFO InputInfo(INFO* list)
{
    for (int i = 0;i < 3;i++)
    {
        printf("�����: ");
        scanf("%s", list[i].subject);
        printf("����: ");
        scanf("%d", &list[i].score);
    }
}