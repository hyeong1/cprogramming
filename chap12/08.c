// 문자열 연습문제 8
// 영문 문자열 안에 포함된 영단어의 개수를 계산하여 화면에 출력
#include <stdio.h>
#include <string.h>

int CheckWord(char* s); // 문자열에 포함된 영단어의 개수를 체크하는 함수

int main()
{
    char s[100];
    gets(s);

    printf("단어의 수는 %d입니다.\n", CheckWord(s));

    return 0;
}

int CheckWord(char* s)
{
    int check = 0;
    for (int i = 0;i < strlen(s);i++)
        if (s[i] == ' ')
            check++;

    return (check+1);
}