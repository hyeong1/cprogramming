#include <stdio.h>

// 2���� ������ �޾Ƽ� ù ��° ������ �� ��° ������ ������ ���������� �˻�(������� �˻�)
int main() {
    int num1, num2;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num1);
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("����Դϴ�.");
    }
    /*
    if (!(num1 % num2)) {
        printf("����Դϴ�.");
    }
    */

    return 0;
}