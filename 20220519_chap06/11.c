#include <stdio.h>

// 문자 입력받아서 'R'/'r'이면 "Rectangle", 'T'/'t'면 "Triangle", 'C'/'c'면 "Circle", 그 외의 문자는 "Unknown"
int main() {
    char data;
    printf("문자를 입력하시오: ");
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