#include <stdio.h>

// �Է¹��� ���� �Ǽ��� �Ǽ� ���, ������ ���� ���
// ���� ��� �Լ�
int intCalculator(int select, int num1, int num2) {
    int result;
    
    if (select == 1) {
        result = num1 + num2;
    }
    else if (select == 2) {
        result = num1 - num2;
    }
    else if (select == 3) {
        result = num1 / num2; // --> �������� �Ǽ��� ���� �� �ֱ� ������ �ϴ� �Ǽ��� ��� �ް� -> int main()���� ��� ����, �Ǽ� �Ǻ��ؼ� �Ǽ��� �Ǽ��� ���, ������ �Ҽ��� ���� ���
    }
    else {
        result = num1 * num2;
    }

    return result;
}

//�Ǽ� ��� �Լ�
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

    printf("������ ������ �����ϼ���. 1.���� 2.���� 3.������ 4.����\n");
    scanf("%d", &select);

    printf("������ �� ���� �Է��ϼ���: ");
    scanf("%lf %lf", &num1, &num2);

    if (num1 - (int)num1 == 0 && num2 - (int)num2 == 0) {
        // ����
        printf("���� ���: %d", intCalculator(select, num1, num2));
    }
    else if (num1 - (int)num1 != 0 && num2 - (int)num2 == 0) {
        // �Ǽ�
        printf("���� ���: %lf", doubleCalculator(select, num1, num2));
    }
    else {
        printf("���� ���: %lf", doubleCalculator(select, num1, num2));
    }

    return 0;
}