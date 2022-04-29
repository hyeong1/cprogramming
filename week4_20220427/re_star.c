#include <stdio.h>

int main() {
    int i, j;

    for (i = 0;i < 5;i++){
        // i == 0, 1, 2, 3, 4 --> 세로로 5번
        for (j = 4;j > i;j--) {
            // j == 4, 3, 2, 1, 0 
            printf(" ");
        }
        for (j = 0;j < i;j++) {
            // j == 0, 1, 2, 3, 4 
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}