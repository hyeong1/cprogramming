#include <stdio.h>

int main() {
    const double PIE = 3.14;
    double radius, area, volume;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    area = 4.0 * PIE * radius * radius;
    volume = 4.0 / 3.0 * PIE * radius * radius * radius;

    printf("표면적은 %lf입니다.\n", area);
    printf("체적은 %lf입니다.\n", volume);

    return 0;
}