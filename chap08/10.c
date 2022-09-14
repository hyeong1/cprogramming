// 9번에서 만든 b_rand()함수 이용하여 간단한 동전 던지기 게임 시뮬레이션
// 컴퓨터가 동전 던지고 사용자가 앞뒤 맞추기
// 난수가 1이면 앞면, 0이면 뒷면
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
    srand(time(NULL));
    int comNum, userNum; // 컴퓨터가 던진 동전 변수, 사용자 입력 변수
    char userChoice;     // '계속하시겠습니까?'에 대한 대답 저장 변수

    do
    {
        comNum = b_rand();

        printf("앞면 또는 뒷면(1 또는 0): ");
        scanf("%d", &userNum);
        if (userNum == comNum)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");

        printf("계속하시겠습니까?(y 또는 n): ");
        scanf(" %c", &userChoice);
    } while (userChoice != 'n'); // userChoice가 n이 아닐동안 반복
    
    return 0;
}

int b_rand()
{
    return rand() % 2;
}