#include <stdio.h>

int main() {
    int i, j, base, height;
    printf("가로, 세로 입력: ");
    scanf("%d %d", &base, &height);

    for (i = 0;i < height;i++) {
        // 세로가 4이면 
        // i == 0, 1, 2, 3 --> 4번
        for (j = 0;j < base - 1;j++) {
            // 가로가 3이면
            // j == 0, 1, 2 --> 3번
            // 3번인데 밖에서 하나 찍히니까 -1 --> 안에서는 2번만 찍기
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}