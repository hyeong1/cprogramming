// 정수와 해당 정수의 부호가 따로 주어질 때 정수 합 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
    int answer = 0;
    for (int i = 0; i < signs_len; i++)
    {
        if (!signs[i])
            answer -= absolutes[i];
        else
            answer += absolutes[i];
    }
    return answer;
}