// �˶� �ð� 45�� ���� �����ϱ�
#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    m -= 45;

    if (m < 0)
    {
        if (h == 0)
            h = 24;
        h--;
        m += 60;
    }
    printf("%d %d", h, m);
    
    return 0;
}