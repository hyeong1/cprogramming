#include <stdio.h>

// �����1
int main() {
    int len;
    printf("���̸� �Է��Ͻÿ�: ");
    scanf("%d", &len);

    for (int i = 1;i <= len;i++) {
        for (int j = len;j > i;j--) {
            printf(" ");
        }
        for (int j = 1;j <= i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}