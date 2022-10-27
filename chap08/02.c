// 입력된 문자가 알파벳 문자인지 아닌지 검사하는 함수
#include <stdio.h>
/*
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
}*/
int CheckAlpha(char ch)
{
    /*if (ch >= 'a' && ch <= 'z')
        printf("%c는 알파벳 문자입니다.\n", ch);
    else
        printf("%c는 알파벳 문자가 아닙니다.\n", ch);*/
    return (ch >= 'a' && ch <= 'z');
}

int main()
{
    char ch;
    scanf(" %c", &ch);
    if (CheckAlpha(ch))
        printf("%c는 알파벳 문자입니다.\n", ch);
    else
        printf("%c는 알파벳 문자가 아닙니다.\n", ch);
    return 0;
}