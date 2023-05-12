// ���簢������ Ż��
// ���� ��ǥ (x, y)���� ���簢�� ��輱���� �ּҰ� ���9
#include <stdio.h>
#include <math.h>

int abs(int a);
int distance(int x, int y, int w, int h);

int main()
{
    int x, y, w, h;
    int dis[8]; // ��輱������ �Ÿ��� �� 8��
    int min;    // �ּ� �Ÿ�
    scanf("%d %d %d %d", &x, &y, &w, &h);

    dis[0] = x;                    // y = 0 ���� �Ÿ�
    dis[1] = y;                    // x = 0 ���� �Ÿ�
    dis[2] = abs(x - w);           // x ~ w �Ÿ�
    dis[3] = abs(y - h);           // y ~ h �Ÿ�
    dis[4] = distance(x, y, 0, h); // (x, y) ~ (0, h)
    dis[5] = distance(x, y, 0, 0); // (x, y) ~ (0, 0)
    dis[6] = distance(x, y, w, h); // (x, y) ~ (w, h)
    dis[7] = distance(x, y, w, 0); // (x, y) ~ (w, 0)

    // 8�� �Ÿ� �߿��� �ּҰŸ� ã��
    min = dis[0];
    for (int i = 1; i < 8; i++)
        if (min > dis[i])
            min = dis[i];
    printf("%d\n", min);

    return 0;
}

int abs(int a)
{
    if (a >= 0)
        return a;
    else
        return -a;
}

int distance(int x, int y, int w, int h)
{
    return sqrt(abs((x * x - w * w) + (y * y - h * h)));
}