// h층, w개의 방이 있는 호텔
// 손님이 오는 순서대로 101호, 201호, ..., 102호, 202호, ... 배정
// 전체 테스트 케이스 t받고
// h, w, n번째 손님 입력받아서 n번째 손님이 배정받는 방 출력하기
#include <stdio.h>

int main()
{
    int h, w, n, t; // 층수, 방 개수, 손님 몇 번째인지, 전체 테스트 케이스 변수
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);

        // 층수는 n을 층수로 나눈 나머지
        if (n % h == 0)      // 나머지가 0이면
            printf("%d", h); // h 층수 출력
        else
            printf("%d", n % h); // 층수를 나머지로 출력

        // 방 번호는 printf("%02d" , n/h + 1);
        if (n % h == 0)              // n이 h의 배수면
            printf("%02d\n", n / h); // 1 더하지 않고 출력
        else
            printf("%02d\n", n / h + 1);
    }
    return 0;
}