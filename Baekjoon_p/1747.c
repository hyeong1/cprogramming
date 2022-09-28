// �Ҽ�&�縰��� ��
// � �� N �� ���Ͽ� N ���� ũ�ų� ���� �Ҽ��̸鼭 �Ӹ������ �� �� ���� ���� �� ���ϱ�
// �Ӹ���� ��: � ���� �տ������� ���� �Ͱ� �ڿ������� ���� ���� ��ġ�ϴ� �� -��)101, 10201
// 1. �Ӹ���� �� ���ϱ�
// 2. �Ҽ� ���ϱ�
// (1 && 2)�� �����ϴ� �� �߿��� ���� ���� �� ã��
#include <stdio.h>
#include <string.h>

// �Է��� ���� �Ӹ���� �� ����ϱ�
int Palindrome(int n);
// �Է��� ������ ũ�ų� ���� �Ҽ� �߿��� ���� ���� �� ã��
int Prime(int n);
// �Ҽ��̸鼭 �Ӹ������ �� �߿��� ���� ���� �� ã��
// 1. n���� ũ�ų� ���� �� �߿��� �Ӹ���� �� ã��
// 2. ã�� �Ӹ���� ���� �Ҽ����� �Ǻ�

int main()
{
    int input;
    scanf("%d", &input);

    while (1)
    {
        if (Palindrome(input) == 1 && Prime(input) == 1)
        {
            printf("%d\n", input);
            break;
        }
        else 
            input++;
    }
    return 0;
}

int Palindrome(int n)
{
    // n ���� ũ�ų� ���� �� �߿��� ���� ���� �Ӹ���� �� ã��
    char number[10];
    sprintf(number, "%d", n); // ������ n�� ���ڿ��� ��ȯ
    int last = strlen(number); // ���ڿ� ���� ����
    
    for (int i = 0;i < last/2;i++)
    {
        if (number[i] != number[last-1-i])
            return 0;
    }
    return 1;
}

int Prime(int n)
{
    int check = 0;

    if (n == 2) // 2�� �ԷµǸ� 2�� �Ҽ��̹Ƿ�
        return 1; // �ٷ� 1 ����

    for (int i = 2;i < n;i++)
    {
        if (n % i == 0) // 2~�ڱ��ڽ� ���� ����� ������
        { 
            check = 0; // �Ҽ� üũ�� ������ 0���� �ϰ�
            break; // �ݺ��� ������
        }
        else
            check++;
    }
    if (check == 0) // �Ҽ� üũ�� ������ 0�̸�
        return 0; // 0 ����
    return 1;
}