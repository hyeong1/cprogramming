#include <stdio.h>

// �Ǽ� �޾Ƽ� �������� ��ȯ
double square(double n) {
    double square = n * n;
    printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", n, square);
}

int main() {
    double num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &num);

    square(num);

    return 0;
}