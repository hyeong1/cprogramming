// ���� ���ϱ� �Լ��� �ۼ�
#include <stdio.h>

void is_leap(int year);
/*
int main()
{
    int year;
    printf("�⵵�� �Է��Ͻÿ�: ");
    scanf("%d", &year);

    is_leap(year);

    return 0;
}

// ����ڰ� �Է��� ������ �������� ����ϴ� ���α׷�
void is_leap(int year)
{
    // ������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.
    // ������ 366��
    if (year % 4 == 0) 
    {
        if (year % 100 != 0 || year % 400 == 0)
            printf("%d���� 366���Դϴ�.\n", year);
        else
            printf("%d���� 365���Դϴ�.\n", year);
    }
    else
        printf("%d���� 365���Դϴ�.\n", year);
}*/
int main()
{
    int year;
    scanf("%d", &year);
    is_leap(year);
    return 0;
}

void is_leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0 || year % 400 == 0)
            printf("%d���� 366���Դϴ�.\n", year);
        else
            printf("%d���� 365���Դϴ�.\n", year);
    }
    else
        printf("%d���� 365���Դϴ�.\n", year);
}