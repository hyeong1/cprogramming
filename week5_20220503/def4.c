#include <stdio.h>

int find_max(int x, int y, int z) {
    int result;

    if (x > y && x > z) {
        result = x;
    }
    else if (y > x && y > z) {
        result = y;
    }
    else if (z > x && z > y) {
        result = z;
    }
    else {
        result = x;
    }

    return result;
}

int main() {
    int num1, num2, num3;

    printf("세 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d", find_max(num1, num2, num3));

    return 0;
}
