// ����ü �������� 10
// ������ ��Ÿ���� ����ü employee - ���, �̸�, ��ȭ��ȣ, ���� ������ ����
// ����ü �迭 ����, 10���� �����ͷ� �ʱ�ȭ
// ���߿��� ���̰� 20�̻�, 30������ ������ �̸��� ���� ���
#include <stdio.h>

typedef struct employee
{
    int empNo;         // ���
    char empName[100]; // �̸�
    char phoneNo[100]; // ��ȭ��ȣ
    int age;           // ����
} EMP;

int main()
{
    EMP empArr[10] = {{1, "Kim", "1234", 22},
                      {2, "KKK", "2345", 44},
                      {3, "KDKD", "3456", 35},
                      {4, "Lee", "34156", 27},
                      {5, "Lee2", "73456", 33},
                      {6, "Hing", "53456", 56},
                      {7, "Hong", "33456", 49},
                      {8, "Gwang", "23456", 21},
                      {9, "Ko", "13456", 22},
                      {10, "KKo", "34536", 23}};
    // ��� �κ�
    for (int i = 0; i < 10; i++)
    {
        if (empArr[i].age >= 20 && empArr[i].age <= 30)
            printf("�̸�: %s, ����: %d\n", empArr[i].empName, empArr[i].age);
    }
    return 0;
}