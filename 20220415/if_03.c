#include <stdio.h>

int main() {
    int x, y;
    printf("");
    scanf("%d\n%d", &x, &y);

    // x > 0
    if (x > 0) {
        if (y > 0) {  // x > 0, y > 0 -> 제1사분면
            printf("1");
        }
        else {        // x > 0, y < 0 -> 제4사분면
            printf("4");
        }
    }
    // x < 0
    else {
        if (y > 0) {  // x < 0, y > 0 -> 제2사분면
            printf("2");
        }
        else {        // x < 0, y < 0 -> 제3사분면
            printf("3");
        }
    }

    return 0;
}