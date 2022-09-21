// ���� ���� 3���� ������ 10,000��+(���� ��)��1,000���� ����� �ް� �ȴ�. 
// ���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ����� �ް� �ȴ�. 
// ��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.
// 3, 3, 6 -> 1,000 + 3*100 => ��� 1,300
#include <stdio.h>

// �ִ밪 ã�� �Լ�
int max(int a, int b, int c);

int main()
{
    int d1, d2, d3, prize;
    scanf("%d %d %d", &d1, &d2, &d3);

    prize = 0;

    // ��� ���� ��
    if (d1 == d2 && d1 == d3 && d2 == d3)
        prize = 10000 + (d1 * 1000);
    // ���� �� 2��
    else if (d1 == d2 || d1 == d3 || d2 == d3)
    {
        if (d1 == d2)
            prize = 1000 + d1 * 100;
        else if (d1 == d3)
            prize = 1000 + d1 * 100; 
        else
            prize = 1000 + d2 * 100;
    }
    // ��� �ٸ� ��
    else
        prize = max(d1, d2, d3) * 100;
    
    printf("%d\n", prize);

    return 0;
}

int max(int a, int b, int c)
{
    if (a > b && a > c) 
        return a;
    else if (b > a && b > c) 
        return b;
    else 
        return c;
}