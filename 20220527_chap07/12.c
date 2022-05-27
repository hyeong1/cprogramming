#include <stdio.h>

// 피보나치 수열
int main() {
    int input, a, b, c;
    a = 0;
    b = 1;
    
    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &input);

    printf("%d ", a);
    for (int i = 1;i < input;i++) {
        c = a + b;  
        a = b;
        b = c;  
        printf("%d ", c);
    }

    return 0;
}