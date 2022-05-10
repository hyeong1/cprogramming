#include <stdio.h>

int main() {
    int a = 5.0;

    if (a / 1.00 == (int)a) {
        printf("정수");
    }
    else {
        printf("실수");
    }

    return 0;
}