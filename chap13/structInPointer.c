// ����ü �ȿ� ������ ���� ����
#include <stdio.h>

typedef struct date
{
    int month;
    int day;
    int year;
} DATE;

typedef struct student
{
    int number;
    char name[20];
    double grade;
    DATE *dob; // date ����ü�� ���� ������ ������ ����� ����
}STUDENT;

int main()
{
    DATE d = {3, 20, 1990};
    STUDENT s = {2033041, "LEE", 4.3};
    s.dob = &d; // ����ü ����s�� ��� dob�� ����ü d�� �ּ� ����

    // ���
    printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

    return 0;
}