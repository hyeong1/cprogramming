#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("*****************\n");
    printf("A----Add\n");
    printf("S----Subtract\n");
    printf("M----Multiply\n");
    printf("D----Divide\n");
    printf("Q----Quit\n");
    printf("*****************\n");

    while (1) {
        if (op == 'A') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            printf("%d", num1 + num2);
            break;
        }
        else if (op == 'S') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            printf("%d", num1 - num2);
            break;
        }
        else if (op == 'M') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            printf("%d", num1 * num2);
            break;
        }
        else if (op == 'D') {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &num1, &num2);

            printf("%d", num1 / num2);
            break;
        }
        else if (op == 'Q') {
            break;
        }
        else {
            printf("������ �����Ͻÿ�: ");
            scanf("%c", &op);
        }
    }
    

    return 0;
}