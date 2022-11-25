// 문자열 연습문제 7
// 사용자에게 질문을 제시하고 답변을 받아서 긍정이면 1 반환, 부정이면 0 반환하는 함수 작성 및 테스트
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int GetResponse(char *prompt);

int main()
{
    char response[5];
    printf("게임을 하시겠습니까? ");
    scanf("%s", response);
    // 대소문자를 구분하지 않기 위해 모두 소문자로 만들기
    for (int i = 0;i < strlen(response);i++)
        response[i] = tolower(response[i]);

    if (GetResponse(response)) // 긍정이면 (1을 반환받으면)
        printf("긍정적인 답변\n");
    else
        printf("부정적인 답변\n");

    return 0;
}

int GetResponse(char *prompt)
{
    char pos1[] = "yes", pos2[] = "ok", neg[] = "no"; // 긍정을 의미하는 문자열 pos1, pos2, 부정을 의미하는 문자열 neg 생성
    if (!strcmp(prompt, pos1) || !strcmp(prompt, pos2))
        return 1; // 답변이 긍정이면 1 반환
    else if (!strcmp(prompt, neg))
        return 0; // 답변이 부정이면 0 반환
}