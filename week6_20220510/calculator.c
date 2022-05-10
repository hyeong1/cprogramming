#include <stdio.h>

// 입력받은 값이 실수면 실수 출력, 정수면 정수 출력
// 정수 계산 함수
int intCalculator(int select, int num1, int num2) {
    int result;
    
    if (select == 1) {
        result = num1 + num2;
    }
    else if (select == 2) {
        result = num1 - num2;
    }
    else if (select == 3) {
        result = num1 / num2;
    }
    else {
        result = num1 * num2;
    }

    return result;
}

//실수 계산 함수
double doubleCalculator(int select, double num1, double num2) {
    double result;
    
    if (select == 1) {
        result = num1 + num2;
    }
    else if (select == 2) {
        result = num1 - num2;
    }
    else if (select == 3) {
        result = num1 / num2;
    }
    else {
        result = num1 * num2;
    }

    return result;
}

int main() {
    int select;
    double num1, num2;

    printf("수행할 연산을 선택하세요. 1.덧셈 2.뺄셈 3.나눗셈 4.곱셈\n");
    scanf("%d", &select);

    printf("연산할 두 수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    if (num1 - (int)num1 == 0 && num2 - (int)num2 == 0) {
        // 정수
        printf("연산 결과: %d", intCalculator(select, num1, num2));
    }
    else if (num1 - (int)num1 != 0 && num2 - (int)num2 == 0) {
        // 실수
        printf("연산 결과: %lf", doubleCalculator(select, num1, num2));
    }
    else {
        printf("연산 결과: %lf", doubleCalculator(select, num1, num2));
    }

    return 0;
}