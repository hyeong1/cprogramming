/*
연산을 반복해서 입력된 정수를 1로 바꿈
사용된 연산 최소 횟수 출력
<연산>
1.정수가 3으로 나누어떨어지면, 3으로 나눔
2.정수가 2로 나누어떨어지면, 2로 나눔
3.1을 뺌
*/
#include <stdio.h>

int main()
{
    int num;       // 입력받는 정수
    int times = 0; // 연산 최소 횟수 체크
    int finish = 1;

    scanf("%d", &num); // 정수 입력받기

    printf("%d\n", times);

    return 0;
}