#include <stdio.h>

int main() {
    int n, result;
    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    result = 0;

    for (int i = 1;i <= n;i++) {
        result += i * i;
    }

    printf("������� %d", result);

    return 0;
}