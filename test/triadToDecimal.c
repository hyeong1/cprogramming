// 3진수 뒤집기
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solution(int n)
{
    int answer = 0, dupN;
    int triadSize = 0;
    int *triadN;

    // n -> 3진수 변환
    dupN = n;
    while (dupN > 0)
    { // 3진수 비트수 구하기
        dupN /= 3;
        triadSize++; // 3진수 크기
    }
    triadN = (int *)malloc(sizeof(int) * triadSize); // 비트수만큼 3진수 배열 동적 할당

    for (int i = 0; i < triadSize; i++)
    {
        triadN[i] = n % 3;
        n /= 3;
    }

    // 3진수 -> 10진수 변환
    for (int i = 0; i < triadSize; i++)
        answer += (triadN[triadSize - 1 - i] * pow(3, i));
    return answer;
}

int main()
{
    printf("%d\n", solution(45));  // 7
    printf("%d\n", solution(125)); // 229
    return 0;
}