#include <stdio.h>

// ���� �Է¹޾Ƽ� 'R'/'r'�̸� "Rectangle", 'T'/'t'�� "Triangle", 'C'/'c'�� "Circle", �� ���� ���ڴ� "Unknown"
int main() {
    char data;
    printf("���ڸ� �Է��Ͻÿ�: ");
    data = getchar();

    switch (data) {
    case 'R':
        printf("Rectangle\n");
        break;
    case 'r':
        printf("Rectangle\n");
        break;
    case 'T':
        printf("Triangle\n");
        break;
    case 't':
        printf("Triangle\n");
        break;
    case 'C':
        printf("Circle\n");
        break;
    case 'c':
        printf("Circle\n");
        break;
    
    default:
        printf("Unkown\n");
        break;
    }

    return 0;
}