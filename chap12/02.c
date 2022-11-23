// 문자열 연습문제 2번
// 문자열을 입력으로 받아서 문자열에 포함된 모든 공백 문자를 삭제하는 함수 작성 및 테스트
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 문자열 입력 안받고 문자열에 미리 공백 문자열을 넣어줬을 때
char *DeleteSpace(char *s); // 공백 문자가 있는 문자열 s를 받아서 공백을 지운 새로운 문자열을 반환하는 함수

int main()
{
    char input[] = "i heelo i";

    printf("%s\n", DeleteSpace(input));

    return 0;
}

char *DeleteSpace(char *s)
{
    char *str = (char *)malloc(sizeof(s)); // 반환할 새로운 문자열 생성
    int k = 0;
    for (int i = 0; i < strlen(s); i++) // 매개변수 문자열 s에 공백 문자를 확인하는 반복문
        if (s[i] != ' ')                // 공백이 아니면
            str[k++] = s[i];            // 그 자리에 문자 넣고 인덱스 증가시키기
    str[k] = '\0'; // 마지막 문자에는 널값 넣기
    return str;
}*/

void DeleteSpace2(char *str); // 공백 문자가 있는 문자열에서 공백 빼고 나머지 문자 출력하는 함수

int main()
{
    char str[50]; // 입력받을 문자열 배열의 크기를 50으로 정적할당
    printf("공백 문자가 있는 문자열 입력: ");
    gets(str);
    // scanf("%s", str); // scanf는 공백이 포함되지 않아 공백이 있는 문자열을 입력할 수 없음
    DeleteSpace2(str);
    return 0;
}

void DeleteSpace2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) // str[i]가 null이 아닐동안 반복
        if (str[i] != ' ')
            printf("%c", str[i]);
}
