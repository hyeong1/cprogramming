#include <stdio.h>

double cal_area(double radius) {
    return 3.141592 * radius * radius;
}

int main() {    
    double radius;
    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &radius);

    printf("���� ������ %lf�Դϴ�.", cal_area(radius));

    return 0;
}