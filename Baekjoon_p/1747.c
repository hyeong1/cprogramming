// �Ҽ�&�縰��� ��
// � �� N �� ���Ͽ� N ���� ũ�ų� ���� �Ҽ��̸鼭 �Ӹ������ �� �� ���� ���� �� ���ϱ�
// �Ӹ���� ��: � ���� ���ڸ� ������ ���� ��ġ�ϴ� �� -��) 123�� 321
// 1. �Ӹ���� �� ���ϱ�
// 2. �Ҽ� ���ϱ�
// (1 && 2)�� �����ϴ� �� �߿��� ���� ���� �� ã��
#include <stdio.h>

// �Է��� ���� �Ӹ���� �� ����ϱ�
int Palindrome(int n);
// �Է��� ������ ũ�ų� ���� �Ҽ� �߿��� ���� ���� �� ã��
void Prime(int n);

int main()
{
    int input, palindrome;
    scanf("%d", &input);

    //Palindrome(input);
    Prime(input);

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

void Prime(int n)
{
    int i;

    while (1)
    {
        for (i = 2;i < n;i++)
        {
            if (n % i == 0) // 2 �� n-1 ���̿� ����� ������ �Ҽ� �ƴ� -> n�� �ϳ� ������Ű�� ��ø�ݺ����� ����
            {
                n++;
                break;
            }
        }

        if (n == i) // �Ҽ� ���� ���ڰ� n�� �ϳ� ������Ű�� ��ø�ݺ��� ���� -> ��ø�ݺ����� ���� �� n�� �Է¹��� input���� ũ�鼭 �Ҽ��̸鼭 ���� ���� ��
        {
            printf("%d\n", n);
            break;
        }
    }
}