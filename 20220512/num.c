#include <stdio.h>

// 삼각형 별찍기-별 대신 숫자로
int main() {
    for (int i = 1;i < 6;i++) {
        for (int j = 1;j < i;j++) {
            printf("%d", j);
        }
        printf("%d\n", i);
    }

    return 0;
}