#include <stdio.h>

int main() {
    int input_num;
    int i = 1;
    printf("�Է°�: ");
    scanf("%d", &input_num);

    while (i <= input_num) {
        printf("%d: %d\n", i, i * i);
        i++;
    }

    return 0;
}