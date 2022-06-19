#include <stdio.h>

int main() {
    // 1, 12, 123, 1234 ...
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\n");
    // 12345, 1234, 123, 12, 1
    for (int i = 5;i >= 1;i--) {
        for (int j = 1;j <= i;j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\n");
    // 1, 22, 333, 4444 ....
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++)
            printf("%d", i);
        printf("\n");
    }
    printf("\n");
    int num = 1;
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}