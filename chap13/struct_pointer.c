// ����ü ������
// ���� ��� ������(->) ����ϱ�
#include <stdio.h>

typedef struct student
{
    int no;
    char name[10];
    double grade;
} STUDENT;

int main()
{
    STUDENT s = {24, "kim", 4.3};
    STUDENT *ps;
    ps = &s;

    // printf("�й� %d\n�̸� %s\n���� %lf\n", (*ps).no, (*ps).name, (*ps).grade);
    printf("�й� %d\n�̸� %s\n���� %lf\n", ps->no, ps->name, ps->grade);

    return 0;
}