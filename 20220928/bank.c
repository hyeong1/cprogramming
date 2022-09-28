// 은행 계좌 구현하기
#include <stdio.h>

void save(int amount);
int abs(int n);

int main()
{
    printf("입금\t출금\t잔고\n");
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
            printf("\t%d\t잔액부족\n", abs(amount));
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