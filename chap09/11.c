// ���װ���� ����ϴ� ��ȯ �Լ� �ۼ�
#include <stdio.h>

int Combination(int n, int k);
int Factorial(int n);

int main()
{
    printf("%d\n", Combination(4, 2));
    return 0;
}

// ���� ����ϴ� �� ���� �غ���
int Combination(int n, int k)
{
    //return Factorial(n) / (Factorial(n-k) * Factorial(k));
    if (k == 0 || k == n)
        return 1;

    return Combination(n-1, k-1) + Combination(n-1, k);
}

int Factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * Factorial(n-1));
}

