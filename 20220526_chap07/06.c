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
        printf("������ �����Ͻÿ�:");
        scanf(" %c", &op);

        if (op == 'A') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            result = num1 + num2;
            printf("%d", result);
            break;
        }
        else if (op == 'S') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            result = num1 - num2;
            printf("%d", result);
            break;
        }
        else if (op == 'M') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            result = num1 * num2;
            printf("%d", result);
            break;
        }
        else if (op == 'D') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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