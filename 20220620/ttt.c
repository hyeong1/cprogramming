#include <stdio.h>

int main() {    
    char op;
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");

    do {
        printf("������ �����Ͻÿ�: ");
        scanf(" %c", &op);

        if (op == 'Q')
            break;
    } while (op != 'A' && op != 'S' && op != 'M' && op != 'D');

    while (1) {
        if (op == 'Q')
            break;
            
        int num1, num2;
        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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