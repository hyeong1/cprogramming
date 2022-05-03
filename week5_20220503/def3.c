#include <stdio.h>

int tree(int length) {
    int i, j;

    for (i = 0;i < length;i++) {
        for (j = length - 1;j > i;j--) {
            printf(" ");
        }
        for (j = 0;j < i;j++) {
            printf("*");
        }
        for (j = 0;j < i;j++) {
            printf("*");
        }
        printf("*\n");
    }
}

int main() {
    int data;
    printf("길이 입력: ");
    scanf("%d", &data);

    printf("\n");
    tree(data);

    return 0;
}