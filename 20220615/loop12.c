#include <stdio.h>

// �Ǻ���ġ ���� �����Ͽ� ����ϴ� ���α׷�
int main() {
    int n, a, b, c;
    printf("���� ������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("%d, %d, ", a, b);
    for (int i = 1;i < n;i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }

    return 0;
}