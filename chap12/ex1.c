// 문자열 안에 포함된 특정한 문자의 개수를 세는 함수를 작성
#include <stdio.h>
#include <string.h>

int StrChar(char *s, int c); // s는 문자열, c는 개수를 셀 문자

int main()
{
    char s[100];
    int c = 0;
    printf("문자열을 입력하세요: ");
    gets(s);

    StrChar(s, c);
    return 0;
}

int StrChar(char *s, int c)
{
    char find;
    printf("개수를 셀 문자를 입력하시오: ");
    scanf("%c", &find);

    // 위에서 입력한 문자 찾기
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == find) // 해당 문자면
            c++;          // c값 증가
    }
    printf("%c의 개수: %d\n", find, c);
}