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
    
    printf("������ �����Ͻÿ�: ");
    scanf(" %c", &op);

    do {
        printf("������ �����Ͻÿ�: ");
        scanf(" %c", &op);
    } while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');

    while (1) {
        printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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