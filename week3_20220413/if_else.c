#include <stdio.h>

int main()
{
    int number;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &number);

    // number ������ 2�� �������� 0�̸� ¦��
    if (number % 2 == 0)
    {
        printf("¦��");
    }
    // 2�� ���� �������� 1�̸� Ȧ��
    else
    {
        printf("Ȧ��");
    }

    return 0;
}