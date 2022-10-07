// 배열에 서로 다른 값이 몇개인지 출력
#include <stdio.h>

int main()
{
    int a[6] = {0, 0, 1, 1, 2, 2}; // 원하는 결과 -> 3 출력하기
    int count[3], index, repeatN; // 중복 횟수 체크할 배열, 카운팅 배열 인덱스, 중복된 수의 개수 변수 선언
    repeatN = 0;
    for (int i = 0;i < 6;i++)
    {
        index = a[i];
        count[index]++;
    }
    for (int i = 0;i < 3;i++)
    {
        if (count[i] > 2)
            repeatN++;
    }
    printf("%d\n", repeatN);
    return 0;
}