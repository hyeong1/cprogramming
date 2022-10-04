// 오븐시계 문제
#include <stdio.h>

int main()
{
    int H, M, needM;
    scanf("%d %d\n%d", &H, &M, &needM);
    M += needM; 
    H += M / 60; // 시각에 분을 60으로 나눈 몫을 더함
    M = M % 60;  // 분은 60의 나머지만 저장
    if (H >= 24) // 시각이 24시를 넘을경우
        H -= 24; // 해당 시각에서 24를 빼고 출력
    
    printf("%d %d", H, M);
    return 0;
}