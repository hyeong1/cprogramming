#include <stdio.h>

int main() {
    int num, total;
    num = 1;
    total = 5;

    for (int i = 1;i <= 5;i++) {
        for (int j = num;j <= total;j++) {
            printf("%d", j);
        }
        printf("\n");
        num += 1;
        total += 1;
    }

    return 0;
}