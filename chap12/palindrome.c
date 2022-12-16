// 회문 검사 프로그램
// 대소문자 구분X
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("문자열을 입력하시오: ");
    gets(str);

    // 회문 검사
    // 대소문자 구분 없애기 위해 모두 소문자로 변환
    for (int i = 0;i < strlen(str);i++)
        str[i] = tolower(str[i]);
    // 검사 부분
    for (int i = 0;i < strlen(str)/2;i++)
    {
        if (str[i] != str[strlen(str)-1-i])
        {
            printf("회문 아님\n");
            break;
        }
        printf("회문 맞음\n");
    }

    return 0;
}