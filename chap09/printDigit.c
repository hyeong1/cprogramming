// ��ȯ ȣ��� �� �ڸ��� ����ϱ�
#include <stdio.h>

void PrintDigit(int n)
{
    if (n > 0)
    {
        PrintDigit(n / 10);
        printf("%d\n", n % 10);
    }
}

int main()
{
    PrintDigit(234);
    return 0;
}