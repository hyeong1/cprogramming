// �л� �� �Է¹ް�, �л� �� ��ŭ ���� �Ҵ�
// ��ü �л� ���� ��� �� ������ ���� ���� �л� ���� ���
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[20];
    double grade;
};

int main()
{
    struct student *list;
    int size;
    int best; // ������ ���� ���� �л� ã�� �� ����� ����
    printf("�л� ��: ");
    scanf("%d", &size);
    list = (struct student*)malloc(size * sizeof(struct student));

    // ���� �Է�
    for (int i = 0;i < size;i++)
    {
        printf("�й��� �Է��Ͻÿ�: ");
        scanf("%d", &list[i].number);
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s", list[i].name);
        printf("������ �Է��Ͻÿ�(�Ǽ�): ");
        scanf("%lf", &list[i].grade);
    }
    // ��ü ���� ���
    for (int i = 0;i < size;i++)
        printf("�й�: %d, �̸�: %s,����: %lf\n", list[i].number, list[i].name, list[i].grade);

    // ������ ���� ���� �л��� ���� ���
    best = 0;  
    for (int i = 1;i < size;i++)
        if (list[best].grade < list[i].grade)
            best = i; // ������ ���� ���� �л��� �ε����� ����
    printf("������ ���� ���� �л��� (�й�: %d, �̸�: %s, ����: %lf)�Դϴ�.\n", list[best].number, list[best].name, list[best].grade);

    return 0;
}