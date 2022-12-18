// 회문 검사
#include <stdio.h>
#include <string.h>

void palindrome(char *s);

int main()
{
    char s[100];
    printf("문자열 입력: ");
    scanf("%s", s);

    palindrome(s);

    return 0;
}

void palindrome(char *s)
{
    int i;
    for (i = 0;i < strlen(s)/2;i++) {
        if (s[i] != s[strlen(s)-1-i]) 
            printf("회문이 아닙니다.\n");
        else if (i == strlen(s)/2)
            printf("회문입니다.\n");
    }
}