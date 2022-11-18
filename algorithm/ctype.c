// 이상한 문자 만들기 - 프로그래머스 연습문제 Lv1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char *solution(const char *s)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *answer = (char *)malloc(strlen(s) + 1);
    int check = 0;
    strcpy(answer, s);

    for (int i = 0; i <= strlen(s); i++)
    {
        if (!(check % 2)) // 공백을 기준으로 짝수번째 문자는 대문자로
        {
            answer[i] = toupper(answer[i]);
            check++;
        }
        else // 홀수번째 문자는 소문자로 변환
        {
            answer[i] = tolower(answer[i]);
            check++;
        }
        if (isspace(answer[i])) // i번째 문자가 공백이면 -isspace()함수 사용해서 공백 체크하기
        {
            check = 0;
            continue;
        }
    }
    return answer;
}

int main()
{
    char s[] = "hhhh hhhh";
    printf("%s\n", solution(s));
    return 0;
}