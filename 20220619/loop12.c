#include <stdio.h>

// �Ǻ���ġ ����
int main() {
    int num, a, b, c;
    printf("�� ��° �ױ��� ���ұ��? ");
    scanf("%d", &num);

    a = 0;
    b = 1;
    printf("%d ", a);

    for (int i = 1;i <= num;i++) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}