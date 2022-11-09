#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char *solution(const char *phone_number)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *answer;
    int len = strlen(phone_number);
    answer = (char *)malloc(sizeof(char) * (len + 1));

    for (int i = 0; i <= len; i++) // 입력한 전화번호 answer에 복사
        answer[i] = phone_number[i];

    for (int i = len - 5; i >= 0; i--)
        answer[i] = '*'; // 뒤 4자리 제외하고 "*"으로 바꾸기
    return answer;
}