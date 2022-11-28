// 문자열 연습문제 10
// 회문 여부 판별하기
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ToLower(char *s);      // 문자를 모두 소문자로 바꾸는 함수(대소문자 무시하기 위함)
void IsPalindrome(char *s); // 문자열이 회문인지 검사하는 함수

int main()
{
    char s[100];
    scanf("%[^\n]s", s);
    ToLower(s);

    IsPalindrome(s);

    return 0;
}

void ToLower(char *s)
{
    for (int i = 0; i < strlen(s); i++)
        s[i] = tolower(s[i]);
}

void IsPalindrome(char *s)
{
    for (int i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++) // 범위는 문자열 길이 절반까지 - i: 앞부분 인덱스, j:뒷부분 인덱스
    {
        // printf("i: %d, j: %d\n", i, j); --> i, j 값 확인용
        if (i == j) // i와 j의 값이 같으면 반복문 나감
            break;
        else if (s[i] != s[j]) // 문자 비교하는 중간에 서로 다른 문자가 있으면
        {
            printf("회문이 아닙니다.\n"); // 회문 아니라고 출력하고
            exit(0);                      // 강제종료
        }
        else        // s[i]와 s[j]가 같으면
            j -= 1; // 뒤 문자 인덱스 j를 1씩 감소
    }
    printf("회문입니다.\n");
}