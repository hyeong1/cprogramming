// 사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도 계산
#include <stdio.h>
#include <string.h>

void PrintFre(char *s);

int main()
{
    char str[100];
    printf("문자열을 입력하시오: ");
    gets(str);

    PrintFre(str);
    return 0;
}

void PrintFre(char *s)
{
    char alphabet[26] = {0};

    // 문자열 s에서 알파벳 빈도수 찾기
    for (int i = 0;i < strlen(s);i++)
    {
        if (s[i] == ' ') // 문자가 공백이면 넘어가기
            continue;
        alphabet[(int)s[i]-97]++;
    }

    // 빈도수 출력하기
    for (int i = 0;i < 26;i++)
        printf("%c: %d\n", 97+i, alphabet[i]);
}