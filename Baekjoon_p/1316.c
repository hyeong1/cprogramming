/*
그룹 단어 체커
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <string.h>

int GroupWordCheck(const char *word);

int main()
{
    char word[100];
    int wordN;     // 입력할 단어 개수
    int count = 0; // 그룹 단어 체크할 변수
    scanf("%d", &wordN);

    for (int i = 0; i < wordN; i++)
    {
        scanf("%s", word);
        count += GroupWordCheck(word);
        memset(word, 0, 100 * sizeof(word[0]));
    }

    printf("%d", count);

    return 0;
}

int GroupWordCheck(const char *word)
{
    char alphabet[26] = {0};

    for (int i = 0; i < strlen(word); i++)
        alphabet[(int)word[i] - 97]++;

    // 그룹 단어 체크
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > 1) // 알파벳 빈도수가 1보다 클 경우
        {
            for (int j = 0; j < strlen(word); j++) // word 문자열에서
            {
                if (word[i] == word[j]) // 빈도수가 2 이상인 문자를 찾아서
                {
                    if (word[j] != word[j + 1]) // 뒤의 문자와 비교
                        return 0;
                    else
                        return 1;
                }
            }
        }
    }
    return 1;
}