// 문자열 안에서 단어의 개수 찾기
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Man is immortal, because he has a soul";
    char step[] = " ,\t\n"; // 분리할 문자
    char *token;
    int word = 0; // 단어의 개수를 셀 변수

    // 문자열을 전달하고 다음 토큰을 얻는다.
    token = strtok(s, step); // step에 해당하는 문자가 있으면 토큰 분리
    while (token != NULL)
    {
        word++; // 단어 개수 증가
        printf("토큰: %s\n", token);
        token = strtok(NULL, step); // 다음 토큰을 얻는다.
    }

    printf("단어의 개수: %d\n", word);
    return 0;
}