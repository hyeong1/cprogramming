#include <stdio.h>

double cal_area(double radius) {
    return 3.141592 * radius * radius;
}

int main() {    
    double radius;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    printf("원의 면적은 %lf입니다.", cal_area(radius));

    return 0;
}