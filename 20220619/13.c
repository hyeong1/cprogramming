#include <stdio.h>

int main() {
    int a, b;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &a, &b);

    printf("%d�� ��������� %d�� ����� �ƴ� ��\n", a, b);

    for (int i = 1;i <= 100;i++) {
        if (i % 5 == 0 && i % 3 != 0)
            printf("%d ", i);
    }

    return 0;
}