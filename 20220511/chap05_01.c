#include <stdio.h>

int main() {
    int num1, num2;
    printf("2���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);

    printf("��:%d ������:%d", num1 / num2, num1 % num2);

    return 0;
}