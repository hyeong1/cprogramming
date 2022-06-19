#include <stdio.h>

// 최대공약수 구하는 프로그램
int main() {
    int x, y, result;
    printf("두 정수를 입력하시오(큰수, 작은수): ");
    scanf("%d %d", &x, &y);

    for (int i = 1;i <= x;i++) {
        if (x % i == 0 && y % i == 0)
            result = i;
    }

    printf("최대 공약수는 %d입니다.\n", result);

    return 0;
}