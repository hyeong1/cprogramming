#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    printf("***************\n");
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");
    printf("***************\n");
    
    printf("연산을 선택하시오: ");
    scanf(" %c", &op);

    do {
        printf("연산을 선택하시오: ");
        scanf(" %c", &op);
    } while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');

    while (1) {
        printf("두수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &num1, num2);

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
        else if (op == 'Q')
            break;
    }
    

    return 0;
}