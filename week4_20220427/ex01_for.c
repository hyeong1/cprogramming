#include <stdio.h>

int main() {
    int input_num, i;
    
    printf("�Է°�: ");
    scanf("%d", &input_num);
    
    for (i = 1;i <= input_num;i++) {
        printf("%d: %d\n", i, i * i);
    }

    return 0;
}