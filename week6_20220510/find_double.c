#include <stdio.h>

int main() {
    int a = 5.0;

    if (a / 1.00 == (int)a) {
        printf("����");
    }
    else {
        printf("�Ǽ�");
    }

    return 0;
}