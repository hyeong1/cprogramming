// ��ȯ ȣ��� �� �ڸ��� ����ϱ�
#include <stdio.h>

int PrintDigit(int n)
{
    if (n > 10)
        PrintDigit(n / 10);
    printf("%d\n", n % 10);
}

int main()
{
    PrintDigit(1234);
    return 0;
}