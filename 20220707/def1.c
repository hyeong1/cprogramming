#include <stdio.h>

double square(double a) {
    return a*a;
}

int main() {
    double num;
    printf("������ �Է��ϼ���: ");
    scanf("%lf", &num);

    printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", num, square(num));

    return 0;
}