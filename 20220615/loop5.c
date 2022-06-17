#include <stdio.h>

int main() {
    int len;
    printf("정수를 입력하세요: ");
    scanf("%d", &len);

    for (int i = 1;i <= len;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}