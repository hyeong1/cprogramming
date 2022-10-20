#include <stdio.h>
#include <stdlib.h>

int check(int id, int password)
{
    static int superId = 1234;
    static int superPassword = 1234;
    static int tryCount = 0;
    tryCount++; // 함수 실행되면 tryCount 증가
    if (tryCount >= 3)
    {
        printf("횟수 초과\n");
        exit(1);
    }
    if (id == superId && password == superPassword)
        return 1;
    else
        return 0;
}

int main()
{
    int id, password;
    while(1)
    {
        scanf("%d\n%d", &id, &password);
        if (check(id, password)) // 1을 반환받으면
            break;
    }
    printf("로그인 성공\n"); // while문에서 break실행되면 출력 (3번 이상 오류시 강제로 exit(1)실행)

    return 0;
}