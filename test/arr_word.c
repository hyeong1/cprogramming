// 5개의 단어를 입력받아서 세로로 출력하기
// abc, ABC, 123 --> aA1, bB2, cC3
#include <stdio.h>

int main()
{
    char word[5][15] = {'\0'}; // 단어 입력받을 배열 선언 - 널값으로 초기화

    for (int i = 0; i < 5; i++)
        scanf("%s", &word[i]); // 단어 입력받기

    // 단어 출력
    for (int j = 0; j < 15; j++) // 열 값 만큼 반복
    {
        for (int i = 0; i < 5; i++) // 행 값 만큼 반복
        {
            if (word[i][j] != '\0')       // 널 값이 아니면 출력
                printf("%c", word[i][j]); // i행의 j번 열만 출력
        }
    }
    return 0;
}