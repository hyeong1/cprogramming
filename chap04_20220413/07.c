#include <stdio.h>

int main()
{
    //운동에너지 E = m * v^2 / 2.0
    //사용자로부터 질량m과 속도v를 입력받아서 E를 계산하는 프로그램
    //모든 변수는 double형 사용
    double kenergy, mass, speed;

    printf("질량(kg): ");
    scanf("%lf", &mass);
    printf("속도(m/s): ");
    scanf("%lf", &speed);

    kenergy = 0.5 * mass * speed * speed;
    printf("운동에너지(J): %lf", kenergy);

    return 0;
}