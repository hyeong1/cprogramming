#include <stdio.h>

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    for (int i = n;i >= 1;i--) {
        for (int j = 1;j <= i;j++) 
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}