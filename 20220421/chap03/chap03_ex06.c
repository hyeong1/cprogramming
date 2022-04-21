#include <stdio.h>

int main()
{
    double weightE, weightM;
    printf("몸무게를 입력하세요: ");
    scanf("%lf", &weightE);

    weightM = weightE * 0.17;
    printf("달에서의 몸무게는 %lf입니다.", weightM);

    return 0;
}