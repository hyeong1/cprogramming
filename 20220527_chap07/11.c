#include <stdio.h>

// 1^2 + 2^2 + ... + n^2 �� ���ϱ�
int main() {
    int n, result = 0;

    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        result += i * i;
    }
    printf("��갪�� %d�Դϴ�.", result);

    return 0;
}