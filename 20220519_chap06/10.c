#include <stdio.h>

// 좌표 입력받아서 해당 좌표가 속하는 사분면을 화면에 출력
int main() {
    int x, y;
    printf("좌표(x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0) {
        // 1, 4사분면
        if (y > 0) {
            printf("1사분면\n");
        }
        else {
            printf("4사분면\n");
        }
    }
    else {
        // 2, 3사분면
        if (y > 0) {
            printf("2사분면\n");
        }
        else {
            printf("3사분면\n");
        }
    }

    return 0;
}