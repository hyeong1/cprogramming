// 162쪽 태양빛 도달 시간 계산
#include <stdio.h>

int main()
{
    double light_speed = 300000;
    double distance = 149600000;

    double time;
    time = distance / light_speed;
    
    printf("빛의 속도는 %fkm/s \n", light_speed);
    printf("태양과 지구와의 거리 %fkm \n", distance);
    printf("도달 시간은 %f초 \n", time);

    // time을 분dm로 나타내기 - time을 60.0으로 나눈다.
    time = time / 60.0;
    printf("도달 시간은 %f분\n", time);

    int min = time;
    double sec = (time - min) * 60;

    printf("도달 시간은 %d분 %lf초 \n", min, sec);

    return 0;
}