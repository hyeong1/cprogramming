#include <stdio.h>

// 삼각형 5, 45, 345, 2345, 12345 출력
int main() {
    int len;
    printf("정수를 입력하시오: ");
    scanf("%d", &len);

    for (int i = 0;i < len;i++) {
        for (int j = 0;j < len - i;j++) 
            printf(" ");
        for (int j = len - i;j <= len;j++) 
            printf("%d", j);
        printf("\n");
    }

    return 0;
}