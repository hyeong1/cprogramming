// 문자열 반복
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RepeatArr(char *s, char *p, int size, int r);

int main()
{
    char inputS[20], outputS[200] = {'\0'};
    int t, r, size, index; // 총 반복, 문자 반복할 횟수, inputS의 크기, outputS의 인덱스 변수
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &r, &inputS);
        size = strlen(inputS);

        RepeatArr(inputS, outputS, size, r);
        memset(outputS, 0, sizeof(outputS)); // outputS 비우기
    }

    return 0;
}

void RepeatArr(char *s, char *p, int size, int r)
{
    int index = 0; // outputS의 인덱스
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < r; j++) // r번 반복
        {
            p[index] = s[i];
            index++;
        }
    }
    printf("%s\n", p);
}