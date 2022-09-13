// 45분 일찍 알람 설정하기
// 원래 설정되어있는 알람을 45분 앞서는 시간으로 바꾸는 프로그램 
// H시 M분 입력, 시간은 24시간 표현
#include <stdio.h>

int main()
{
    int H, M;
    printf("시간 입력: ");
    scanf("%d %d", &H, &M);

    M += 45;
    
    if (M >= 60) // M + 45 == 60분이 넘을 때
    {
        H++;
        M = M - 60;
        if (H == 24) // H가 24시가 되면 자정으로 바꿈 
            H = 0;
        printf("%d %d", H, M);
    }
    else 
        printf("%d %d", H, M);

    return 0;
}