// 1/1 + 1/2 + 1/3 + ... + 1/n 
// �� ������ ���� ����ϴ� ��ȯ���� ���α׷� �ۼ�
#include <stdio.h>

double Sequence(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", Sequence(n));
    return 0;
}

double Sequence(int n)
{
    if (n == 1)
        return 1;
    else 
        return ((1.0 / n) + Sequence(n-1));
}