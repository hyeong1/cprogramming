#include <stdio.h>

int square(int n) {
    int result;
    result = n * n;

    return result;
}

int main() {
    int input;
    printf("���� �Է�: ");
    scanf("%d", &input);

    printf("%d", square(input));
    
    return 0;
}