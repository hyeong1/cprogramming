#include <stdio.h>

int main() {
    const double PIE = 3.14;
    double radius, area, volume;

    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &radius);

    area = 4.0 * PIE * radius * radius;
    volume = 4.0 / 3.0 * PIE * radius * radius * radius;

    printf("ǥ������ %lf�Դϴ�.\n", area);
    printf("ü���� %lf�Դϴ�.\n", volume);

    return 0;
}