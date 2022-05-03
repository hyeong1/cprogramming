#include <stdio.h>

double square(double n) {
    double result;
    result = n * n;

    return result;
}

int main() {
    double input;
    printf("숫자 입력: ");
    scanf("%lf", &input);

    printf("%lf", square(input));
    
    return 0;
}