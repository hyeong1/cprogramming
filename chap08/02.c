// 입력된 문자가 알파벳 문자인지 아닌지 검사하는 함수
#include <stdio.h>

void check_alpha(char ch);

int main() 
{
    char ch;
    printf("문자를 입력하시오: ");
    scanf(" %c", &ch);

    check_alpha(ch);

    return 0;
}

void check_alpha(char ch)
{
    if (ch >= 97 || ch < 123)
        printf("%c는 알파벳 문자입니다.\n", ch);
}