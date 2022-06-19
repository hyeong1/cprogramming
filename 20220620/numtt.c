#include <stdio.h>

// 1, 21, 321 출력이랑 5, 45, 345 출력
int main() {
    int n;
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    for (int i = n;i >= 1;i--) {
        for (int j = 1;j <= n;j++) {
            if (j < i)
                printf(" ");
            else 
                printf("%d", j);
        }
        printf("\n");
    }

    for (int i = 1;i <= n;i++) {
        for (int j = n;j >= 1;j--) {
            if (j > i)
                printf(" ");
            else 
                printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}