#include <stdio.h>

double calculator(int select, int num1, int num2) {
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

    printf("������ ������ �����ϼ���. 1.���� 2.���� 3.������ 4.����\n");
    scanf("%d", &select);

    printf("������ �� ���� �Է��ϼ���: ");
    scanf("%lf %lf", &num1, &num2);

    printf("���� ���: %lf", calculator(select, num1, num2));

    return 0;
}