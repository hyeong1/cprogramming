#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    char *word[100]; // 분할한 단어 저장할 배열
    int count = 0;
    scanf("%[^\n]s", s);

    // 문자 모두 소문자로 바꾸기
    for (int i = 0;i < strlen(s);i++)
        s[i] = tolower(s[i]);

    word[count] = strtok(s, " "); // 2차원 배열에 자른 단어 저장
    while (word[count] != NULL)
    {
        count++;
        word[count] = strtok(NULL, " "); // 자른 문자 다음부터 다시 자르기 위해 NULL
    }

    for (int i = count - 1; i >= 0; i--) // word배열 뒷부분부터 출력하면 역순
    {
        printf("%s ", word[i]);
    }

    return 0;
}