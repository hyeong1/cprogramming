// 구조체 연습문제 3
// 이메일을 표현할 수 있는 구조체를 정의
// 적당한 초기값을 부여한 후, 출력
#include <stdio.h>

typedef struct email
{
    char title[500];    // 제목
    char sender[500];   // 수신자
    char receiver[500]; // 발신자
    char content[500]; // 내용
    char data[100];     // 날짜
    int pri;           // 우선순위
}EMAIL;

int main()
{
    EMAIL ex1 = {"안부 메일", "hyeong@pcu.ac.kr", "2033041@pcu.ac.kr", "hello", "2022/12/02", 1};
    // 출력
    printf("제목: %s\n", ex1.title);
    printf("수신자: %s\n", ex1.sender);
    printf("발신자: %s\n", ex1.receiver);
    printf("내용: %s\n", ex1.content);
    printf("날짜: %s\n", ex1.data);
    printf("우선순위: %d\n", ex1.pri);

    return 0;
}