// m, n ������ �Ҽ� ����ϱ�
#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    for (i = m;i <= n;i++)
    {
        for (j = 2;j < i;j++)
        {
            if (i % j == 0) 
                break; // 2���� �ڱ��ڽ� ������ ������ �� �������� 0�̸� ��øfor�� ����
        }
        if (j == i) // --> ��ø �ݺ��� ���� �� ���� �������� 0�ΰ� ���� -> �Ҽ� -> ��øfor������ j<i, j++ �����ϰ� ��øfor�� ����
            printf("%d ", j);
    }

    return 0;
}