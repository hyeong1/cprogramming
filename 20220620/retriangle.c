#include <stdio.h>

// ���ﰢ�� �����
int main() {
    int n;
    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= i;j++)
            printf(" ");
        for (int j = 2*n;j > 2*i -1;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}