#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("2�� ����: %d\n", (~num) + 1);

    return 0;
}