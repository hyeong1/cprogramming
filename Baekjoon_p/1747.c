// �Ҽ�&�縰��� ��
// � �� N �� ���Ͽ� N ���� ũ�ų� ���� �Ҽ��̸鼭 �Ӹ������ �� �� ���� ���� �� ���ϱ�
// �Ӹ���� ��: � ���� ���ڸ� ������ ���� ��ġ�ϴ� �� -��) 123�� 321
// 1. �Ӹ���� �� ���ϱ�
// 2. �Ҽ� ���ϱ�
// (1 && 2)�� �����ϴ� �� �߿��� ���� ���� �� ã��
#include <stdio.h>

// �Է��� ���� �Ӹ���� �� ����ϱ�
int Palindrome(int n);

int main()
{
    int input, palindrome;
    scanf("%d", &input);

    Palindrome(input);
    return 0;
}

int Palindrome(int n)
{
    if (n < 10)
        printf("%d", n);
    else
    {
        printf("%d", n % 10);
        Palindrome(n / 10);
    }
}