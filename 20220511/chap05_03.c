#include <stdio.h>

int main() {
    int num1, num2, num3, result;
    printf("3���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;
    printf("�ִ밪: %d", result);

    return 0;
}