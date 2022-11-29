// 문자열 연습문제 11
// 엔터키가 눌려질 때까지 사용자로부터 문자열을 입력받아서 문자열에 포함된 단어들을 역순으로 출력
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char *word[100]; // 분할한 단어 저장할 배열
    int count = 0;
    scanf("%[^\n]s", s);

    // 출력 예
    // hello world --> world hello
    word[count] = strtok(s, " "); // 2차원 배열에 자른 단어 저장
    while (word[count] != NULL)
    {
        count++;
        word[count] = strtok(NULL, " "); // 자른 문자 다음부터 다시 자르기 위해 NULL
    }

    for (int i = count - 1; i >= 0; i--) // word배열 뒷부분부터 출력하면 역순
        printf("%s ", word[i]);

    return 0;
}