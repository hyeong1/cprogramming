// 직사각형에서 탈출
// 현재 좌표 (x, y)에서 직사각형 경계선까지 최소값 출력9
#include <stdio.h>
#include <math.h>

int abs(int a);
int distance(int x, int y, int w, int h);

int main()
{
    int x, y, w, h;
    int dis[8]; // 경계선까지의 거리는 총 8개
    int min;    // 최소 거리
    scanf("%d %d %d %d", &x, &y, &w, &h);

    dis[0] = x;                    // y = 0 까지 거리
    dis[1] = y;                    // x = 0 까지 거리
    dis[2] = abs(x - w);           // x ~ w 거리
    dis[3] = abs(y - h);           // y ~ h 거리
    dis[4] = distance(x, y, 0, h); // (x, y) ~ (0, h)
    dis[5] = distance(x, y, 0, 0); // (x, y) ~ (0, 0)
    dis[6] = distance(x, y, w, h); // (x, y) ~ (w, h)
    dis[7] = distance(x, y, w, 0); // (x, y) ~ (w, 0)

    // 8개 거리 중에서 최소거리 찾기
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