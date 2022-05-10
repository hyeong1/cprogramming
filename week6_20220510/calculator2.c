#include <stdio.h>

double calculator(double num1, char op, double num2) {
    double result;

    if (op == '+') {
        result = num1 + num2;
        printf("%lf", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("%lf", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("%lf", result);
    }
    else if (op == '/') {
        result = num1 / num2;
        printf("%lf", result);
    }
}
int main() {
    char op;
    double num1, num2;

    printf("계산식을 입력하세요.(예: 3 + 3): \n");
    scanf("%lf %c %lf", &num1, &op, &num2);

    printf("-----------\n");
    calculator(num1, op, num2);

    return 0;
}