#include <stdio.h>

int main() {
    int sum = 0;
    int i = 0;

    for (i = 0;i < 11;i++) {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}