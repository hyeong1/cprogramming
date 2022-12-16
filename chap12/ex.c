// 문자열을 입력으로 받아서 문자열에 포함된 모든 공백 문자를 삭제하는 함수를 작성하고 테스트하라
#include <stdio.h>
#include <string.h>

void DeleteSpace(char *s, int size);

int main()
{
    char str[100];
    printf("공백 문자가 있는 문자열 입력: ");
    gets(str); // scanf는 공백을 포함하지 않으므로 gets사용

    DeleteSpace(str, strlen(str));

    return 0;
}

void DeleteSpace(char *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ') // 문자가 공백이면
            continue;    // 아무것도 수행하지 않는다.
        printf("%c", s[i]);
    }
}