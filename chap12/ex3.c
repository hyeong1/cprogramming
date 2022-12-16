// 문자열을 받아서 문자열에 포함된 문자를 대문자로 변환하는 함수 str_upper
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_upper(char *s);

int main()
{
    char s[100];
    printf("문자열을 입력하시오: ");
    gets(s);

    str_upper(s);
    return 0;
}

void str_upper(char *s)
{
    for (int i = 0;i < strlen(s);i++)
        printf("%c", toupper(s[i]));
    printf("\n");
}