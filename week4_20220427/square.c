#include <stdio.h>

int main() {
    int i, j;

    for (i = 0;i < 5;i++) {
        // i = 0, 1, 2, 3, 4 --> 5번
        for (j = 0;j < 4;j++) {
            // j = 0, 1, 2, 3 --> 4번
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}