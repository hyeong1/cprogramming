// ���� ���� �����ϱ�
#include <stdio.h>

void save(int amount)
{
    static long total = 0;
    if (total > -amount)
        total += amount;
    else
        printf("�ܾ׺���\n");
    printf("�ܰ�: %d\n", total);
}
int main()
{
    save(10000);
    save(20000);
    save(-40000);
    save(500);
    
    return 0;
}