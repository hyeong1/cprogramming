// ���� ���� �����ϱ�
#include <stdio.h>

void save(int amount);
int abs(int n);

int main()
{
    printf("�Ա�\t���\t�ܰ�\n");
    save(100);
    save(100);
    save(-300);
    save(100);
    save(-100);

    return 0;
}

void save(int amount)
{
    static int saveMoney;
    if (amount < 0)
    {
        if (abs(amount) > saveMoney)
            printf("\t%d\t�ܾ׺���\n", abs(amount));
        else    
            printf("\t%d\t%d\n", abs(amount), saveMoney += amount);
    }
    else    
        printf("%d\t\t%d\n", amount, saveMoney += amount);
}

int abs(int n)
{
    if (n > 0)
        return n;
    else
        return -n;
}