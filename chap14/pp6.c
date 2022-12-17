// 이중포인터 연습문제 6
// 문자열을 가리키고 있는 포인터의 배열을 인수로 받아서
// 문자열을 알파벳 순으로 정렬시키는 함수 작성
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_string(char *list[], int size);
int convert_string(const void *a, const void *b);

int main()
{
    char str[3][50]; // 최대크기 49의 문자 총 3개 입력받을 수 있는 배열
    int size = sizeof(str) / sizeof(str[0]);
    // 문자열 입력
    for (int i = 0; i < size; i++)
        scanf("%s", str[i]);

    // 알파벳 순으로 정렬
    // sort_string(str, size);
    qsort(str, size, sizeof(str[0]), convert_string);
    // 정렬 결과 출력
    for (int i = 0; i < size; i++)
        printf("%s\n", str[i]);

    return 0;
}

void sort_string(char *list[], int size)
{
    // 각 행의 첫 글자만 비교해서 행 정렬만 수행
    int least;
    char *temp;
    for (int i = 0; i < size; i++)
    {
        // 최솟값 찾기
        least = i;
        for (int j = i + 1; j < size; j++)
            if (strcmp(list[j], list[least]) < 0)
                least = j;
        // 자리 바꾸기
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
}

int convert_string(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}