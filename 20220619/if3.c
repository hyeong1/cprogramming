#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        if (num1 < num3)
            printf("���� ���� ������ %d�Դϴ�.", num1);
        else 
            printf("���� ���� ������ %d�Դϴ�.", num3);
    }
    else {
        if (num2 < num3) 
            printf("���� ���� ������ %d�Դϴ�.", num2);
        else 
            printf("���� ���� ������ %d�Դϴ�.", num3);
    }

    return 0;
}