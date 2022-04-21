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

    /*
    // 초 단위인 time을 분으로 바꾼다.
    time = time / 60.0;
    printf("도달 시간은 %f분\n", time);

    // time을 int형에 저장해서 분만 꺼낸다.
    int min = time;
    double sec = (time - min) * 60;
    */

    // 나머지 연산자 이용하는 방법
    // 초를 1분으로 나눈 몫: 분, 초를 1분으로 나눈 나머지: 초
    // int intTime = time;
    // printf("%d", intTime);

    int min = time / 60;
    double sec = (int)time % 60;

    printf("도달 시간은 %d분 %lf초 \n", min, sec);

    return 0;
}