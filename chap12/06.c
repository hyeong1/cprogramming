// 문자열 연습문제 6
// 문자열을 입력받아서 포함된 문자를 대문자로 변환하는 함수를 작성하고 테스트하라
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void StrUpper(char *s);

int main()
{   
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);
    StrUpper(str);

    return 0;
}

void StrUpper(char *s)
{
    for (int i = 0;i < strlen(s);i++)
        printf("%c", toupper(s[i])); // 문자열의 문자를 모두 대문자로 변환해서 출력
}