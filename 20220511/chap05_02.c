#include <stdio.h>

int main() {
    double num1, num2;
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf %lf", &num1, &num2);

    printf("%lf %lf %lf %lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

    return 0;
}