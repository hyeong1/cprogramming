// �־��� ������ �� ���� �ڸ����� ������ �ִ��� ����ϴ� ���α׷�
// 12345�� ��� 5 ���
#include <stdio.h>

int FindDigit(int num);

int main()
{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);

    printf("�ڸ���: %d\n", FindDigit(num));
    return 0;
}

int FindDigit(int num)
{
    static int digit = 0;
    digit++;
    if (num > 10)    
        FindDigit(num / 10);
    else
        return digit;
}