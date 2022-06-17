#include <stdio.h>

int main() {
    char data;
    printf("문자를 입력하시오: ");
    data = getchar();

    switch (data)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("모음입니다.");
        break;
    
    default:
        break;
    }

    return 0;
}