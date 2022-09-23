// 로그인 시 아이디를 검사하는 함수 int check()
// check()가 한 번 호출 될 때마다 비밀번호를 물어보고 일치 여부를 0, 1로 반환
// 비밀번호는 1234로 고정되어 있다고 가정
// check()가 3번 이상 호출되고 비밀번호가 일치하지 않으면 check()에서 "로그인 시도 횟수 초과"메세지 출력
#include <stdio.h>
#include <stdlib.h>

int check();

int main()
{      
    while(1)
    {  
        if (check() == 1)
        {
            printf("로그인 성공\n");
            break;
        }
        else
            check();
    }
    
    return 0;
}

int check()
{
    static int tryCount = 0;
    int pw, inputPw;
    pw = 1234;
    
    printf("비밀번호: ");
    scanf("%d", &inputPw);

    tryCount++;
    if (tryCount >= 3)
    {
        printf("로그인 시도횟수 초과\n");
        exit(1);
    } 

    if (pw == inputPw)
        return 1;
    else
        return 0;

}