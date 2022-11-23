// 문자열 연습문제 3번
// 문자열 안에 포함된 특정한 문자의 개수를 세는 함수 작성 및 테스트
#include <stdio.h>
#include <string.h>

int FindChar(char *s, int c);

int main()
{
    char input[100];
    char word;
    printf("문자열을 입력하시오: ");
    gets(input);
    printf("개수를 셀 문자를 입력하시오: ");
    scanf("%c", &word);

    printf("%c의 개수: %d\n", word, FindChar(input, word));
    return 0;
}

int FindChar(char *s, int c)
{
    int count = 0; // 특정 문자의 개수를 셀 변수 선언
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == (char)c) // 특정 문자면
            count++;         // count 증가
    return count;
}