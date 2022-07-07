#include <stdio.h>

char check_alpha() {
    char ch;
    printf("문자를 입력하시오: ");
    ch = getchar();

    if (ch >= 'a' && ch <= 'z')
        printf("%c는 알파벳 문자입니다.", ch);

    return 0;
}

int main() {    
    check_alpha();

    return 0;
}