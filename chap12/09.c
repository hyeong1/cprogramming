// 문자열 연습문제 9
// 공백있는 문자열을 받아서 첫 문자는 대문자로, 마지막에는 마침표를 찍도록 교정하는 프로그램
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void PrintModify(char *s); // 교정된 문자열을 출력하는 함수

int main()
{
    char s[100];
    gets(s);

    PrintModify(s);
    return 0;
}

void PrintModify(char *s)
{
    // 첫 문자 출력 부분
    if (islower(s[0]))               // islower()함수: 소문자면 true
        printf("%c", toupper(s[0])); // 첫문자가 소문자면 대문자로 출력
    else
        printf("%c", s[0]);

    // 중간 문자 출력 부분
    for (int i = 1; i < strlen(s) - 1; i++)
        printf("%c", s[i]);

    // 마지막 문자 출력 부분
    if (s[strlen(s) - 1] != '.') // 마지막 문자가 마침표가 아니면
    {
        printf("%c", s[strlen(s) - 1]); // 마지막 문자 출력하고
        printf(".");                    // 마침표도 출력하기
    }
    else                            // 마지막 문자가 마침표가 맞으면
        printf("%c", s[strlen(s)-1]); // 그대로 출력하기
}