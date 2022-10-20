#include <stdio.h>

int IsPrime(int n)
{
    int check = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) // i�� n�� �����
            check++;    // check ����
        if (check > 1)  // ����� ������ 1 �̻��̸�
            return 0;   // 0 ��ȯ
    }
    if (check) // check == 1�̸�
        return 1;
    else // check == 0�̸鵵 ����
        return 0;
}

int main()
{
    for (int i = 2; i < 101; i++)
    {
        if (IsPrime(i)) // IsPrime(i) == 1 �̸�
            printf("%d ", i);
    }
    return 0;
}