#include <stdio.h>

// ���� ��� �ϴ� ���α׷�
int main() {
    int n, r, result;
    result = 1;

    printf("n�� ��: ");
    scanf("%d", &n);
    printf("r�� ��: ");
    scanf("%d", &r);

    for (int i = n;i >= (n - r + 1);i--) {
        result = result * i;
    }
    printf("������ ���� %d�Դϴ�.", result);

    return 0;
}