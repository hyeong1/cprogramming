#include <stdio.h>

int main()
{
    //변수 x와 y의 값을 바꿔서 출력
    int x = 10;
    int y = 20;
    int z;

    printf("x = %d, y = %d\n", x, y);

    //z에 x값 넣음
    z = x;
    //x에는 y값 넣음
    x = y;
    //y에 z에 넣은 x값을 넣음
    y = z;

    printf("x = %d, y = %d", x, y);

    return 0;
}