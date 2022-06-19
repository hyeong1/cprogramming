#include <stdio.h>

int main() {
    const int MAX = 4;
    
    for (int i = MAX;i > 0;i--) {
        for (int j = 0;j < i;j++)
            printf("%d", j);
        printf("\n");
    }
    for (int i = 0;i <= MAX;i++) {
        for (int j = 0;j <= i;j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\n");

    // 5, 54, 543, 5432, 54321 출력
    for (int i = 5;i >= 1;i--) {
        for (int j = 5;j >= i;j--)
            printf("%d", j);
        printf("\n");
    } 

    return 0;
}