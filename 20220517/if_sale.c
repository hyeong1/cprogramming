#include <stdio.h>

int main() {
    int price, total;
    double discount;
    
    printf("�� ���ž��� �Է����ּ���: ");
    scanf("%d", &price);

    if (price >= 100000) {
        discount = 0.8;
        total = price * discount;
        printf("���� �������� %d���Դϴ�.\n", total);
    }
    else if (price >= 50000) {
        discount = 0.9;
        total = price * discount;
        printf("���� �������� %d���Դϴ�.\n", total);
    }
    else if (price >= 10000) {
        discount = 0.95;
        total = price * discount;
        printf("���� �������� %d���Դϴ�.\n", total);
    }
    else {
        printf("���� �������� %d���Դϴ�.\n", price);
        printf("10000�� �̻� ���� �� ���εǴ� ���� ���ּ���*^^*\n");
    }

    return 0;
}