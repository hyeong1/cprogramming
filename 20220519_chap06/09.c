#include <stdio.h>

// �Լ��� ����ϱ�-x�� �Է¹޾Ƽ� ��� ���
int main() {
    double x, function;
    printf("x�� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &x);

    if (x <= 0) {
        function = x*x -9*x + 2;
        printf("f(x)�� ���� %lf", function);
    }
    else {
        function = 7*x + 2;
        printf("f(x)�� ���� %lf", function);
    }

    return 0;
}