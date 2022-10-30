// 단어의 개수
// 영어단어와 공백으로 이루어진 문자열 입력
// 입력 문자열에서 몇 개의 단어가 있는지 구하기
#include <stdio.h>
#include <string.h>

int main()
{
    char words[1000000] = {'\0'};
    int size, count = 0; // 문자열 길이 변수, 단어 개수 체크할 변수 선언
    //scanf("%[^\n]s", words); // 공백 포함 문자열 입력
    gets(words);

    size = strlen(words);
    //printf("%d\n", size);
    for (int i = 0;i < size-1;i++)
    {
        if (words[i] == ' ')
            count++;
    }
    
    if (words[0] != ' ')
        printf("%d", count+1);
    else
        printf("%d", count);
    return 0;
}