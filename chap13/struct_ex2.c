// ��������� ã��
// �л� ���� ����ü �迭 �����ؼ� �ʱ�ȭ�� �� ���� ������ ���� �л��� �̸�, �й�, ������ ȭ�鿡 ���
#include <stdio.h>

typedef struct student
{
    int number;
    char name[20];
    double grade;
} STUDENT;

int main()
{
    STUDENT list[] = { {20, "��ö��", 4.2},
                        {21, "ȫ�浿", 3.9},
                        {21, "ȫ�浿", 3.9}};

    int bestGrade = 0; // ������ ���� ���� �л��� �ε����� ������ ����
    // ���� ���� ���� ã��
    for (int i = 1;i < 3;i++)
    {
        if (list[bestGrade].grade < list[i].grade)
            bestGrade = i;
    }

    // ��� ���
    printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %lf)�Դϴ�.\n", list[bestGrade].name, list[bestGrade].number, list[bestGrade].grade);
    return 0;
}