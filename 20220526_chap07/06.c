#include <stdio.h>

int main() {
    char op;
    int num1, num2, result;
    printf("****************\n");
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");
    printf("****************\n");

    do {
        printf("연산을 선택하시오:");
        scanf(" %c", &op);

        if (op == 'A') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &num1, &num2);

            result = num1 + num2;
            printf("%d", result);
            break;
        }
        else if (op == 'S') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &num1, &num2);

            result = num1 - num2;
            printf("%d", result);
            break;
        }
        else if (op == 'M') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &num1, &num2);

            result = num1 * num2;
            printf("%d", result);
            break;
        }
        else if (op == 'D') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &num1, &num2);

            result = num1 / num2;
            printf("%d", result);
            break;
        }
        else if (op == 'Q') {
            break;
        }

    } while (1);


    return 0;
}