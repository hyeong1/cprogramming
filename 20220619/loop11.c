#include <stdio.h>

int main() {
    int n, result;
    result = 0;
    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        result += i * i;
    }

    printf("��갪�� %d�Դϴ�.\n", result);

    return 0;
}