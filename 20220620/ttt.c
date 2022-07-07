#include <stdio.h>

int main() {    
    char op;
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");

    do {
        printf("연산을 선택하시오: ");
        scanf(" %c", &op);

        if (op == 'Q')
            break;
    } while (op != 'A' && op != 'S' && op != 'M' && op != 'D');

    while (1) {
        if (op == 'Q')
            break;
            
        int num1, num2;
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &num1, &num2);

        if (op == 'A') {
            printf("%d", num1 + num2);
            break;
            }
        else if (op == 'S') {
            printf("%d", num1 - num2);
            break;
            }
        else if (op == 'M') {
            printf("%d", num1 * num2);
            break;
            }
        else if (op == 'D') {
            printf("%d", num1 / num2);
            break;
        }
    }

    return 0;
}