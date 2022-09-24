// ��ȯ����� �̿��Ͽ� �������� ����ϴ� �Լ� power(int base, int power_raised) �ۼ��ϰ� �׽�Ʈ
// power(2, 3)�� ȣ��Ǹ� 2^3�� ����Ͽ� ��ȯ
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
    int base, raised;
    printf("�ؼ�: ");
    scanf("%d", &base);
    printf("����: ");
    scanf("%d", &raised);

    printf("%d^%d = %d\n", base, raised, power(base, raised));

    return 0;
}

int power(int base, int power_raised)
{
    if (power_raised == 1)
        return base;
    else
        return (base * power(base, power_raised-1));
}