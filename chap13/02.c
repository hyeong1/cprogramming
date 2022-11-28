// 구조체 연습문제 2
// 은행계좌를 다타내는 구조체 account를 선언하고 사용하기
#include <stdio.h>

typedef struct account
{
    int number;
    char name[20];
    int balance;
} ACCOUNT;

    
int main()
{
    ACCOUNT hong = {1, "홍길동", 100000};
    printf("{ %d, %s, %d }\n", hong.number, hong.name, hong.balance);
    return 0;
}