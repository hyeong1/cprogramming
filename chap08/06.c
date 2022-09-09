// �Լ� 3�� �׽�Ʈ
// int even(int n): �־��� ������ ¦���� 1, Ȧ���� 0 ��ȯ
// int absolute(int n): �־��� ������ ���밪�� ���ϴ� �Լ�
// int sign(int n): �־��� ������ ������ -1, ����� 1, 0�̸� 0 ��ȯ
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    if (even(num) == 1)
        printf("even()�� ���: ¦��\n");
    else if (even(num == 0))
        printf("even()�� ���: Ȧ��\n");

    printf("absolute()�� ���: %d\n", absolute(num));

    if (sign(num) == 0)
        printf("sign()�� ���: 0\n");
    else
    {
        if (sign(num) == 1)
            printf("sign()�� ���: ���\n");
        else 
            printf("sign()�� ���: ����\n");
    }    
    

    return 0;
}

// ¦���� 1, Ȧ���� 0 ��ȯ�ϴ� �Լ�
int even(int n)
{
    if (n % 2 == 0) // ¦��
        return 1;
    else  // Ȧ��
        return 0;
}

// ���밪 ���ϴ� �Լ�
int absolute(int n)
{
    if (n > 0)
        return n;
    else
        return (-(n));
}

// ������ -1, ����� 1, 0�̸� 0 ��ȯ
int sign(int n)
{
    if (n == 0)
        return 0;
    else 
    {
        if (n > 0)
            return 1;
        else 
            return -1;
    }
}