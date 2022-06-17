#include <stdio.h>

int main() {
    int len;
    printf("정수를 입력하시오: ");
    scanf("%d", &len);

    for (int i = len;i >= 1;i--) {
        for (int j = 1;j <= i;j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}